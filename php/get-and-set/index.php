<?php
    // enable debug

    error_reporting(E_ALL);
    ini_set('display_errors', '1');

    // include a Car class file

    require 'Car.php';

    // create a new Car object

    $car1 = new Car('Fiat', 'Red', 'Uno', '2000');

    // print the object

    echo $car1->getMarca() . '<br>';
    echo $car1->getColor() . '<br>';
    echo $car1->getModel() . '<br>';
    echo $car1->getYear() . '<br>';

    // make a setter example

    $car1->setMarca('Ford');
    $car1->setColor('Blue');
    $car1->setModel('Fiesta');
    $car1->setYear('2018');

    // print the modified object

    echo $car1->getMarca() . '<br>';
    echo $car1->getColor() . '<br>';
    echo $car1->getModel() . '<br>';
    echo $car1->getYear() . '<br>';
    
?>