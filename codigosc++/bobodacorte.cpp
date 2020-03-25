#include <bits/stdc++.h>

using namespace std;

int v[100005];

int n, r;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    r = v[0];

    sort(v, v + n);

    if (v[n-1] > r)
    {
        cout << "N";
    }
    else
    {
        cout <<"S";
    }

    return 0;
}
