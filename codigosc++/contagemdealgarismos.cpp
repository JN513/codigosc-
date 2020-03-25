#include <iostream>

using namespace std;

int main()
{
  int n;
  string x;
  int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0;

  cin >> n ;

  getline(cin, x);

  for(int k = 0 ; k < x.size() ; k++)
  {
    if(x[k] == '0')
    {
      a++;
    }

    if(x[k] == '1')
    {
      b++;
    }

    if(x[k] == '2')
    {
      c++;
    }

    if(x[k] == '3')
    {
      d++;
    }

    if(x[k] == '4')
    {
      e++;
    }

    if(x[k] == '5')
    {
      f++;
    }

    if(x[k] == '6')
    {
      g++;
    }

    if(x[k] == '7')
    {
      h++;
    }

    if(x[k] == '8')
    {
      i++;
    }

    if(x[k] == '9')
    {
      j++;
    }
  }

  cout << "0-"<<a <<endl;
  cout << "1-"<<b <<endl;
  cout << "2-"<<c <<endl;
  cout << "3-"<<d <<endl;
  cout << "4-"<<e <<endl;
  cout << "5-"<<f <<endl;
  cout << "6-"<<g <<endl;
  cout << "7-"<<h <<endl;
  cout << "8-"<<i <<endl;
  cout << "9-"<<j <<endl;

  return 0;
}
