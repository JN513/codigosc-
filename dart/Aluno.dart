
class Aluno{
  String nome;
  String matricula;
  String email;
  double _nota = 0;

  Aluno(this.nome, this.matricula, this.email);

  set nota(double nota){
    if(nota >= 0 && nota <= 10){
      this._nota = nota;
    }
  }

  double get nota{
    return this._nota;
  }

  void imprimir(){
    print("Nome: ${this.nome}");
    print("Matricula: ${this.matricula}");
    print("Email: ${this.email}");
    print("Nota: ${this.nota}");
  }

  void calc_nota(){
    if(this._nota >= 6){
      print("aprovado");
    } else {
      print("reprovado");
    }
  }

}


void main(){
  Aluno joao = Aluno("Joao", "1234567890", "abc@abc.com");

  joao.nota = 7;

  joao.imprimir();
  joao.calc_nota();
}