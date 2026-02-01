<!DOCTYPE html>
<html lang="en">
<head>
<link rel="stylesheet" href="estilo.css">
<?php
session_start();
include("conexao.php");

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $usuario = $_POST['usuario'];
    $senha = $_POST['senha'];

    $sql = "SELECT * FROM usuarios WHERE usuario = ?";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param("s", $usuario);
    $stmt->execute();
    $resultado = $stmt->get_result();

    if ($resultado->num_rows > 0) {
        $row = $resultado->fetch_assoc();
        if (password_verify($senha, $row['senha'])) {
            $_SESSION['usuario'] = $usuario;
            header("Location: painel.php");
            exit();
        } else {
            ?>
      <div class="erro">
          Senha incorreta!
    </div>
        <?php
}
} else {
     ?>
    <div class="erro">
        Usuario não encontrado!
        </div>
         <?php
}
}
?>
<html lang="pt-br">
<head>
    <meta charset="UTF-8"/>
    <title>login</title>
    
</head>
<body>
    <div id="corpo-form">
         <h1>entrar</h1>
<form method="POST" action="">
    <input class="io" type="text" placeholder="usuario" name="usuario" required><br>
    <input class="io" type="password" placeholder="senha" name="senha" required><br>
    <input type="submit" value="acessar">
    <a href="cadastro.php">ainda não é inscrito?<strong>cadastre-se!</strong></a>
</form>
</head>
</html>

