<?php
    // enable debug

    error_reporting(E_ALL);
    ini_set('display_errors', '1');

    // include a Vehicle class file

    require 'Vehicle.php';

    class Car extends Vehicle{
        // Private Atributes

        private $potencia;
        private $cilindrada;
        private $capacidade;

        // Constructor

        public function __construct($marca, $color, $model, $year, 
            $potencia, $cilindrada, $capacidade){
            
            parent::__construct($marca, $color, $model, $year);

            $this->potencia = $potencia;
            $this->cilindrada = $cilindrada;
            $this->capacidade = $capacidade;
        }

        // Setters and Getters

        public function setPotencia($potencia){
            $this->potencia = $potencia;
        }

        public function getPotencia(){
            return $this->potencia;
        }

        public function setCilindrada($cilindrada){
            $this->cilindrada = $cilindrada;
        }

        public function getCilindrada(){
            return $this->cilindrada;
        }

        public function setCapacidade($capacidade){
            $this->capacidade = $capacidade;
        }

        public function getCapacidade(){
            return $this->capacidade;
        }

    }

?>