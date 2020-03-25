#include <iostream>

using namespace std;

int main()
{
  int n, temp, res = 0;

  cin >> n;

  temp = n/100;
  res += temp;
  if(temp)
  {
    n =  n - (temp * 100);
  }

    temp = n/50;
    res += temp;
    if(temp)
    {
      n =  n - (temp * 50);
    }

      temp = n/25;
      res += temp;
      if(temp)
      {
        n =  n - (temp * 25);
      }

        temp = n/10;
        res += temp;
        if(temp)
        {
          n =  n - (temp * 10);
        }

          temp = n/5;
          res += temp;
          if(temp)
          {
            n =  n - (temp * 5);
          }

            temp = n/1;
            res += temp;
            if(temp)
            {
              n =  n - (temp * 1);
            }


  cout << res;

  return 0;
}
