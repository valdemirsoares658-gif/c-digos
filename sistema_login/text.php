<?php
include("conexao.php");

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $usuario = $_POST['usuario'];
    $senha = password_hash($_POST['senha'], PASSWORD_DEFAULT);

    $sql = "INSERT INTO usuarios (usuario, senha) VALUES (?, ?)";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param("ss", $usuario, $senha);

    if ($stmt->execute()) {
        echo '<div class="erro">Usuario cadastrado com sucesso!</div>';
    } else {
        echo "Erro: " . $stmt->error;
    }
}


?>
<html  lang="pt-br">
<head>
    <meta charset="UTF-8"/>
    <title>cadastrar</title>
    <link rel="stylesheet" href="estilo.css">
</head>
<body>
    <div id="corpo-form-cad">
        <h1>entrar</h1>
<form method="POST" action="">
   <input type="text" placeholder="usuario" name="usuario" required><br>
   <input type="password" placeholder="senha" name="senha" required><br>
   <input type="submit" value="cadastrar">
    <a href='logout.php'>Sair</a>
</form>  
