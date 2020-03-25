#include <iostream>

using namespace std;

int vglobal;

int aumentavalor(int x)
{
  vglobal = vglobal + x;
  return vglobal;
}

double media(double x, double y, double z)
{
  double media = (x+y+z)/3.0;
  return media;
}

int main()
{

  cin >> vglobal;

  cout << aumentavalor(5) << endl;
  cout << aumentavalor(4) << endl;
  cout << aumentavalor(3) << endl;
  cout << aumentavalor(2) << endl;
  cout << aumentavalor(1) << endl;
  cout << aumentavalor(0) << endl;
  //cout << media(5,1,7)<< endl;

  return 0;
}
