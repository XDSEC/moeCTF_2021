## 题目描述

在本题中，你需要学习如何发起一个HTTP请求。  

*随着需要构造的请求越来越复杂，希望同学们还是以代码的形式解答出这道题目*  

在浏览器的"开发者工具"中，我们可以看到浏览器在展示一个网页时都做了什么事情。在几乎所有页面上，我们都可以通过快捷键`F12`打开开发者工具。

**hint：**—10points 

<details>
	<summary>
		你确定要直接看答案么？
	</summary>
	相信你已经安装好了Python并且安装好了requests包
	<br>传送门：https://www.python.org/ftp/python/3.9.7/python-3.9.7-amd64.exe
<pre><code>import requests
print(requests.get(
    'http://47.93.215.154:10002',
    cookies={'VIP': '1'}
).text)</code></pre>
	</details>

## 题解

除了上述方法外，还可以

1）浏览器F12

![image-20210921013111399](C:\Users\Cys\AppData\Roaming\Typora\typora-user-images\image-20210921013111399.png)

![image-20210921013131793](C:\Users\Cys\AppData\Roaming\Typora\typora-user-images\image-20210921013131793.png)

2）......

