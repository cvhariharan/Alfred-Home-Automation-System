<?php
require('database.php');
$command = $_POST["command"];
$action = $_POST["action"];
$sql = "INSERT INTO list (commands,actions) VALUES (\"$command\",\"$action\")";
$result = mysqli_query($link,$sql);
if($result)
{
	echo "Commands added!<br>";
	echo "<a href=\"train.php\">Train</a>";
}
?>