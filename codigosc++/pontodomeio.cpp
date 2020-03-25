#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  unsigned long long lado;

  cin >>n;

  lado = 2ULL;

  while (n-- > 0)
  {
    lado += lado-1;
  }

  cout << lado*lado;

  return 0;
}
