#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, m, v[1002], r = 0;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n-1; i++){
        int diferenca = m - v[i];

        r += abs(diferenca);
        v[i+1] += diferenca;
    }

    cout << r << nl;

    return 0;
}