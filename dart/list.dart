 /*
Collection ou coleções -> são implementações de estruturas de dados, que é utilizado para armazenar itens
 - List
 - Maps
*/

class Usuario {
 
  String nome;
  int idade;
 
  Usuario(this.nome, this.idade);
 
}

void main() {
 
  List<String> frutas = ["Morango", "Manga", "Melancia"];
  //List geral = [1, 5, "Jamilton", 10.60];
 
  //adicionar itens
  frutas.add("Nova Fruta");
  //Inserir em uma posição
  frutas.insert(0, "Abacaxi");
 
  //Remover item
  frutas.removeAt(1);
 
  //Verificar se existe o item na lista. Retorno True ou False
  print( frutas.contains("Pera") );
 
  //tamanho da lista
  print( frutas.length );
  print( frutas );
  print ({frutas[0]} );
 
  print( "\n_____Objetos_____" );
  //Armazenar objetos
    
  List<Usuario> usuarios = <Usuario>[];
  usuarios.add( Usuario("Rodrigo", 30) );
  usuarios.add( Usuario("Pedro", 28) );
  usuarios.add( Usuario("João", 30) );
 
  for( Usuario usuario in usuarios ){
    print( "Nome: ${usuario.nome} idade: ${usuario.idade}" );
  }
 
  //print( usuarios );
 
}


