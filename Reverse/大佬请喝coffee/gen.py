import random
bufArray = "EXcalibur"
for _ in range(9):
    sum = 0
    buf = ""
    for i in range(9):
        x = random.randint(3000,10000)
        sum += ord(bufArray[i]) * x
        buf += "bufArray[{}]".format(i) + "*" + str(x) + "+"
    print(buf + "=" + str(sum))