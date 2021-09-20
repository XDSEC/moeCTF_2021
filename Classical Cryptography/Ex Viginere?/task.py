from random import randint
from secret import a, b, text, key, flag
from hashlib import*

table = 'abcdefghijklmnopqrstuvwxyz'
assert key in text
assert a * b < 100
assert flag == b'moectf{' + key.encode() + b'}'
assert md5(key.encode()+b'How_Interesting_the_Cryptography_Is').hexdigest() == '196cf7098c7ea6e3e4d03691fb9d4f58'

k1 = []
k2 = []

sequence = [0, 1]
n = randint(114514,1919810)
for i in range(65536):#2**16
    sequence.append((sequence[-1] + sequence[-2]) % n)

for i in range(a):
    k1.append(sequence[randint(0, 65536)] % 26)

for i in range(b):
    k2.append(sequence[randint(0, 65536)] % 26)

c = ''.join(table[((ord(x) - 97) * (k1[i % a]) + k2[i % b]) % 26] for i, x in enumerate(text))

f = open(r'./cipher','w')
f.write(c)
f.close()