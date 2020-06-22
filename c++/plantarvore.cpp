#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, g, y;
    vector <int> v;
    vector <int> k;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < n; i++)
    {
        g = i + 1 + v[i];

        k.push_back(g);

    }

    sort(k.begin(), k.end());

    cout << k[n-1];

    return 0;
}
