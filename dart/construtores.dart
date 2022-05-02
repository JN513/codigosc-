//Classe
class Usuario {
  String usuario = "";
  String senha = "";
  String cargo = "";

  //Usuario(this.usuario, this.senha, this.cargo);//outra forma de construtor

  Usuario(String usuario, String senha, String cargo) {
    this.usuario = usuario;
    this.senha = senha;
    this.cargo = cargo;
  }

  /*void imprimir(){
print("Usuario" + usuario);
print("Senha" + senha);
print("Cargo" + cargo);
}//Named constructor
*/
 
  void imprimir() {
    print("Usuario ${this.usuario}");
    print("Senha ${this.senha}");
    print("Cargo ${this.cargo}");
  }
}

void main() {
  Usuario usuario = Usuario("rodrigo@gmail.com", "123456", "Chefe");
  usuario.imprimir();
}
