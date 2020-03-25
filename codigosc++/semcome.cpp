#include <bits/stdc++.h>

using namespace std;

int n,m;

int dirx[4] = {0,0,1,-1};
int diry[4] = {1,-1,0,0};

int matriz[1005][1005];

bool ver(int x, int y){
	return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int i, int j)
{
    matriz[i][j] = 2;

    for (int k = 0; k < 4; k++)
    {
        int xi = i+dirx[k];
        int xj = j+diry[k];

        if(!ver(xi, xj))continue;

        if(matriz[xi][xj] == 1  )
        {
            dfs(xi, xj);
        }
    }
}

int main()
{
  int r = 0;

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < m; j++)
      {
          cin >> matriz[i][j];
      }
  }

  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < m; j++)
      {
          if (matriz[i][j] == 1)
          {
              dfs(i,j);
              r++;
          }
      }
  }

  cout << r << endl;

  return 0; 
}
