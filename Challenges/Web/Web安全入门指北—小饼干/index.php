<?php
if (!isset($_COOKIE['VIP'])) {
    setcookie('VIP','0');
    echo "You are not VIP,I will give flag to VIP!";
}else {
    if ($_COOKIE['VIP'] === '1') {
        $flag = "moectf{C00kie_1s_sw33t!}";
        echo $flag;
    }else {
        echo "You are not VIP,I will give flag to VIP!";
    }
}