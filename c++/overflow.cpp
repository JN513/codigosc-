#include <iostream>

using namespace std;

int main()
{
  int a, b, n, r;
  char c;

  cin >> n;
  cin >> a >> c >> b;

  if(c == '+')
  {
    r = a + b;
  }

  if(c == '*')
  {
    r = a * b;
  }

  if(r > n)
  {
    cout << "OVERFLOW";
  }
  else
  {
    cout << "OK";
  }

  return 0;
}
