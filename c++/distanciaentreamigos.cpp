#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, r =0, temp = 0;
    int v[200005];

    cin >> n;

    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++)
    for (int j = i+1; j < n; j++)
    {
        temp = v[i]+v[j]+(j-i);
        if (temp > r) r = temp;
    }

    cout << r;

    return 0;
}
