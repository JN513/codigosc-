#include <iostream>

using namespace std;

int v[105], r;

int main()
{
  int n, m;
  int x = 0;

  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin>>x;
    v[x] = 1;
  }

  for (int i = 1; i <= n; i++) if (v[i] == 0) r++;

  cout << r;

  return 0;
}
