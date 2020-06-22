#include <iostream>

using namespace std;

int main()
{
  int a, b, c, d;

  cin >> a >> b >> c;

  if (  a == b)
  {
      d = c;
  }

  if ( a == c)
  {
      d = b;
  }

  if ( b == c)
  {
      d = a;

  }

  cout << d;

  return 0;
}
