void exibirMensagem(String nome, int idade){
    print("Alerta, você não preencheu todos os campos $nome !");
    print("Sua idade é: $idade ");
}

void exibirMensagemSemP(){
    print("Mensagem sem parametros");
}

double calcularSalario(double salario){
    var total = salario - (salario * 0.1);
    return total;
    //print("salario total: $total ");
}

//double calcularSalario(double salario) => salario - (salario * 0.1);

void main() {
    exibirMensagem("Rodrigo", 10);
    double bonus = 500;
    double resultado = calcularSalario(1000);
    double total = resultado + bonus;
    print("salario total: $total ");
/*
exibirMensagem("Rodrigo", 30);
exibirMensagem("Pedro", 45);
*/
}

