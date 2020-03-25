#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
//  int v[10005];

  int n, r = 0, j = 0;

  cin >> n;

  int v[n];

  int k[n];

  for(int i = 0; i < n ; i++)
  {
    cin >> v[i];
  }

  for(int i = 0; i < n ; i++)
  {

    /*    if(v[i] < v[i - 1] && v[i] > v[i + 1])
        {
          r = r + 1;
          k[j] = v[i];
          j++;
        }*/
      //  else
      //  {
          if(v[i] > v[i - 1] && v [i] > v[i + 1])
          {
            r = r + 1;
            k[j] = v[i];
            j++;
          }
      //  }


  }

  cout << r << endl;

  for(int j = 0; j < r ; j++)
  {
    cout << v[j] << " ";
  }

  cout << endl;

  return 0;
}
