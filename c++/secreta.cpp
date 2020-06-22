#include <iostream>

using namespace std;

int main()
{
  int a;
  int b = 1;
  int c = 1;
  int d = 1;

  cin >> a;

  while (a)
  {
      a = a -1;

      cin >> b;

      if ( b != c ) {
        d = d + 1
      }

      c = b;
  }

  cout << d;

  return 0;
}
