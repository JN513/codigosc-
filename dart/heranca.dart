class Animal {
  String cor = "";
  void dormir(){
    print("Dormir");
  }
}

class Cao extends Animal {
  String corOrelha = "";
  void latir(){
    print("Latir");
  }
}

class Passaro extends Animal {
  String corBico = "";
  void voar(){
    print("Voar");
  }
}

void main() {
 
  Cao cao = Cao();
  Passaro passaro = Passaro();
 
  cao.cor = "Branco";
  cao.corOrelha = "Preto";
  print( "Cor do cão: " + cao.cor );
  print( "Cor da orelha: " + cao.corOrelha );
  cao.latir();
 
  passaro.cor = "Marrom";
  passaro.corBico = "Amarelo";
  print( "Cor do pássaro: " + passaro.cor );
  print( "Cor do bico: " + passaro.corBico );
  passaro.voar();
 
 
}