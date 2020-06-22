#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, g, y, r = -1;
    vector <int> v;
    vector <int> k;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    v.push_back(0);

    for(int i = 0; i < n; i++)
    {
        if(i >= 3)
        {
            r++;
            g = v[i] + v[i - 3];
            k.push_back(g);

        }
        if(i <= n - 3)
        {
            r++;
            y = v[i] + v[i + 3];
            k.push_back(y);

        }
        else
        {
            r++;
            g = v[i];
            k.push_back(g);
        }


    }

    sort(k.begin(), k.end());

    cout << k[r];

    return 0;
}
