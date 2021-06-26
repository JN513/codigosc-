#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;

int main(void){
    int n;
    ll v[10008];

    cin >> n;

    v[0] = 0; 
    for(int i = 1; i <= n; i++) cin >> v[i];

    sort(v, v+n);

    bool ok = true;

    for(int i = 1; i <= n; i++){
        if(v[i] - v[i-1] > 8) ok = false;
    }

    if(ok) cout << "S\n";
    else cout << "N\n";

    return 0;
}