#include <iostream>

using namespace std;

int main()
{
  double n, f;
  double m;

  cin >> n >> f;

  m = n / f;

  cout.precision(2);
  cout.setf(ios :: fixed);
  cout << m;
  return 0;
}
