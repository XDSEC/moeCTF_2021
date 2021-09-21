# 2021moectf  RK 22低质量萌新的WP

20级打21级新生赛被新生爆杀，想想都刺激

## Crypto

笑死，只会做指北，坐等dbtgiegie的wp

## Reverse

笑死，指北加上恰烂分RE签到一血

1. welcome_to_the_world_of_re

   直接拖进IDA看flag，菜狗狗生第一个一血

## Classical Cryptogarphy

1. Augustine‘s Way

   不知道和人名有什么关系，直接凯撒在线解密

   flag:moectf{e3sy_Au9u5t1ne!}

2. 笑死，没有2，wsfw

## Misc

1. find_me

   拖进010editor出flag

   flag:moectf{hs_g1v3_u_fl@g}

2. Homework

   刚刚拿到题感觉和实验班选拔我唯一拿到flag的那一题wordword有点像，但是看到文档里面有漏出来一半flag，把word隐藏字符那个设置打开（是叫这个吧）还是看不到后面一半。折腾老半天结果用pages打开直接出了前半段flag，至今搞不懂原理

   flag:flag{0h_U_find_me}(后半段flag不记得是不是这个了)

3. Macross

   这他妈是什么东西

   > 含树：Macross是什么？ Noah：超时空要塞 含树：？？？ Noah：谷歌必应百度，请

   卧槽啥时候给的附件？

4. White Album

   Misc题写WP不给图多少有点抽象了

   用tweakpng将长宽改成一样出了个底下出了个二维码（不知道是什么码，感谢XDU第一Web🤚帮忙扫了个码（之前一直去找这个码到底是什么码，不如直接在线网站梭哈

   今日水群看到Frank发了个啥PDF 417？过会看看去

   ![white_album.png](https://img13.360buyimg.com/ddimg/jfs/t1/207291/10/1502/785556/61494083Ec96cb075/4fa7bfbb3ab301c3.png)

5. Phone Call

   > 救命！👴🏻被困在东南亚当码农苦力了……现在我只知道隔壁房间里有一座电话可以拨打到外界，但是只有一个电话号码可以拨通，我昨天偷听了好久，只偷听到了老大哥拨号的声音，你可以帮我破译出电话号码嘛？flag为`moectf{电话号码}`，电话号码中请使用-作为段分隔符。

   对着手机拨号键盘听出来了前面两位是11，合理猜测1145149191810（好臭的协会

   但是后面几位出不来，因为147，258，369混在一起基本听不出区别，拖进Audacity里面看波形也看不出个所以然，波形都差不太多，等一位大佬来救RX

6. 社工题

   Noah的博客是什么？bb的博客里面有友链么？没看，直接寄

7. 好康的

   MKV格式，第一次完整看完发现后面还有时长但是播放器自动跳了。Bing上面转了一圈也没有看到类似题型，只是试着把音频和字母分离了，还是一无所获（为什么这里面也有114514

## Pwn

和Reverse一样没怎么接触过的区域（其他也没怎么接触过，同样是指北加上恰烂分签到题

1. test_your_nc

   为了显得这篇WP很有含金量专门再出一遍flag的屑

   flag:草，环境好像挂掉了，无所谓了，假装有flag

   > nc是什么，奶茶？农场？你猜？

## Web

做完HTTP之后就没看Web了，主要是地狱通信真的玩不明白。唯一可惜的是没看看反序列化的题，毕竟blackwatch给出的入会题目就是反序列化其他几题估计看了也不会做(鼠鼠web人想把指北都写进WP凑点字数)

1. 指北-GET

   ``` php
   <?php
   include "flag.php";
   $moe = $_GET['moe'];
   if ($moe == "flag") {
       echo $flag;
   }else {
       highlight_file(__FILE__);
   }
   ```

   。。。

   payload:/?moe=flag

   flag:moectf{We1c0me_t0_CTF_Web!}

2. 指北-POST

   ```php
   <?php
   include "flag.php";
   $moe = $_POST['moe'];
   if ($moe == "flag") {
       echo $flag;
   }else {
       highlight_file(__FILE__);
   }
   ```

   hackbar传参

   flag:moectf{POST_1s_an_1mp0rtant_m3th0d!}

3. 指北-Cookie

   > You are not VIP,I will give flag to VIP!

   F12看到cookie里面VIP=0

   hackbar传VIP=1出flag

   flag:moectf{C00kie_1s_sw33t!}

   

4. 2048

   胡乱玩一把发现要50000+（建议把分数限制改成114514），burp抓包如下

   改score为50001,出flag

   flag:moectf{2048_1s_intere5t1ng!}

   > GET /flag.php?score=50001 HTTP/1.1
   > Host: 47.93.215.154:5001
   > User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:89.0) Gecko/20100101 Firefox/89.0
   > Accept: */*
   > Accept-Language: zh-CN,zh;q=0.8,zh-TW;q=0.7,zh-HK;q=0.5,en-US;q=0.3,en;q=0.2
   > Accept-Encoding: gzip, deflate
   > Connection: close
   > Referer: http://47.93.215.154:5001/
   > Cookie: VIP=1

5. Web-Inc

   md5数组绕过

   flag:写完WP去打LOL去了，不想再出flag了

   > 刚学习web的vk听说有两种HTTP请求方式叫**get**和**post**,不知道学弟学妹们学会了吗？ 增加了一个叫**md5**的东西，想想怎么绕过它吧！！！！

6. ezinclude

   ```php
   <?php
   error_reporting(0);
   if(isset($_GET['file'])){
       $file = $_GET['file'];
       include($file);
   }else{
       highlight_file(__FILE__);
   } 
   ```

   文件包含漏洞

   payload:?file=php://filter/convert.base64-encode/resource=flag.php

   > PD8kZmxhZz0ibW9lY3Rme3hkc2VjNmFzZGdhczdhaGZzZmF4Y3pjfSI7Pz4=

   flag:moectf{xdsec6asdgas7ahfsfaxczc}

7. baberce

   ``` php
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

   playload:?rce=c\at${IFS}f\lag.php

   flagmoectf{Do_y0u_l1k3_Rcccccccccccccce?}

8. Do you know HTTP?

   > 检查一下你的学习成果吧
   >
   > 仅仅学习了HTTP请求头相关内容，你可能会发现浏览器已经不足以让你便利的去解决问题了，试试burpsuite！

  抓包！

    1. 用HS请求 改POST为HS
       2. 用本地ip地址才能访问：X-Forwarded-For:127.0.0.1
       3. “我希望你是从'www.ltyyds.com'过来的：伪造来源网址
       4. 浏览器是LT,改！user-agent
       5. 出flag！moectf{HTTPHeaders_1s_s0_ea5y!}

## 问卷题

你看现在哪里还有烂分啊，全都是问卷题的烂分，你嫌烂我还嫌烂呢（