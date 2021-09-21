str1 = "8291767138932581849755263447186268341129653538127"
str2 = "S0_As_I_prAy_Un1imited_B1ade_WOrks---E1m1ya_Shiro"
for i in range(49):
    print(hex(ord(str1[i])^ord(str2[i])),end=",")