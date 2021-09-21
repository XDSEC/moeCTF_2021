secret = "u_have_kn0w_what_f0rmat_i5"

headers = {
  "alg": "HS256",
  "typ": "JWT"
}


class User(object):
    def __init__(self, name):
        self.name = name

    def __str__(self):
        return self.name
