#include <iostream>

using namespace std;

int main()
{
  int n, l, c, x;

  int z = 0;

  cin >> n;

  int i = n;

  while (i)
  {
    cin >> l >> c;
    if (l>c)
    {
        x = c;
    }

    z = z + x;

    i = i - 1;
  }

  cout << z;

  return 0;
}
