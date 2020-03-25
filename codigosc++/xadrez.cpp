#include <iostream>

using namespace std;

int m[1005][1005];

int main()
{
  int k , w;

  cin >> k >> w;

  m[0][0] = 1;
  for(int i = 0; i < k; i++ )
  {
    for(int j = 0; j < w; j++)
    {
      if(m[i-1][j] == 1 || m[i][j - 1] == 1 )
      {
        m[i][j] = 0;
      }
      else
      {
        if(m[i-1][j] == 0 || m[i][j - 1] == 0 )
        {
          m[i][j] = 1;
        }
      }
    }
  }


  cout << m[k - 1][w - 1];

  return 0;
}
