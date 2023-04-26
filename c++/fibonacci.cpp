#include <iostream>

using namespace std;

int main()
{
  int n;

  int v[1000005];

  cin >> n;

  v[0] = 0;
  v[1] = 1;

  for (int i = 0; i <= 1000006; i++) {

    if(i > 1)
    {
      v[i] = v[i-1]+v[i-2];
    }

    if (v[i] == n) {
      cout <<"SIM";
      break;
    }
    else
    if (v[i] > n) {
      cout <<"NAO";
      break;
    }
  }

  return 0;
}
