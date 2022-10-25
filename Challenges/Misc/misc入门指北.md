# misc入门指北



---

## misc是什么？

> Miscellaneous 简称 MISC，意思是杂项, 混杂的意思。

* **杂项**，通常涉及**编码解码**、**隐写**、**流量分析**、**电子数据取证**等内容。
* 解题过程中会涉及各方面的知识、各种**花式技巧**以及各种各样的工具。
* 主要考察选手的**快速理解、快速学习能力**以及各种知识积累的深度、广度。



---

## misc的分类

* **编码&解码：** base全家桶、BrainFuck、与佛论禅……
* **隐写：** 图片隐写、音频隐写、视频隐写……
* **加解密：** 压缩包破解、文档破解、古典密码的加解密……
* **流量分析：** web 流量、usb 流量、蓝牙流量……
* **电子数据取证：** 硬盘取证、内存取证……



### 编码&解码

> **编码** 是信息从一种形式或格式 **转换为另一种形式** 的过程。用预先规定的 **方法** 将文字、数字或其它对象编成数码。
> **解码**，是编码的**逆过程**。

#### 常用工具

* `python` - `base64`, `libnum`, `Cryptodome`
* `Cybercheif`
* 各种在线工具, e.g. [CTF在线工具-CTF工具](http://ctf.ssleye.com/)
* 搜索引擎, 不认识的编码丢进去搜搜试试

#### 部分常见编码样例

* Base64 编码

  除base64 之外, base 家族还有: Base16 \ base32 \ Base85

* Url 编码

* 进制转换编码

   一个很长的二或十或十六进制数字，通过python的libnum库可转成字符串

* JSfuck \ jother

  本质上都是 JavaScript, 直接浏览器 F12，复制进 console 中回车即可解码

* brainfuck

  由> < + - . , [ ] 共8种字符构成

* Unicode

  由“&#”开头，可用来表示汉字、字母、数字，也可由“\u,U+,%u”开头



### 隐写

> **隐写术** 是一门关于 **信息隐藏** 的技巧与科学,  **信息隐藏** 指的是不让预期接收者之外的任何人知晓信息的传递或者内容
> 隐写的信息看起来像一些其他的东西, 例如：一张购物清单，一篇文章，一篇图画或者其他“伪装”的消息。

隐写大致可以分为以下几种类型:

* 图片隐写: 宽高修改 \ LSB隐写 \ 盲水印 ......
* 音频隐写: 摩尔斯电码 \ 频谱 \ midi文件 ......
* 文档隐写: office文件 \ 零宽字符隐写  ......
* 视频隐写: 帧隐写 \ 视频轨道 \ 字幕 ......
* 压缩包伪加密

#### 网络资料

* 文件头: [常见文件文件头](https://zhuanlan.zhihu.com/p/158980459)
* ga1xy师傅的博客: [Misc相关笔记 - Ga1@xy's Wor1d](http://www.ga1axy.top/index.php/archives/4/)

#### 常用工具

* linux 系统中的 `binwalk`, `formost`, `string` 等工具
* 二进制编辑器, 例如: `010 Editor`, `Ultra Edit`, `Win Hex` 等
* 图片隐写工具, 例如: `Outguess`, `Stegsolve`, `openstego`, `steghide` 等
* 一个音频编辑器, 例如: `Audacity`, `Adobe Audition` 等
* 一个视频编辑器或好用的视频播放器, 例如: `Vegas`, `Potplayer`, `handbake` 等
* 用于爆破压缩包的 python 脚本或工具, 后者常见的有: `Accent Password Recovery`, `ARCHPR`, `john the ripper`, `hashcat` 等
* 以及一堆遇到题目时需要在网上找的工具, 换言之, 一个用得惯的搜索引擎 + 这个搜索引擎的高级搜索功能



### 流量分析

> **网络流量分析** 是指捕捉网络中流动的数据包，并通过查看包内部数据以及进行相关的协议、 流量分析 、统计等来发现网络运行过程中出现的问题。 CTF比赛中，通常比赛中会提供一个包含流量数据的 **PCAP** 文件，进行分析 。

#### 网络资料

* [图解OSI七层模型 - 简书 (jianshu.com)](https://www.jianshu.com/p/9b9438dff7a2)
* [WireShark使用教程 - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/92993778)

#### 常用工具

* wireshark
* python 的 `dpkt`, `pcapy`, `pyshark` 库



### 电子数据取证

> 电子数据取证是指能够为法庭接受的、足够可靠和有说服力的、存在于计算机和相关外设中的电子证据的确定、收集、保护、分析、归档以及法庭出示的过程。
> CTF 中的电子数据取证主要分为硬盘取证和内存取证两部分, 并且只考察对证据文件的分析.

#### 网络资料

* [Xidian Forensics | Home](https://forensics.xidian.edu.cn/)

#### 常用工具

* 硬盘镜像取证工具 `X-ways Forensics`
* 内存镜像取证工具 `Volatility`
* 加密容器工具 `Veracrypt`

## ???

<details>
<summary style='color:pink'>  ♥ 点击一下，签订契约 ♥ </summary>
flag: moectf{Th1s-1s-Misc}
</details>
