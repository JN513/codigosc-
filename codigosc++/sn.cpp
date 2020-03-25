#include <iostream>

using namespace std;

int a[105] [105] , b[105] [105];

int main()
{
  int n, m;

  cin >> n >> m;

  for (int i = 0; i = n - 1; i++)
  {
    for (int j = 0; j < m - 1 ; j++)
    {
      cin >> a[i] [j];
    }
  }

  for (int i = 0; i = n - 1; i++)
  {
    for (int j = 0; j < m - 1 ; j++)
    {
      cin >> b[i] [j];
    }
  }

  for (int i = 0; i = n - 1; i++)
  {
    for (int j = 0; j < m - 1 ; j++)
    {
      cin >> a[i] [j] + a [i] + [j];
    }
  }

  return 0;
}
