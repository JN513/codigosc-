#include<bits/stdc++.h>

using namespace std;

int v[1005];

int main()
{
  int a,b,c, d = 1, r = 0;

  cin >> a >> c >> b;

  for (int i = 0; i < c; i++) {
    cin >> v[i];
  }

  if (d == b)
  {
    r++;
  }

  for (int i = 0; i < c; i++) {

    if (v[i] == 1)
    {
      d++;
    }
    else
    {
      if (v[i] == -1)
      {
        d--;
      }
    }

    if (d == b || d == (b-2*b))
    {
      r++;
    }

  }

  cout << r;

  return 0;
}
