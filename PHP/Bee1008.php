<?php

$numeroFuncionario = intval(trim(fgets(STDIN)));
$horasTrabalhadas = intval(trim(fgets(STDIN)));
$valorPorHora = floatval(trim(fgets(STDIN)));

$salario = $horasTrabalhadas * $valorPorHora;

echo "NUMBER = $numeroFuncionario\n";
echo "SALARY = U$ " . number_format($salario, 2, '.', '') . "\n";

?>
