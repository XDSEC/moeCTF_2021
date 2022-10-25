from Crypto.Util.number import*
from Crypto.Cipher import AES

def encrypt(plaintext,keystream):
    assert len(plaintext) == 32
    assert len(keystream) == 48

    left = plaintext[:16]
    right = plaintext[16:]

    for i in range(3):
        aes = AES.new(keystream[i*16:i*16+16],AES.MODE_ECB)
        new_right = long_to_bytes(bytes_to_long(aes.encrypt(right)) ^ bytes_to_long(left))
        new_left = right
        left = new_left
        right = new_right
    return left + right

def decrypt(ciphertext,keystream):
    assert len(ciphertext) == 32
    assert len(keystream) == 48

    left = ciphertext[:16]
    right = ciphertext[16:]

    for i in range(3):
        aes = AES.new(keystream[i*16:i*16+16],AES.MODE_ECB)
        old_right = left
        old_left = long_to_bytes(bytes_to_long(right) ^ bytes_to_long(aes.encrypt(old_right)))
        left = old_left
        right = old_right
    
    return left + right

flag = xxxxx
key1 = b'it_is_just_the_first_time_key_and_encrypt_twice~'
key2 = b'y0u can d0 what y0u w4nt t0 do!Go0d wishes~do it'

cipher = encrypt(flag,key1)
cipher = decrypt(cipher,key2)
cipher = encrypt(cipher,key1)

print(cipher)