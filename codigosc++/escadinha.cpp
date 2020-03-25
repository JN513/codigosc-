#include <iostream>

using namespace std;

int main()
{

  int n;
  int v[1005];
  int r = 0;

  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> v[i];
  }

  for (int i = 1; i <= n; i++)
  {

    if (v[ i - 2] - v[ i - 1] == v[i - 1] - v[i] || v[ i] - v[ i - 1] == v[i - 1] - v[i - 2] || n <=2 || v[i] - v[i -1] == v[i + 1] - v[i] || v[i - 1] - v[i] == v[i] - v[i - 1])
    {

      if (n <= 2)
      {
        r = r + 1;
      }

      else
      {
        if (v[i + 1] - v[i] ==  v[i + 2] - v[i + 1] || v[i] - v[i + 1] ==  v[i + 1] - v[i + 2])
        {
          r = r + 1;
        }

       else
        {
          if (v[i] - v[i + 1] == 0 || v[i  + 1] - v[i] == 0 || v[i] - v[i - 1] == v[i + 1] - v[i] || v[i - 1] - v[i] == v[i] - v[i + 1] )
          {
            r = r + 1;
          }
        }
      }
    }
  }

  cout << r;

  return 0;
}
