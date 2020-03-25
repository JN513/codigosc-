#include <iostream>

using namespace std;

int main()
{

  int n;
  int v[55];
  int b[55];

  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> v[i];
  }

  for (int i = 1; i <= n; i++)
  {
    if ( v[i] == 1 && v[i - 1] == 1 && v[i + 1] == 1)
    {
      b[i] = 3;
    }

    else
    {

      if ( v[i - 1] == 1 && v[i + 1] == 1)
      {
        b[i] = 2;
      }

      else
      {

        if ( v[i] == 1 && v[i + 1] == 1)
        {
          b[i] = 2;
        }
        else{
            if ( v[i] == 1 && v[i - 1] == 1 )
            {
              b[i] = 2;
            }
            else
            {
              if ( v[i] == 1 )
              {
                b[i] = 1;
              }
              else
              {

                if ( v[i - 1] == 1 )
                {
                  b[i] = 1;
                }
                else
                {

                  if ( v [i + 1] == 1)
                  {
					b[i] = 1;
              }
            }
          }
        }
      }
     }
    }
  }

  for (int i = 1; i <= n; i++)
  {
    cout << b[i];
  }

  return 0;
}
