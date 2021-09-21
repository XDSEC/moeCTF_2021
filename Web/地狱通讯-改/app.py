from flask import Flask, render_template, request, session, redirect, make_response
from secret import secret, headers, User
import datetime
import jwt

app = Flask(__name__)


@app.route("/", methods=['GET', 'POST'])
def index():
    f = open("app.py", "r")
    ctx = f.read()
    f.close()
    res = make_response(ctx)
    name = request.args.get('name') or ''
    if 'admin' in name or name == '':
        return res
    payload = {
        "name": name,
    }
    token = jwt.encode(payload, secret, algorithm='HS256', headers=headers)
    res.set_cookie('token', token)
    return res


@app.route('/hello', methods=['GET', 'POST'])
def hello():
    token = request.cookies.get('token')
    if not token:
        return redirect('/', 302)
    try:
        name = jwt.decode(token, secret, algorithms=['HS256'])['name']
    except jwt.exceptions.InvalidSignatureError as e:
        return "Invalid token"
    if name != "admin":
        user = User(name)
        flag = request.args.get('flag') or ''
        message = "Hello {0}, your flag is" + flag
        return message.format(user)
    else:
        return render_template('flag.html', name=name)


if __name__ == "__main__":
    app.run()
