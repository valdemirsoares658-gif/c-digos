<?php
session_start();
// Se o botão for clicado
    if (isset($_POST['usuario'])) {
        // Redireciona para outra página
        header("Location: comprador.php");
        exit(); // sempre usar exit depois do header
    }

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>você é?</title>
    <a href='logout.php'><<-</a>
</head>
<body>

<h1>VOCÊ Ê?</h1>
<form method="post">
    <input type="submit" name="usuario" value="comprador/a"> <!--modo em php precisando de form-->
     <input type="button" value="vendedor" onclick="location.href='vendedor.php';"> <!-- modo em que não precisa do php e form-->
  </form>

</body>
</html>
