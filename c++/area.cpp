#include <iostream>

using namespace std;

int main()
{

  double r;
  double a;
  double pi = 3.14159;

  cin >> r;

  a = r * r * pi;


 // std::cout.precision(4);
  //std::cout <<"A="<< a;
  std::cout.precision(4);
  std::cout <<"A=" << std::fixed << a;

  return 0;
}
