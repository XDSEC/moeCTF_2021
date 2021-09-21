from flask import Flask, render_template, request
from flag import flag, FLAG
import datetime

app = Flask(__name__)


@app.route("/", methods=['GET', 'POST'])
def index():
    f = open("app.py", "r")
    ctx = f.read()
    f.close()
    f1ag = request.args.get('f1ag') or ""
    exp = request.args.get('exp') or ""
    flAg = FLAG(f1ag)
    message = "Your flag is {0}" + exp
    if exp == "":
        return ctx
    else:
        return message.format(flAg)


if __name__ == "__main__":
    app.run()
