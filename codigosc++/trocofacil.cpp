#include <iostream>
#include <algorithm>

using namespace std;

int res, temp;

int notas(int n)
{
  //1
  if(n == 100)
  {
    return 1;
  }
  //2
  if(n < 100 &&n > 50)
  {
    n -= 50;
    res = 1;
    if(n != 0 &&n >= 25)
    {
      temp = n/25;
      n -= temp*25;
      res += temp;
    }
    if(n != 0 && n >= 10)
    {
      temp = n/10;
      n -= temp*10;
      res += temp;
    }
    if(n != 0 && n >= 5)
    {
      temp = n/5;
      n -= temp*5;
      res += temp;
    }
    if(n != 0 && n >= 1)
    {

      res += n/1;
    }

    return res;
  }
  //3

  //4
  if(n < 50 && n >= 25)
  {
    if(n != 0 &&n >= 25)
    {
      temp = n/25;
      n -= temp*25;
      res += temp;
    }
    if(n != 0 && n >= 10)
    {
      temp = n/10;
      n -= temp*10;
      res += temp;
    }
    if(n != 0 && n >= 5)
    {
      temp = n/5;
      n -= temp*5;
      res += temp;
    }
    if(n != 0 && n >= 1)
    {

      res += n/1;
    }

    return res;
  }
  //5
  if(n == 25)
  {
    return 1;
  }
  //6
  if(n < 25 && n > 10)
  {
    if(n != 0 && n >= 10)
    {
      temp = n/10;
      n -= temp*10;
      res += temp;
    }
    if(n != 0 && n >= 5)
    {
      temp = n/5;
      n -= temp*5;
      res += temp;
    }
    if(n != 0 && n >= 1)
    {

      res += n/1;
    }

    return res;
  }
  //7
  if(n == 10)
  {
    return 1;
  }

  //8
  if(n < 10 && n > 5)
  {
    if(n != 0 && n >= 5)
    {
      temp = n/5;
      n -= temp*5;
      res += temp;
    }
    if(n != 0 && n >= 1)
    {

      res += n/1;
    }

    return res;
  }

  //9

  if(n == 5)
  {
    return 1;
  }

  //10

  if(n < 5 &&n > 1)
  {
    if(n != 0 && n >= 1)
    {

      res += n/1;
    }

    return res;
  }

  //11

  if(n == 1)
  {
    return 1;
  }


}

int main()
{
  int n;

  cin >> n;

  cout << notas(n);

  return 0;
}
