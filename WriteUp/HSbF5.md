---
author: HSbF5
date: 2021-09-21
group: Crypto
---

# Writeup

## Web

### Web安全入门指北—GET
  理解：get请求可以从服务器获取数据，可包含在url内。<br/>
  观察：$moe=$_GET['moe']。<br/>
  题解：?moe=flag->得到flag。<br/>
### Web安全入门指北—POST
  理解：post请求可以修改或递交数据，一般不包含在url内。<br/>
  观察：$moe=$_POST['moe']。<br/>
  题解：使用在线post工具->moe=flag->得到flag<br/>
### Web安全入门指北—小饼干
  理解：在本地存储从而能保存用户信息。<br/>
  观察：小饼干和VIP。<br/>
  题解：修改VIP的cookies 值为1->得到flag。<br/>
### 2048
  理解：还是get。<br/>
  观察：看网页源码->发现req.open("GET","flag.php?score="+obj.score,true)。<br/>
  题解：flag.php?score=114514->得到flag。<br/>
### Web_Inc
  理解：比对get和post的值的md5，md5()操作数组一律返回false。<br/>
  观察：$a=$_GET['a']、$b=$_POST['b']、$a!=$b&&md5($a)===md5($b)。<br/>
  题解：get a[]=0、post b[]=1->得到flag。<br/>
### ezinclude
  理解：（仍未完全理解）通过include可以将文件内容插入php中而被显示。<br/>
  观察：include($file)->不太会于是网上冲浪。<br/>
  题解：想偷懒->?file=php://filter/resource=flag.php->什么都没有输出->乖乖地以base64输出->解密->得到flag。<br/>
### babeRCE
  理解：服务器通过system()执行其中的命令。<br/>
  观察：屏蔽了很多字符，不过Linux系统下可以用${IFS}占位。<br/>
  题解： get rce=grep${IFS}m${IFS}f\lag.php->得到flag。<br/>
### Do you know HTTP?
  理解：curl -A, -H, -e可以递交UA、Header、Referrer等参数。<br/>
  观察：以HS请求->发现需要在127.0.0.1->发现需要请求来源为www.ltyyds.com->发现需要UA为LT。<br/>
  题解：curl -X HS 47.93.215.154:5002 -H "X-Forwarded-For:127.0.0.1" -e "www.ltyyds.com" -A "LT"->得到flag。<br/>

## PWN

### test_your_nc
  理解：netcat可以用来扫描端口、传输文件、执行命令等。<br/>
  观察：同hint。<br/>
  题解：按照所给指令操作->用cat得到flag。<br/>
### Int_overflow
  理解：int范围在2E-31到2E31 -1。<br/>
  观察：整数溢出而且为负数。<br/>
  题解：输入超出int范围的负数->貌似溢出后并没有自动返回信息->用cat得到flag。<br/>

## Reverse

### welcome_to_the_world_of_re
  理解：通过逆向工具反编译程序得到伪代码。<br/>
  观察：是 64 位程序且hint提到ida。<br/>
  题解：用ida64得到伪代码->在hex视图里搜moectf->得到flag。<br/>
### Realezpy
  理解：pyc是py编译后产生的程序。<br/>
  观察：同hint。<br/>
  题解：用6uncompy6得到伪代码->自己写py调用加密函数输入大小写字母和数字->肉眼比对得到flag。<br/>

## Misc

### find_me
  理解：图片隐写。<br/>
  观察：同hint。<br/>
  题解：丢hex视图里搜 moectf->得到flag。<br/>
### Homework
  理解：文件隐写。<br/>
  观察：打开docx->看到文本框船锚标记->说明有隐藏文本框。<br/>
  题解：解压docx->打开/word/document.xml->寻找<w:t>之间的flag片段->得到flag。<br/>

## Crypto

### beginOfCrypto
  理解：我超我慌了我总结不出我的理解。<br/>
  观察：将flag中每个字符转为对应10进制ascii码保存为数组->以每个ascii码为指数对e进行幂运算->一一输出。<br/>
  题解：取每个输出值的自然对数的整数值->转为字符->得到flag。<br/>
### babyMultiple
  理解：密码蒟蒻只会手撕我爬了。<br/>
  观察：用定义的encode函数对 0-9,a-z,A-Z,_加密flag括号内的部分->输出。<br/>
  题解：手打程序将0-9,a-z,A-Z,_借用encode函数加密->将加密后的字符与原结果比对->得到flag。<br/>

## Classical Cryptography

### Augustine's Way
  理解：连RSA都算不出来的我只能做入门密码学题目了悲。<br/>
  观察：比对加密后的开头npfdug与moectf->发现每个字母向后偏移一位。<br/>
  题解：手撕->得到 flag。<br/>

# 展望
  努力114514天，我也要入门密码学。

