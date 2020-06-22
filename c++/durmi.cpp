#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m = 0;

  cin >> n;

  if(n >= 9)
  {
    m = n - 9;
  }
  else{
    int temp = 9 - n;
    m = 24-temp;
  }

  cout << m;

  return 0;
}
