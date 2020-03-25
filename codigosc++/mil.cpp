#include <iostream>

using namespace std;

int main() {

  int a = 1;
  int b = 1;
  int c = 1;
  int d = 1;

  cin >> a;



  while (a)
  {
        a = a - 1;
        cin >> b;
        d = d + b;

        if (d <= 1000000) {
            c = c + 1;
        }
  }

  cout << c;

  return 0;
}
