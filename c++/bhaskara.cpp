#include <iostream>

#include <cmath>

using namespace std;

int main()
{
  int a, b, c, delta;

  cout <<"Insira o valor de a, b, c.\n";

  double  res1, res2, raiz;

  cin >> a >> b >> c;

  delta = (b * b) - (4 * a * c);

  raiz = sqrt(delta);

  res1 = (-1 * b + raiz)/2;

  res2 = (-1 * b - raiz)/2;

  cout << "x = {"<<res1 <<","<<res2<<"}";

  return 0;
}
