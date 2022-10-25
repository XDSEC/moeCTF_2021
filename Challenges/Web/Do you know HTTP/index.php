<?php
if ($_SERVER['REQUEST_METHOD'] === 'HS') {
    if ($_SERVER['HTTP_X_FORWARDED_FOR'] === '127.0.0.1') {
        if ($_SERVER['HTTP_REFERER'] === 'www.ltyyds.com') {
            if ($_SERVER['HTTP_USER_AGENT'] === 'LT') {
                $flag = "moectf{HTTPHeaders_1s_s0_ea5y!}";
                echo $flag;
            }else {
                echo "'LT'才是本题官方浏览器哦！"."\n";
                echo "想要得到flag，就用官方浏览器吧！"."\n";
            }
        }else {
            echo "我希望你是从'www.ltyyds.com'过来的！"."\n";

        }

    }else {
        echo "只有本地ip地址才可以哦！"."\n";
    }
}else {
    echo "用'HS'来请求试试？"."\n";
}