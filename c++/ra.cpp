#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    double x;
    cin >> x;
    cout.precision(4);
    cout.setf(ios::fixed);
    cout << sqrt(x) << endl;
  }

  return 0;
}
