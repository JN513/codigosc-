//void exibirDados(String nome, int idade, {double? altura = 0}){ 
void exibirDados(String nome, int idade, {double? altura}){ //parametor opcionais sempre no final da chamada da funcao
  var novaAltura = altura ?? 0; //?? Verifica se altura é nula. Se for passa o 0
  print("nome: $nome");
  print("idade: $idade");
  print("altura: $novaAltura");
}

void calcularBonus(){
  print("seu bônus é de: 20");
}

void calcularSalario(double salario, Function funcaoParametro){//recebendo função como parametro
  print("Seu salário é: $salario ");
  funcaoParametro();
}

void main() {
  exibirDados("Rodrigo", 30);
  exibirDados("Rodrigo", 30, altura: 1.73 ); //preciso mostrar qual o parâmetro opcional
  calcularSalario(100, (){
    print("Calculo customizado");
  } );

  calcularSalario(100, calcularBonus);
}