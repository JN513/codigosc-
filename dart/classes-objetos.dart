//Classe
class Casa {
//Atributos
  String cor = "";

//Métodos
  void abrirJanela() {
    print("Abrir janela da casa $cor ");
  }

  void abrirPorta() {
    print("Abrir porta da casa $cor ");
  }

  void abrirCasa() {
    abrirJanela();
    abrirPorta();
  }
}

class Usuario {
  //atributos
  String usuario = "";
  String senha = "";
 
  //métodos
  void autenticar() {
    var usuario = "rodrigo@gmail.com"; //poderia Recuperar de um banco de dados
    var senha = "123456";
    if (this.usuario == usuario && this.senha == senha) {
      print("Usuário autenticado");
    } else {
      print("Usuário não autenticado");
    }
    print("Usuario digitado/do objeto :" + this.usuario);
    print("Usuario Banco de Dados/Classe:" + usuario);
  }
}

void main() {
 
  Casa minhaCasa = Casa();
  minhaCasa.cor = "amarelo";
  minhaCasa.abrirJanela();
  minhaCasa.abrirPorta();
  minhaCasa.abrirCasa();
 
  Usuario user = Usuario();
  user.usuario = "teste";
  user.senha = "123456";
  user.autenticar();
}