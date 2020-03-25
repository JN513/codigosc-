#include <iostream>

using namespace std;

int main()
{
  int matriz [2][100009];
  int d[2][100009];

  int i, j;

  int a, b;

  int n, t;

/*  d[i][j] = matriz[i][j];*/

  cin >> n >> t;

  for (i = 0; i < 2; i++)     /*coleto os valores dos dois lados das cartas*/
  {
    for (j = 1; j <= n; j++)
    {
      cin >> matriz[i][j];
    }
  }

  for (i = 0; i < 2; i++)     /*tendo um valor base*/
  {
    for (j = 1; j <= n; j++)
    {
      d[i][j] = matriz[i][j];
    }
  }

  for(int c = 1; c <= t; c++ ) /*pegando as trocas*/
  {
    cin >> a >> b;

    for (i = 0; i < 2; i++)     /*trocando*/
    {
      for (j = a; j <= b; j++)
      {

        if (i == 0)
        {
          matriz[i][j]= d[1][j];
        }

        if (i == 1)
        {
          matriz[i][j]= d[0][j];
        }
      }
    }

    for (i = 0; i < 2; i++)     /*tendo um valor base*/
    {
      for (j = 1; j <= n; j++)
      {
        d[i][j] = matriz[i][j];
      }
    }
  }

  for(i = 0; i < 1; i++)
  {
    for (j = 1; j <= n; j++ )
    {
      cout << matriz[i][j]<<" ";
    }
  }
}
