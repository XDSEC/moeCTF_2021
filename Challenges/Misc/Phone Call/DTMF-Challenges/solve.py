'''
Created on 2021/9/23.

exp for MoeCTF 2021 challenge: phone call

this file is under the WTFPL license.<http://www.wtfpl.net/>

DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE 
Version 2, December 2004 

Copyright (C) 2021 Reverier-Xu <reverier.xu@outlook.com> 

Everyone is permitted to copy and distribute verbatim or modified 
copies of this license document, and changing it is allowed as long 
as the name is changed. 

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE 
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION 

0. You just DO WHAT THE FUCK YOU WANT TO.

'''


import numpy, sys
from scipy.io import wavfile
from traceback import print_exc

# 从Wikipedia上复制的DTMF表
DTMF_TABLE = {
    (697, 1209): "1",
    (697, 1336): "2",
    (697, 1477): "3",
    (770, 1209): "4",
    (770, 1336): "5",
    (770, 1477): "6",
    (852, 1209): "7",
    (852, 1336): "8",
    (852, 1477): "9",
    (941, 1209): "*",
    (941, 1336): "0",
    (941, 1477): "#",
    (697, 1633): "A",
    (770, 1633): "B",
    (852, 1633): "C",
    (941, 1633): "D"
}

if len(sys.argv) != 2:
    print('爬爬，脚本都不会用')

file_name = sys.argv[1]

try:
    fps, data = wavfile.read(file_name)
except FileNotFoundError:
    print ("找不到文件：", file_name)
    exit()
except ValueError:
    print ("读取出错：", file_name)
    exit()

else:
    if len(data.shape) == 2: 
        data = data.sum(axis=1)

# 切片，音频中能听出来有21个音和3处停顿，于是切成24片。
piece = int(len(data) // 24)

try:
    for i in range(0, len(data), piece):
        signal = data[i:i+piece]
        
        frequencies = numpy.fft.fftfreq(signal.size, d=1/fps) # 获得频率
        amplitudes = numpy.fft.fft(signal) # 对信号进行傅里叶变换，得到振幅

        # 提取出此段音频中的低频声音
        i_min = numpy.where(frequencies > 0)[0][0] # 过滤负频率
        i_max = numpy.where(frequencies > 1050)[0][0] # 过滤高频率
        
        freq = frequencies[i_min:i_max] # 频率
        amp = abs(amplitudes.real[i_min:i_max]) # 振幅

        aim_low_freq = freq[numpy.where(amp == max(amp))[0][0]]

        delta = 20
        best = 0

        # 对每个频率进行比较，找出最接近的频率
        for f in [697, 770, 852, 941]:
            if abs(aim_low_freq-f) < delta:
                delta = abs(aim_low_freq-f)
                best = f

        aim_low_freq = best

        # 同样的过程提取出高频
        i_min = numpy.where(frequencies > 1100)[0][0]
        i_max = numpy.where(frequencies > 2000)[0][0]

        freq = frequencies[i_min:i_max]
        amp = abs(amplitudes.real[i_min:i_max])

        aim_high_freq = freq[numpy.where(amp == max(amp))[0][0]]

        delta = 20
        best = 0

        for f in [1209, 1336, 1477, 1633]:
            if abs(aim_high_freq - f) < delta:
                delta = abs(aim_high_freq - f)
                best = f

        aim_high_freq = best
        ans = ''

        if aim_low_freq == 0 or aim_high_freq == 0: # 空音，输出连接符
            ans = '-'
        elif DTMF_TABLE[(aim_low_freq, aim_high_freq)] != ans:
            ans = DTMF_TABLE[(aim_low_freq, aim_high_freq)]
        print(ans, end='', flush=True)

    print()
except:
    print('哦嚯，完蛋')
