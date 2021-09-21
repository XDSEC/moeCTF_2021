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