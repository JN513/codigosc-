#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);

  int d = 0,x;

  for (int i = 0; i < n; i++) {
    scanf("%d", &x);

    for (int j = 0; j < x; j++) {
      if (j%2==0) {
        d += 1;
      }
      else
      {
        d -= 1;
      }
    }
    printf("%d\n", d);
    d = 0;
  }

  return 0;
}
