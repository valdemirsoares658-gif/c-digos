<?php
$host = "localhost";
$usuario = "root"; // padrão do XAMPP
$senha = "";       // padrão é vazio
$banco = "sistema_login";

$conn = new mysqli($host, $usuario, $senha, $banco);

if ($conn->connect_error) {
    die("Falha na conexão: " . $conn->connect_error);
}
?>