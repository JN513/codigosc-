#include <iostream>

using namespace std;

int main()
{
  int a, b, c, d;
  int l, ca;

  cin >> a >> b >> c >> d;

  /*lia*/

  if (a == b)
  {
    l = 2 * (a+b);
  }

  else
  {
    if (a == b + 1 || a == b - 1)
    {
      l = 3 * (a+b);
    }

    else
    {
      l = a + b;
    }
  }

  /*carolina*/

  if (c == d)
  {
    ca = 2 * (c+d);
  }

  else
  {
    if (c == d + 1 || c == d - 1)
    {
      ca = 3 * (c+d);
    }

    else
    {
      ca = c + d;
    }
  }

  /*resposta*/

  if (ca > l)
  {
    cout <<"Carolina";
  }

  if (l > ca)
  {
    cout <<"Lia";
  }

  if (ca == l)
  {
    cout <<"empate";
  }

  return 0;
}
