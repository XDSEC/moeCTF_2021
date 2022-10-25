from Crypto.Util.number import *
from Crypto.Cipher import AES
import os
from hashlib import sha256
import socketserver
import signal
import string
import random
from secret import flag

table = string.ascii_letters+string.digits
BANNER = br'''
oooooooooo.  ooooo   .oooooo.                  .oooooo.   ooooooooo.   oooooooooooo   .oooooo.   
`888'   `Y8b `888'  d8P'  `Y8b                d8P'  `Y8b  `888   `Y88. `888'     `8  d8P'  `Y8b  
 888     888  888  888                       888      888  888   .d88'  888         888      888 
 888oooo888'  888  888                       888      888  888ooo88P'   888oooo8    888      888 
 888    `88b  888  888     ooooo             888      888  888`88b.     888    "    888      888 
 888    .88P  888  `88.    .88'              `88b    d88'  888  `88b.   888       o `88b    d88' 
o888bood8P'  o888o  `Y8bood8P'   ooooooooooo  `Y8bood8P'  o888o  o888o o888ooooood8  `Y8bood8P'  

'''

BASE_MENU = br'''
[+] 1.Register:
[+] 2.Exit:
'''

MENU = br'''[+] 1.Encrypt:
[+] 2.Decrypt:
[+] 3.GetFlag:
[+] 4.Exit:
'''

def Pad(msg):
    return msg + os.urandom((16-len(msg)%16)%16)

class Task(socketserver.BaseRequestHandler):
    def _recvall(self):
        BUFF_SIZE = 2048
        data = b''
        while True:
            part = self.request.recv(BUFF_SIZE)
            data += part
            if len(part) < BUFF_SIZE:
                break
        return data.strip()

    def send(self, msg, newline=True):
        try:
            if newline:
                msg += b'\n'
            self.request.sendall(msg)
        except:
            pass

    def recv(self, prompt=b'[-] '):
        self.send(prompt, newline=False)
        return self._recvall()

    def proof_of_work(self):
        proof = (''.join([random.choice(table)for _ in range(12)])).encode()
        sha = sha256( proof ).hexdigest().encode()
        self.send(b"[+] sha256(XXX+" + proof[3:] + b") == " + sha )
        XXX = self.recv(prompt = b'[+] Plz Tell Me XXX :')
        if len(XXX) != 3 or sha256(XXX + proof[3:]).hexdigest().encode() != sha:
            return False
        return True

    def Register(self):
        self.send(b'[+]USERNAME:')
        username = self.recv()
        return username

    def encrypt(self,username,iv,key,nonce):
        aes = AES.new(key,AES.MODE_CBC,iv)
        plain = Pad(nonce + b"||GiveyourFLAG||" + username)
        return aes.encrypt(plain)

    def decrypt(self,iv,key,cipher):
        aes = AES.new(key,AES.MODE_CBC,iv)
        return aes.decrypt(cipher)

    def handle(self):
        signal.alarm(50)
        if not self.proof_of_work():
            return
        self.send(BANNER,newline = False)
        self.key = os.urandom(16)
        self.iv = os.urandom(16)
        self.nonce = os.urandom(16)
        self.send(b'[+]iv:'+ self.iv)
        self.send(b'[+]nonce:'+ self.nonce)
        self.send(BASE_MENU,newline = False)

        option = self.recv()
        if option == b'1':
            try:
                self.username = self.Register()
                for i in range(3):
                    self.send(MENU,newline= False)
                    self.send(b"Hello " + self.username + b'! Let\'s eat this big OREO')
                    op = self.recv()
                    if op == b'1':
                        cipher = self.encrypt(self.username,self.iv,self.key,self.nonce)
                        self.send(b"[+]cipher:" + cipher)

                    elif op == b'2':
                        self.send(b"[+] Give Me Your Cipher:")
                        cipher = self.recv()
                        self.send(b"[+] Give Me IV:")
                        iv = self.recv()
                        plain = self.decrypt(iv,self.key,cipher)
                        self.send(b"[+] Plain is :" + plain)

                    elif op == b'3':
                        self.send(b"[+] Give Me Your Cipher:")
                        cipher = self.recv()
                        self.send(b"[+] Give Me IV:")
                        iv = self.recv()
                        plain = self.decrypt(iv,self.key,cipher)
                        non,msg,id = plain.split(b'||')
                        if non != self.nonce or msg != b'Give_me_FLAG' or id != self.username:
                            self.send(b'[!]FAILED')
                        else:
                            self.send(b'FLAG:' + flag)

                    else:
                        break
            except:
                self.request.close()
        self.request.close()

class ThreadedServer(socketserver.ThreadingMixIn, socketserver.TCPServer):
    pass

class ForkedServer(socketserver.ForkingMixIn, socketserver.TCPServer):
    pass

if __name__ == "__main__":
    HOST, PORT = '0.0.0.0', 10005
    print("HOST:POST " + HOST+":" + str(PORT))
    server = ForkedServer((HOST, PORT), Task)
    server.allow_reuse_address = True
    server.serve_forever()
