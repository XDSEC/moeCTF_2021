## 题目描述

在本题中，你需要学习如何发起一个HTTP请求。
也许浏览器已经无法满足你的需求了。。。吗？

**hint1**:

如何发送POST请求？

**hint2**:—10points

安装Python...
```bash
pip3 install requests
```
...
```python
import requests
requests.post( # 后面我不会了（
```

**hint3:**—10points

浏览器真的没法做这道题么？

```html
<form action="http://47.93.215.154:10001" method="POST">
	<input type="hidden" name="moe" value="flag" />
	<input type="submit" />
</form>
```

试试把这段代码复制粘贴到一个文件里，起名为`随便.html`，然后用浏览器打开，点一下按钮试试？

## 题解

除hint中的两种解法外，还可以

1）火狐或者谷歌都可以安装hackbar，利用hackbar可以直接发送POST请求

2）postman

3）burpsuite

4）......

