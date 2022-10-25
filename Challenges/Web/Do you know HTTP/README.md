## 题目描述

检查一下你的学习成果吧

仅仅学习了HTTP请求头相关内容，你可能会发现浏览器已经不足以让你便利的去解决问题了，试试burpsuite！

## 题解

这是一道想让大家学习http请求头相关知识以及请求报文格式相关知识的题目

每一次请求都会有提示信息出现在返回里面

首先提示用'HS'请求试试，故修改请求方式

![image-20210921140729729](C:\Users\Cys\AppData\Roaming\Typora\typora-user-images\image-20210921140729729.png)

![image-20210921140837882](C:\Users\Cys\AppData\Roaming\Typora\typora-user-images\image-20210921140837882.png)

然后是要用本地IP，加XFF头或者Client-IP均可

![image-20210921141202464](C:\Users\Cys\AppData\Roaming\Typora\typora-user-images\image-20210921141202464.png)

要从`www.ltyyds.com`过来，即需要添加Referer头

![image-20210921141231492](C:\Users\Cys\AppData\Roaming\Typora\typora-user-images\image-20210921141231492.png)

最后是修改UA头

![image-20210921141318815](C:\Users\Cys\AppData\Roaming\Typora\typora-user-images\image-20210921141318815.png)