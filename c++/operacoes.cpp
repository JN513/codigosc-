#include <iostream>

using namespace std;

int main()
{
  double a, b, r;
  char s;

  cin >> s;
  cin >> a >> b;

  if(s == 'M')
  {
    r = a*b;
  }

  if(s == 'D')
  {
    r = a/b;
  }

  cout.precision(2);
  cout.setf(ios::fixed);
  cout << r;

  return 0;
}
