#include <iostream>
#include <algorithm>

using namespace std;

int res, temp;

int notas1(int n)
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

int notas2(int n)
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

int notas3(int n)
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

int notas4(int n){
    if(n < 10 && n > 5){
        if(n != 0 && n >= 5){
            temp = n/5;
            n -= temp*5;
            res += temp;
        }
        if(n != 0 && n >= 1) res += n/1;

        return res;
    }
}

int notas5(int n){
    if(n != 0 && n >= 1) res += n/1;
    return res;
}

int main(){
    int n;

    cin >> n;

    if(n == 100 || n == 50 || n == 25 || n == 10 || n == 5 || n == 1) cout << 1;
    else if(n < 100 && n > 50) cout << notas1(n);
    else if(n < 50 && n > 25) cout << notas2(n);
    else if(n < 25 && n > 10) cout << notas3(n);
    else if(n < 10 && n > 5) cout << notas4(n);
    else if(n < 5 && n > 1) cout << notas5(n);

    return 0;
}
