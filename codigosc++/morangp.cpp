#include<bits/stdc++.h>

using namespace std;

int main()
{
  int a,b,c,d;

  cin >> a >> b >> c >> d;

  int ab = a * b;
  int cd = c * d;

  if (ab >= cd) {
    cout << ab;
  }
  else
  {
    cout << cd;
  }

  return 0;
}
