#include <iostream>

using namespace std;

int main()
{
  int n;
  int i, j;

  int a[105][105];

  cin >> n;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cin >> a [i] [j];
    }
  }

  for ( i = 0; i < n; i++)
  {
    for ( j = 0; i < n; i++)
    {
      if(a [i] [j-1] == 1 && a [i-1][j-1] == 1)
      {
        a [i] [j] = 0;
      }

      if(a [i] [j-1] == 0 && a [i-1][j-1] == 0)
      {
        a [i] [j] = 1;
      }

      if(a [i - 1] [j] == 1 && a [i-1][j-1] == 1)
      {
        a [i] [j] = 0;
      }

      if(a [i - 1] [j] == 0 && a [i-1][j-1] == 0)
      {
        a [i] [j] = 1;
      }

      if(a [i] [j-1] == 1 && a [i-1][j] == 1)
      {
        a [i] [j] = 0;
      }

      if(a [i] [j-1] == 0 && a [i-1][j] == 0)
      {
        a [i] [j] = 1;
      }
    }
  }

  cout << a[n][n];

  return 0;
}
