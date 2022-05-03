
class Car{
  String marca = "";
  int ano = 0;
  int hp = 0;
  String cor = "";


  Car(this.marca, this.ano, this.hp, this.cor);
}

void main(){
  Car opala = Car("gm", 1975, 450, "Azul");

  print(opala.marca);
}