#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int r = 0;

int main()
{
  int n, m, r = 0, temp;
  int v[1005];

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  sort(v, v+n);

  for (int i = 0; i < n; i++)
  {
    //1
    if(v[i] < m && v[i + 1] < m)
    {
      if(v[i] < v[i + 1])
      {
        r += m - v[i];
        v[i] += m - v[i];
        v[i + 1] += m - v[i];
      }
      else
      {
        if(v[i] > v[i + 1])
        {
          r += m - v[i + 1];
          v[i] += m - v[i];
          v[i + 1] += m - v[i];
        }
        else
        {
          if(v[i] == v[i + 1])
          {
            r += m - v[i];
            v[i] += m - v[i];
            v[i + 1] += m - v[i];
          }
          }
        }
      }
//2
      else
      {

        if(v[i] > m && v[i + 1] > m)
        {
          if(v[i] < v[i + 1])
          {
            r += v[i] - m;
            v[i] += v[i] - m;
            v[i + 1] += v[i] - m;
          }
          else
          {
            if(v[i] > v[i + 1])
            {
              r +=  v[i + 1] - m;
              v[i] += v[i] - m;
              v[i + 1] += v[i] - m;
            }
            else
            {
              if(v[i] == v[i + 1])
              {
                r +=  v[i] - m;
                v[i] += v[i] - m;
                v[i + 1] += v[i] - m;
              }
            }
          }
        }
        //3
        else
        {
          if(v[i] < m && v[i + 1] > m)
          {
            temp = (v[i + 1] - v[i])/2;
            r += temp;
            v[i] += temp;
            v[i + 1] -= temp;
          }

          //4
          else
          {
            if(v[i] == m && v[i + 1] > m)
            {
              r += v[i + 1] - m;
            }
          }
        }
      }
  }

  r = r/2;

  cout << r;

  return 0;
}
