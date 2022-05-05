<?php
    // enable debug

    error_reporting(E_ALL);
    ini_set('display_errors', '1');

    // include a Car class file

    require 'Car.php';

    // create a new Car object

    $car1 = new Car('Fiat', 'Red', 'Uno', '2000', 250, 1.6, 4);

    // print the object

    echo "Objeto Carro:<br>";

    echo "Marca: " . $car1->getMarca() . '<br>';
    echo "Color: " . $car1->getColor() . '<br>';
    echo "Modelo: " . $car1->getModel() . '<br>';
    echo "Ano: " . $car1->getYear() . '<br>';
    echo "Potência: " . $car1->getPotencia() . '<br>';
    echo "Cilindrada: " . $car1->getCilindrada() . '<br>';
    echo "Capacidade: " . $car1->getCapacidade() . '<br>';

    // make a setter example

    $car1->setMarca('Ford');
    $car1->setColor('Blue');
    $car1->setModel('Fiesta');
    $car1->setYear('2018');
    $car1->setPotencia(250);
    $car1->setCilindrada(2.0);
    $car1->setCapacidade(5);

    // print the modified object

    echo "<br>Objeto Carro modificado:<br>";

    echo "Marca: " . $car1->getMarca() . '<br>';
    echo "Color: " . $car1->getColor() . '<br>';
    echo "Modelo: " . $car1->getModel() . '<br>';
    echo "Ano: " . $car1->getYear() . '<br>';
    echo "Potência: " . $car1->getPotencia() . '<br>';
    echo "Cilindrada: " . $car1->getCilindrada() . '<br>';
    echo "Capacidade: " . $car1->getCapacidade() . '<br>';
    
?>