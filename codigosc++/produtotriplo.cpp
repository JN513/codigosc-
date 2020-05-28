#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  int v[200005];
  long long int r = 0, temp = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 2; i < n; i++) {
    temp = (v[i]*v[i-1])*v[i-2];
    if(temp > r)
    {
      r = temp;

      
    }
  }

  cout << r;

  return 0;
}
