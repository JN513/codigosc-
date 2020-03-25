#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, x, y;

    cin >> n >> x >> y;

    double r = n/(x+y);

    cout.precision(2);
    cout.setf(ios::fixed);
    cout << r << endl;

    return 0;
}
