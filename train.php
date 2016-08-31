<?php
require_once('lib/NBC.php');
require('database.php');
$sql = "SELECT * FROM list WHERE 1=1";
$result = mysqli_query($link,$sql);
$commands = Array();
$actions = Array();
$i=0;
$j=0;
$nbc = new NBC();

$commandin = $_GET["query"];
$command = str_replace( array( '\'', '"', ',' , ';', '<', '>' ), '', $commandin);
while($row = mysqli_fetch_array($result))
{
	$commands[$i]= $row['commands'];
	$actions[$i]= $row['actions'];
	$i++;
}

for($j=0;$j<$i;$j++)
{
	$data = fopen("dataset.txt","w+");
	fwrite($data,$commands[$j]);
    $nbc->train(new FileDataSource("dataset.txt"), "$actions[$j]");
	//echo "Trained $j<br>";
}

	echo $nbc->classify($command);
?>