//Classes abstratas não podem ser instanciadas (Criar Objeto);
//Deixa de ser uma classe concreta, que podemos criar objetos
abstract class Animal {
  String cor = "";
  void correr();
}

class Cao extends Animal {
  @override
  void correr(){
    print("Correr");
  }
  void latir(){
    print("Latir");
  }
}

class Passaro extends Animal {
  @override
  void correr(){
    print("Correr");
  }
  void voar(){
    print("Voar");
  }
}

void main() {
 
  /*
   * abstrata
   * concreta
   * */
  //Animal ani = Animal();
  Cao cao = Cao();
  cao.latir();
  cao.correr();
}