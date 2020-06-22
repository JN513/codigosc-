#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double c, r, h, rp, hp, prz, prz1, x;

  cout <<"insira o raio em mm" << endl;

  cin >> r;

  cout <<"insira a altura em mm "<< endl;

  cin >> h;

  hp = h / 25.4;

  rp = r/ 25.4;

  prz = pow(rp, 3);

  prz1 = prz/16.5;

  x = sqrt(prz1);

  c = (0.29 * hp) + (0.41 * rp) + 1.94 * x;

  cout.precision(2);
  cout.setf(ios::fixed);
  cout << c;

  return 0;
}
