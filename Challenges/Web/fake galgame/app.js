const express = require('express')
const ejs = require('ejs')

const app = express()
app.use(express.json());
app.use(express.urlencoded({extended: true}));
app.use('/static/', express.static("./static/"));
app.engine('html', ejs.__express);
app.set('view engine', 'html');

const isObject = obj => obj && obj.constructor && obj.constructor === Object;

function merge(a, b) {
    for (let attr in b) {
        if (isObject(a[attr]) && isObject(b[attr])) {
            merge(a[attr], b[attr]);
        } else {
            a[attr] = b[attr];
        }
    }
    return a;
}

function objectInit() {
    if (Object.prototype.health) {
        Object.prototype.health = undefined;
    }
    if (Object.prototype.attack) {
        Object.prototype.attack = undefined;
    }
    if (Object.prototype.armor) {
        Object.prototype.armor = undefined;
    }
}

let flag = "moectf{The_game_1s_s0_funny!!}";
let user = {};
let boss = {
    health: 100,
    attack: 100,
    armor: 100,
}

app.get('/', function (req, res) {
    res.render("index.html")
})

app.post('/api/fight', function (req, res) {
    objectInit();
    try {
        console.log(req.body.attributes.health, req.body.attributes.attack, req.body.attributes.armor);
    } catch (e) {
        res.json({
            "status": 500
        });
    }
    if (req.body.attributes.health === null) {
        req.body.attributes.health = 0;
    }
    if (req.body.attributes.attack === null) {
        req.body.attributes.attack = 0;
    }
    if (req.body.attributes.armor === null) {
        req.body.attributes.armor = 0;
    }
    if (typeof req.body.attributes.health !== "number" || typeof req.body.attributes.attack !== "number" || typeof req.body.attributes.armor !== "number") {
        res.json({
            "status": 403
        });
    }
    if (req.body.attributes.health + req.body.attributes.attack + req.body.attributes.armor > 10) {
        res.json({
            "status": 403
        });
    } else if (req.body.attributes.health < 0 || req.body.attributes.attack < 0 || req.body.attributes.armor < 0) {
        res.json({
            "status": 403
        });
    }
    if (req.body.attributes.health === 0 || req.body.attributes.health === null) {
        delete req.body.attributes.health;
    }
    if (req.body.attributes.attack === 0 || req.body.attributes.attack === null) {
        delete req.body.attributes.attack;
    }
    if (req.body.attributes.armor === 0 || req.body.attributes.armor === null) {
        delete req.body.attributes.armor;
    }
    merge(user, req.body.attributes);
    let bossHealth = boss.health;
    let userHealth = user.health;
    if (userHealth === undefined) userHealth = 0;
    let bossHurt = user.attack - boss.armor;
    if (bossHurt < 0) bossHurt = 0;
    let userHurt = boss.attack - user.armor;
    if (userHurt < 0) userHurt = 0;
    let count = 0;
    console.log(bossHealth, userHealth, bossHurt, userHurt);
    while (1) {
        count++;
        if (count > 10000) {
            res.json({
                "status": 200,
                "result": "勇者已经被merge到魔王城了！！！\n你死了，请再来一次"
            });
            break;
        }
        bossHealth -= bossHurt;
        if (bossHealth <= 0) {
            res.json({
                "status": 200,
                "result": "勇者已经被merge到魔王城了！！！\n勇者大胜利！\n这是你的战利品：" + flag
            });
            break;
        }
        userHealth -= userHurt;
        if (userHealth <= 0) {
            res.json({
                "status": 200,
                "result": "勇者已经被merge到魔王城了！！！\n你死了，请再来一次"
            });
            break;
        }
    }
})

app.listen(8899)