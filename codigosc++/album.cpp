#include <iostream>

using namespace std;

int main()
{
  int n, m;
  int x = 0;
  int v[105];

  cin >> n >> m;

  for(int i = 0; i <= m; i++)
  {
    v[i] = 0;
  }

  for (int i = 1; i <= m; i++)
  {
    cin >> x;
    v[x] = 1;
  }

  int r = 0;

  for (int i = 1 ; i <= n; i++)
  {
    if(v[i] == 0 )
    {
      r = r + 1;
    }
  }

  cout << r;

  return 0;
}
