#include <iostream>

using namespace std;

int main()
{
  int n, r = 0;

  string a;
  string b;

  cin >> n;
  cin >> a;
  cin >> b;

  for(int i = 0; i < n; i++)
  {
    if(a[i] == b[i])
    {
      r = r + 1;
    }
  }

  cout << r;

  return 0;
}
