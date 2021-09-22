**Suiren第一次写write up。**  
结束前两三天才想起来，reverse和pwn都没怎么做，就不赘述了。  
只挑一部分写罢。
#古典密码#
**和去年的题目挺像的，不过也确实，古典密码差不多发展到头了。**
## old but popular :##
如题，经久不衰的，那必然是栅栏和凯撒了。一步栅栏，一步移位，答案就出来了。不过移位好像有点出入？  
**moectf{c453r_w4nt_t0_g0_ou7_th3_w0r1d}**
## EZ Vigenere :##
维吉尼亚多表替代，按着表对罢。发现密钥第一位是r，秒懂。  
**moectf{the_key_of_vigenere_is_rxyyds}**
## モンスターを縫う！ ##
名副其实的缝合怪。由各种古典密码缝合而成的。  
flag1：明示caesar  
flag2：提供字母密钥 那就是virgenere  
flag3：数字密钥 fence  
flag4：ABAAA 一眼培根  
flag5: 13 即ROT13  
flag6: 点+横 一眼morse 结果末尾的\u%7d是Unicode编码  
**moectf{cl@ssical_cipherlpr3tTY_G00D!}**
# Web #
**今年web题挺质量挺高，挺适合我这样的新手做。**
## Cookie :##
页面显示flag只给cookie，于是查看cookie，发现其值为0.说明我不是VIP！  
于是修改其值为1 于是flag就交给我了。  
**moectf{C00kie_1s_sw33t!}**
## 2048 :##
web题下js类的题目，在游戏开始和结束时都会发送请求。开bp！  
开游戏，抓包，乱玩，死了，找到包发到repeater，分数一改，发过去，flag就有啦。  
**moectf{2048_1s_intere5t1ng!}**
## Web_Inc :##
百度搜索:md5绕过  
已知数组是不可哈希类型，而md5是基于哈希算法。所以ab赋为不同值数组，md5之后都是NULL但值不同所以就过了。flag get！  
**moectf{xdsec3gf9dfg62fh342}**
## ez_include ##
百度搜索：文件包含漏洞。  
然后稀里糊涂地过了。  
**moectf{xdsec6asdgas7ahfsfaxczc}**
## Do your know http? ##
发送http请求的集大成题，一个bp解决全部问题。  
首先他要求你从本地访问，那就是访问伪造。 
抓到的包加上X-Forwarded-For:127.0.0.1  
然后他又要求你从www.ltyyds.com访问，那就是Referer伪造。
再加上Referer:www.ltyyds.com  
最后他又让用LT浏览器访问这个网站，要求这么多啊。  
这里又涉及user-agent伪造，为此我还特地去下载了LT浏览器……后来发现只需要把user-agent值改成LT就行了。草    
于是拿到flag！  
**moectf{HTTPHeaders_1s_s0_ea5y!}**
# Misc #
**misc题目难度和去年差不多（都很难**
## Homework :##
word2003以后的版本文件后缀名都是.docx了，其实所有xlsx pptx docx都是rar形式的压缩包。  
于是改后缀名进入打开包含文件所有内容的document.xml文件一行一行找很快就能找到。不过flag前缀并不是moectf。有点坑人  
**flag{Oh_U_f1nd_m3!}**
## White Album :##
打开一看，好家伙真是东马雪菜。老二次元了。  
老规矩，010查16进制，尝试用压缩包打开一无所获。photoshop找不到第二图层，stegsolve也不能发现什么线索emmm……  
于是考虑该图片文件高度，之后可以看见下面隐藏的条形二维码，截下下面的码，图片搜索，最后发现这种码叫pdf417，在专门网站解码拿到flag。  
**moectf{WhY_@r3_u_s0_5K1ll3D}**  
**经 典 咏 流 传**
## Phone Call :##
**臭题**  
开头还真把我骗去查了东南亚地区的手机号 然而并没有什么卵用。  
用audacity打开，查看频谱图大致看看频率走向以及大致高度。大概有个印象。  
然后掏出手机，按键音调最大，选段循环播放再跟着按，就能练出绝对音感（误  
比较频谱线形状可以确定同样的键。147 258 369 大致同音不同调。  
经过比较发现前三位号码是114 于是突然**警觉**   
再看一眼发现号码是6-7-4-4结构 （**心肺骤停**  
后八位号码也可以通过比较频谱和音感解出来。  
**moectf{114514-1919810-7738-9634}**  
去年misc也是解base64臭码，难道xdsec全是homo？
  
  
*个人水平有限，以上内容仅供参考。*