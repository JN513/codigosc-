#include <iostream>

using namespace std;

int main()
{
  int n, r, x, a;

  int matriz [11][11];   /*linhas depois colunas*/

  int i, j; /*i = linhas , j = colunas*/

  int v[11]; /*valores das linhas*/

  int l[11];  /*valores das colunas*/

  cin >> n;

  for(i = 1; i <= n; i++)    /*coleto valore*/
  {
    for(j = 1; j <= n; j++)
    {
      cin >> matriz[i][j];
    }
  }

  for(i = 1; i <= n; i++)    /*faco a operação nas linhas*/
  {
    for(j = 1; j <= n; j++)
    {
      v[i] = v[i] + matriz[i][j];
    }

  }

  for(i = 1; i <= n; i++)    /*faco a operação nas colunas */
  {
    for(j = 1; j <= n; j++)
    {
      l[j] = l[j] + matriz[i][j];
    }

  }

  for (int k = 1; k <n; k++)
  {
    if (v[k] == v[k + 1]  )
    {
      x = 1;
    }
    else
    {
      x = -1;
    }
  }


  for (int k = 1; k <n; k++)
  {
    if (l[k] == l[k + 1] )
    {
      a = 1;
    }
    else
    {
      a = -1;
    }
  }

  if (a == -1 || x == -1)
  {
    r = -1;
  }

  else
  {
    r = v[2];
  }

  cout << r;

  return 0;
}
