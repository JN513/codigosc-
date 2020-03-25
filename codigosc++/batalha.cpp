#include <iostream>

using namespace std;

int main()
{
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  int e = 0;

  if (a > d && c == b)
  {
    e = 1;
  }

  else
  {

    if (c > b && a == d)
    {
      e = 2;
    }

    else
    {

      if (a >= d && b >= c)
      {
        e = 1;
      }

      else
      {

        if (c >= b && d >= d)
        {
          e = 2;
        }

        else
        {

          if (c != b && a != d)
          {
            e = -1;
          }

          else
          {

            if (a != d && c != b)
            {
              e = -1;
            }
          }
        }
      }
    }
  }
  cout << e;

  return 0;
}
