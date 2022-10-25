import jwt

secret = "u_have_kn0w_what_f0rmat_i5"
headers = {
        'alg': 'HS256',
        'typ': 'JWT'
    }

payload = {
        "name": "admin",
    }

token = jwt.encode(payload, secret, algorithm='HS256', headers=headers)
print(token)
