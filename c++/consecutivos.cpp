#include <bits/stdc++.h>

using namespace std;

int n, v[10005], r=1, temp;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) cin >> v[i];

    for (int i = 1; i <= n; i++) {
        if(v[i] == v[i-1])r++;
        else{
            if (temp < r) temp = r;
            r=1;
        }
        if (temp < r) temp = r;
    }

    cout << temp<<endl;

    return 0;
}
