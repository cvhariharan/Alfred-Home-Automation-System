<?php
$form = <<<EOD
<html>
<head>
<title>Command Centre</title>
</head>
<body>
<form action="add.php" method="POST">
<table>
<tr><td><input type="text" name="command" placeholder="Command"></td></tr>
<tr><td><input type="text" name="action" placeholder="action"></td></tr>
<tr><td><input type="submit" name="submit"></td></tr>
</table>
</form>
</body>
</html>
EOD;
echo $form;
?>