void exibirMensagem(String nome, int idade){
    print("Alerta, você não preencheu todos os campos $nome !");
    print("Sua idade é: $idade ");
}

void exibirMensagemSemP(){
    print("Mensagem sem parametros");
}

void printtext(String text){
    print(text);
}

void sum(int x,int y) => print('sum is ${ x + y}');

double calcularSalario(double salario){
    var total = salario - (salario * 0.1);
    return total;
    //print("salario total: $total ");
}

//double calcularSalario(double salario) => salario - (salario * 0.1);

void printname(String name, Function func){
    print("Nome: $name");

    func();

}

void main() {
  var hello = "Hello World";

    print("O texto e ${hello}");


    printname("João", (){
        print("Nome: João");
    });
}

