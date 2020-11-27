#include <bits/stdc++.h>

using namespace std;

long long int c, f, p[2002], v[2002], dp[2002];

int main(void){
    cin >> c >> f;

    for (int i = 1; i <= f; i++) cin >> p[i] >> v[i];

    for (int  i = 0; i <= c; i++) dp[i] = 0;

    for (int j = 1; j <= f; j++)
        for (int i = c; i >= p[j]; i--)
            dp[i] = max(dp[i], dp[i - p[j]]+v[j]);

    cout << dp[c] << endl;

    return 0;
}