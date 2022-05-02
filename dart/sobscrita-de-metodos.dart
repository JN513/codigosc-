//Consigo acessar atributos e métodos static sem a necessidade de criação de um objeto. Consigo acessar de forma direta.
//final não deixa ou permite a criação de um novo objeto. Crio apenas uma vez.
class Configuracoes {
 
  static String identificadorApp = "5646545645";
  static String notificacaoSom = "Yes";
 
  static void configuracaoInicial(){
    print( "Executa configuracoes iniciais" );
  }
 
}

class Conta {
  String valor = "";
}

void main() {
 
  //Modificadores Static e Final
  //Configuracoes config = Configuracoes(); 
  //Nao preciso criar o objeto
  Configuracoes.configuracaoInicial();
  print( Configuracoes.identificadorApp);
  print( Configuracoes.notificacaoSom );
 
  final Conta conta = Conta();
  conta.valor = "Rodrigo";
  //conta = Conta();
  //com o modificador final não posso zerar o objeto
 
  print( conta.valor );
 
}