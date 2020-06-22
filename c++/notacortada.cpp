#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    int a1 = 0, ab = 0;

    cin >> a >> b;

    a1 = (a+b)/2 * 70;
    ab = ((160 - a)+(160 - b))/2 * 70;

    if (a1 > ab)
    {
        cout << "1";
    }
    else
    {
        if (ab > a1)
        {
            cout << "2";
        }
        else
        {
            if (a1 == ab)
            {
                cout << "0";
            }
        }
    }

    return 0;
}
