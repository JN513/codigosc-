#include <iostream>

using namespace std;

int main()
{
  int a = 0;
  int b;
  int c = 0
  int d = 0;
  int n = 1;

  cin >> n;

  for (n; n != 0; n--)
  {
    cin >> a;

    if (a = 1)
    {
      c = 1;
    }
    else
    {
      if (c == 1 && d == 0)
      {
        c = 0;
        d = 1;
      }
      if (c == 0 && d == 1)
      {
        c = 1;
        d = 0;
      }
    }

  }

  cout << c << "\n";
  cout << d << "\n";

  return 0;
}
