#include <iostream>

using namespace std;

int main()
{
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  int e = 0, f = 0;

  if (a != d) e = 1;
  if (b  !=  c) f = 1;
  if (a == d) e = 0;
  if (b  ==  c) f = 0;

  if (e == 1 && f == 0) cout<<"1\n";
  else if(e == 0 && f == 1) cout<<"2\n";
  else if((e == 0 && f == 0) || (e == 1 && f == 1)) cout <<"-1\n";

  return 0;
}
