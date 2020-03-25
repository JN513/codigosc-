#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, r = 0;
    int v[3];

    cin >> n;

    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }

    sort(v, v+3);

    for (int i = 0; i < 3; i++) {
        if (v[i] <= n) {
            n -= v[i];
            r++;
        }
    }

    cout <<r;

    return 0;
}
