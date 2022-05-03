class Animal {
 
  String cor;
 
  Animal(this.cor);
 
  void dormir(){
    print("Dormir");
  }
 
  void correr(){
    print("Correr Super");
  } 
}

class Cao extends Animal {
  String corOrelha;
 
  Cao(String cor, this.corOrelha) : super(cor); //passando cor para o construtor de Animal
 
  void latir(){
    print("Latir");
  }
 
  @override //sobrepor
  void correr(){
    super.correr();
    print("Cão!");
  }
}

class Passaro extends Animal {
  String corBico;
 
  Passaro(String cor, this.corBico) : super(cor);
 
  void voar(){
    print("Voar");
  }
 
  @override //sobrepor
  void correr(){
    super.correr();
    print("Pássaro!");
  }
 
}
void main() {
 
  Cao cao = Cao("Marrom", "Branco");
  Passaro passaro = Passaro("Vermelho", "Amarelo");
  cao.correr();
  passaro.correr(); 
 
  //print( "Passaro cor: ${passaro.cor} corBico: ${passaro.corBico} " );
 
  /*
  cao.cor = "Branco";
  cao.corOrelha = "Preto";
  print( "Cor do cão: " + cao.cor );
  print( "Cor da orelha: " + cao.corOrelha );
  cao.latir();
 
  passaro.cor = "Marrom";
  print( passaro.cor );
  passaro.voar();
  */
 
}