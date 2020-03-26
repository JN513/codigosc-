#include <bits/stdc++.h>

using namespace std;

int n, m, r;

int dirx[4] = {0,0,1,-1};  // crio meus vetores de coordenadas
int diry[4] = {1,-1,0,0};

int matriz[1005][1005];

bool ver(int x, int y){
	return x >= 0 && x < n && y >= 0 && y < m;
}

void bfs(int x, int y)
{
  queue <pair<int,int>> fila;

  fila.push({x,y});

  while (!fila.empty())
  {
    int x = fila.front().first;
    int y = fila.front().second;

    fila.pop();

    for (int k = 0; k < 4; k++){
			int xi = x+dirx[k];     // crio o xi para facilitar
			int xj = y+diry[k];
      if (!ver(xi,xj) && matriz[xi][xj] == 1)
      {
          matriz[xi][xj] = 0;
          fila.push({xi,xj});
      }
    }
  }
}

int main()
{
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
              bfs(i,j); // chamo minha função (dfs na posição i e j)
              r++; // add uma nova mancha
          }
      }
  }

  cout << r << endl; // imprimo minha resposta

  return 0; // termino meu codigo
}
