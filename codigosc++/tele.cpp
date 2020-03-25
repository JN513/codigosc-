#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, r=0;

    cin >> n;

    vector <int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    v.push_back(0);
    v.push_back(0);

    for (int i = 0; i < n; i++)
    {
        if(v[i] > v[i+1] || v[i] > v[i-1])
        {
            r++;
        }
    }

    cout << r;

    return 0;
}
