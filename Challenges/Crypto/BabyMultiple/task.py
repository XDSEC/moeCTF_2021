def encode(msg,mul):
    c = b''
    for i in msg:
        index = table.find(i)
        index_after = (index * mul) % 63
        c = c + bytes.fromhex(hex(table[index_after])[2:])
    return c

table = b'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_'
FLAG = xxxxx

assert len(table) == 63
assert FLAG[:7] == b'moectf{'
assert FLAG[-1:] == b'}'

Mul = 58
msg = FLAG[7:-1]

c = encode(msg,Mul)
print(c)

#b'g3AfJPOfHPOJFfJuf_AYux1JFx39'