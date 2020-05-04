#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

void tabuleiro(char casas2[3][3])
{
  system("clear || cls");
  printf("Jogo da Velha bolada!!!\n\n");
  printf("\t %c | %c | %c\n", casas2[0][0], casas2[0][1], casas2[0][2] );
  printf("\t-----------\n" );
  printf("\t %c | %c | %c\n", casas2[1][0], casas2[1][1], casas2[1][2] );
  printf("\t-----------\n" );
  printf("\t %c | %c | %c\n", casas2[2][0], casas2[2][1], casas2[2][2] );
  printf("\n\n");
}

int main() {
  char casas [3][3] = { {'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'}, };

  char res;
  int cont_jogadas, l,c, vez = 0, i, j,x=0,o=0;

  do{
    cont_jogadas = 1;
    for (i = 0; i <=2; i++) {
      for (j = 0; j <=2; j++) {
        casas[i][j] = ' ';
      }
    }
    do {
        tabuleiro(casas);
        if (vez%2==0) {
          printf("Jogador X\n");
        }else
        {
          printf("Jogador O\n");
        }
        printf("Digite a linha: \7");
        scanf("%d", &l);
        printf("Digite a coluna: \a");
        scanf("%d", &c);

        if (l < 1 || l > 3 || c < 1 || c > 3) {
          l = 0;
          c = 0;
          printf("Posição Invalida!!!\n");
  /*        fflush(stdout);
          sleep(10);*/
        }else if (casas[l-1][c-1] != ' ') {
          l = 0;
          c = 0;
          printf("Casa ja utilizada!!!\n");
  /*        fflush(stdout);
          sleep(10);*/
        }else{
          if (vez%2 == 0) {
            casas[l-1][c-1] = 'X';
          }else{
            casas[l-1][c-1] = 'O';
          }
          vez++;
          cont_jogadas++;
        }
        //Vitorias do X

        if (casas[0][0] == 'X' && casas[0][1] == 'X' && casas[0][2] == 'X') {cont_jogadas = 11;}//linhas
        if (casas[1][0] == 'X' && casas[1][1] == 'X' && casas[1][2] == 'X') {cont_jogadas = 11;}
        if (casas[2][0] == 'X' && casas[2][1] == 'X' && casas[2][2] == 'X') {cont_jogadas = 11;}
        if (casas[0][0] == 'X' && casas[1][0] == 'X' && casas[2][0] == 'X') {cont_jogadas = 11;}//colunas
        if (casas[0][1] == 'X' && casas[1][1] == 'X' && casas[2][1] == 'X') {cont_jogadas = 11;}
        if (casas[0][2] == 'X' && casas[1][2] == 'X' && casas[2][2] == 'X') {cont_jogadas = 11;}
        if (casas[0][0] == 'X' && casas[1][1] == 'X' && casas[2][2] == 'X') {cont_jogadas = 11;}//diagonais
        if (casas[2][0] == 'X' && casas[1][1] == 'X' && casas[0][2] == 'X') {cont_jogadas = 11;}

        //Vitorias da Bolinha

        if (casas[0][0] == 'O' && casas[0][1] == 'O' && casas[0][2] == 'O') {cont_jogadas = 12;}//linhas
        if (casas[1][0] == 'O' && casas[1][1] == 'O' && casas[1][2] == 'O') {cont_jogadas = 12;}
        if (casas[2][0] == 'O' && casas[2][1] == 'O' && casas[2][2] == 'O') {cont_jogadas = 12;}
        if (casas[0][0] == 'O' && casas[1][0] == 'O' && casas[2][0] == 'O') {cont_jogadas = 12;}//colunas
        if (casas[0][1] == 'O' && casas[1][1] == 'O' && casas[2][1] == 'O') {cont_jogadas = 12;}
        if (casas[0][2] == 'O' && casas[1][2] == 'O' && casas[2][2] == 'O') {cont_jogadas = 12;}
        if (casas[0][0] == 'O' && casas[1][1] == 'O' && casas[2][2] == 'O') {cont_jogadas = 12;}//diagonais
        if (casas[2][0] == 'O' && casas[1][1] == 'O' && casas[0][2] == 'O') {cont_jogadas = 12;}

    } while(cont_jogadas <= 9);
    tabuleiro(casas);
    if (cont_jogadas==10) {
      printf("Empate, não ouve ganhadores nessa rodada.\n");
    }else if (cont_jogadas==11) {
      printf("O Jogador X ganhou essa rodada!!!\n");
      x++;
    }else{
      printf("O jogador O ganhou essa rodada!!!\n");
      o++;
    }
    printf("Deseja jogar novamente? [S-N]\n");
    scanf("%s",&res);
  }while (res=='s');

  printf("\n\nPlacar final: %d x %d \n\n",x,o );

  if (x>o) {
    printf("O ganhador foi final foi o jogador X!!!\n");
  }else if(o>x){
    printf("O ganhador foi final foi o jogador O!!!\n");
  }else
  {
    printf("Ouve um empate.\n");
  }

  return 0;
}
