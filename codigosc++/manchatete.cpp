/************************************/
/*     Solução da questão Manchas   */
/*            OBI - 2019            */
/*         Terceira fase - PJ       */
/*         Julio Nunes Avelar       */
/************************************/
#include <bits/stdc++.h> //incluo a biblioteca

using namespace std; // uso namespace standard

int n,m; // crio minhas variaveis de limite m e n

int dirx[4] = {0,0,1,-1};  // crio meus vetores de coordenadas
int diry[4] = {1,-1,0,0};

int matriz[1005][1005]; // crio minha matriz

bool ver(int x, int y){ // crio a função ver para verificar os limites
	return x >= 0 && x < n && y >= 0 && y < m; // verifico se a posição esta dentro dos limites delimitados por m e n e retorno sim ou não
}

void dfs(int i, int j) //crio minha função de busca
{
    matriz[i][j] = 2; //marco a posição i e j como já visistada

    for (int k = 0; k < 4; k++) // percorro todos meus vizinhos
    {
        int xi = i+dirx[k];     // crio o xi para facilitar
        int xj = j+diry[k];     // crio o cj também para facilitar, pois não precisarei usar todo o conjunto toda vez atenas o xj, o mesmo vale pro xi

        if(!ver(xi, xj))continue; // verifico os limites usando a função ver

        if(matriz[xi][xj] == 1  ) // se a posição for igual a 1 eu aprico minha fução (dfs) nele
        {
            dfs(xi, xj); // chamo a função na posição
        }
    }
}

int main() //inicio minha função principal
{
  int r = 0;    //crio minha variavel de resposta

  cin >> n >> m;    //pego os valores de n e m

  for (int i = 0; i < n; i++) //percorro toda matriz coletando todos os valores dentro dos limites
  {
      for (int j = 0; j < m; j++)
      {
          cin >> matriz[i][j]; //pego o valor da posição i e j
      }
  }

  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < m; j++)
      {
          if (matriz[i][j] == 1) // checo se minha posição i e j não foi visitada , se não foi visitado crio uma nova mancha
          {
              dfs(i,j); // chamo minha função (dfs na posição i e j)
              r++; // add uma nova mancha
          }
      }
  }

  cout << r << endl; // imprimo minha resposta

  return 0; // termino meu codigo
}
