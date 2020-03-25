#include <iostream>

using namespace std;

int main()
{
  int n;
  int i, f;
  int v[1005];
  int r = 0;
  int s;

  cin >> n >> i >> f;

  for (int k = 1; k <= n; k++)
  {
    cin >> v[k];
  }

  for (int k = 1; k <=n; k++)
  {
    for (int j = 1; j <=n; j++)
    {
       s= v[k] + v[j];
       cout << s << " ";
      if (s >= i && s <= f && k != j && j > k)
      {
        r = r + 1;
      }
    }
  }

  cout << r;

  return 0;
}
