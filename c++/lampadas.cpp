#include <iostream>

using namespace std;

int main()
{
  int n;
  int a = 0, b = 0;

  cin >> n;

  for(int i = 0; i < n; i++){
      int c;
      cin >> c;
      if (c == 1) {
          if(a == 1) a = 0;
          else if(a == 0) a = 1;
      }
      if (c == 2) {
          if(a == 1) a = 0;
          else if(a == 0) a = 1;
          if(b == 1) b = 0;
          else if(b == 0) b = 1;
      }
  }

  cout <<a << endl << b<< endl;

  return 0;
}
