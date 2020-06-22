#include <bits/stdc++.h>

using namespace std;

int n, r;

vector <int> v;

int main()
{
    string x;

    scanf(" %s", x);

    n = x.size();

    for (int i = 0; i < n; i++) {

        if (x[i] == '1')
        {
            r += 1 * pow(i, 2);
        }
        else
        {
            r += 0;
        }

    }

    cout << r;

    return 0;
}
