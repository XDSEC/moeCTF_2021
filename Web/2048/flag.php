<?php
$flag = 'moectf{2048_1s_intere5t1ng!}';
if(isset($_GET['score'])) {
	$score = $_GET['score'];
	if ($score > 50000) {
		echo $flag;
	}else {
		echo "超过50000分才可以给你flag呦！刷新页面再玩一次吧！";
	}
}