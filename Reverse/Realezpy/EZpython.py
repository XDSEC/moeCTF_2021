import time
#flag = 'moectf{Pyth0n_1s_so0o0o0o0_easy}'
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
    return  result

ipt = input("Plz give me your flag:")
out = encrypt(ipt)
if len(ipt) !=len(c):
    print("Wrong lenth~")
    exit()
else:
    for i in range(len(c)):
        if out[i] != c[i]:
            print("Plz try again?")
            exit()
print('Congratulations!!!')
time.sleep(1)
print("enjoy the beauty of python ~~~ ")

import this