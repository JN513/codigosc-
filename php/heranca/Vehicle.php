<?php
    // Create a Vehicle class

    class Vehicle{
        // Private Attributes

        private $marca;
        private $color;
        private $model;
        private $year;

        // Constructor

        public function __construct($marca, $color, $model, $year){
            $this->marca = $marca;
            $this->color = $color;
            $this->model = $model;
            $this->year = $year;
        }

        // Setters and Getters

        public function setMarca($marca){
            $this->marca = $marca;
        }

        public function getMarca(){
            return $this->marca;
        }

        public function setColor($color){
            $this->color = $color;
        }

        public function getColor(){
            return $this->color;
        }

        public function setModel($model){
            $this->model = $model;
        }

        public function getModel(){
            return $this->model;
        }

        public function setYear($year){
            $this->year = $year;
        }

        public function getYear(){
            return $this->year;
        }
    }
?>