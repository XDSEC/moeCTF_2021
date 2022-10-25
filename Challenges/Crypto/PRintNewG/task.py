import random
from Crypto.Util.number import*
from FLAG import flag

class PRintNewG:
    def __init__(self,seed):
        self.state = seed
        self.a = random.randint(2**256,2**257)
        self.b = random.randint(2**256,2**257)
        if self.b > self.a:
            self.b = self.b - self.a
        self.n = getPrime(257)

    def NewG(self):
        self.state = (self.a * self.state + self.b) % self.n
        print(self.state)

PrintNewG = PRintNewG(bytes_to_long(flag))
print(PrintNewG.n)
PrintNewG.NewG()
PrintNewG.NewG()
PrintNewG.NewG()

'''
164955381960104851576442781839629371483790790743830073857213053104860144345367
67066424717605861916529090048670931008913194546199003522357504998012803616537
14585402872351563180055857554749250191721167730349724393021149201170995608751
68393939370424772490169906192546208899639826391163845848999554903218827210979
'''