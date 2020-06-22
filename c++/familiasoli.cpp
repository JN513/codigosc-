#include <bits/stdc++.h>

using namespace std;

int n, m, mor;

int v[505];
vector<int> v[1005];

int main()
{
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int a,b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  cin >> mor;

  for(int i = 0; i <= mor; i++)
  {
    int a;
    cin >> a;
    v[a] = -1;
  }

  return 0;
}
