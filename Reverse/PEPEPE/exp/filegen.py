enc_data = open('./file', 'rb').read()
origin_file = open('./origin.exe', 'wb')
key = b'reverierwilllikeyou!'

origin_data = bytes([(enc_data[i] ^ 0xff)^key[i % len(key)] for i in range(len(enc_data))])
origin_file.write(origin_data)