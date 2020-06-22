#include <iostream>

using namespace std;

int main()
{
  int n, m, x;
  int vetor [105];

  cin >> n >> m;

  for(int i = 1; i <= n;i++)
  {
      vetor[i] = 0;
  }

  for (int i = 0; i < m; i++)
  {
    cin >> x;
    vetor[x] = 1;
  }

  int r = 0;

  for (int i = 1 ; i <= n; i++ )
  {
    if (vetor [i] == 0)
    {
        r = r + 1;
    }
  }

  cout << r;

  return 0;
}
