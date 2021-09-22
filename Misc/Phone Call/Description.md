## Phone Call

### 100

救命！👴🏻被困在东南亚当码农苦力了……现在我只知道隔壁房间里有一座电话可以拨打到外界，但是只有一个电话号码可以拨通，我昨天偷听了好久，只偷听到了老大哥拨号的声音，你可以帮我破译出电话号码嘛？

flag为`moectf{电话号码}`，电话号码中请使用-作为段分隔符。

如果你采用了编程实现并可以自动化分析此类音频，可以私聊19-Reverier（QQ:773389969）加200分。 

Hint 1 : Dual-tone multi-frequency signaling(DTMF) is a telecommunication signaling system using the voice-frequency band.

Hint 2 : 

```python
file_dtmf_bin = b'RIFF$\x00\x00\x00WAVEfmt \x10\x00\x00\x00\x01\x00\x01\x00\x80>\x00\x00\x00}\x00\x00\x02\x00\x10\x00data\x00\x00\x00\x00\xb5\xb7\x912\xb3L\xd1?\xf6\x9aB(\x0c\xcf\xee?9\xf4\x9b\xd2\x03\x0f\xd3?\x95\\\x167V\x8c\xee?\xea \xfe\x86\x0c\x04\xd5?\xa7(\xb3\xa3\xbd9\xee?\xa5\xc8=S\x86\x1d\xd7?\\\x89\x08\x7f\x04\xd7\xed?\x13\xde^o\xbaA\xdd?\xb3\x83P\x7f\xefu\xec?c\xc4\xc8Tm\x07\xe0?J\x99\x82\xd8/\xb2\xeb?\xae^\x02\x84\x86\x89\xe1?\x8c\x954N:\xc4\xea?\x96\xf6\x1f\xaa\x9d$\xe3?\xb8\xbczE\x83\xa4\xe9?147*2580369#ABCD1gp*ajt0dmw#ABCD1hq*bku0enx#ABCD1ir*clv0foy#ABCD14s*258036z#ABCD\x00'

with open('./dtmf.bin', 'wb') as out:
    out.write(file_dtmf_bin)
```

## 题解

请查看本仓库下的远程链接：DTMF-Challenges

