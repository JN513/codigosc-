#include "bits/stdc++.h"

using namespace std;

int pb, pg, pm;

int main()
{
    int n;
    int v[100005];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for(int i = 0; i <= n/2; i++)
    {
        if (pb == pm && pb > 0 && pm > 0 && pb + v[i+1] != pm + v[n-i-1])
        {
            break;
        }

        pb += v[i]; pm += v[n-i-1];

        if (i == n/2 && pb != pm)
        {
            pb = 0;
            break;
        }

        if(pm > pb)
        {
            pb += v[i+1];
            ++i;
        }
        if (pb > pm)
        {
            pm += v[n-i-2];
            i++;
        }
    }

    cout << pb;

    return 0;
}
