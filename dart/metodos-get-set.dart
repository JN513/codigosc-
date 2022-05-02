class Conta {
  double saldo = 0;
  double _saque = 0;// Utilizar o _ é para "blindar" a variavel

  //Getter -> Obter
double get saque {
  //Validacoes
  return this._saque;
}
  
//Setter -> Configurar
  set saque(double saque){ // void opcional
    if( saque > 0 && saque <= 500 ){
      this._saque = saque;
    }
  }
}

void main() {
  Conta conta = Conta();
  conta.saque = 400;
  print( conta.saque );
}


