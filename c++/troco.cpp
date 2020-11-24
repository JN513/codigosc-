#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k, v[100002];

    cin >> n >> k;

    for(int i = 0; i < k; i++) cin >> v[i];

    sort(v, v+k, [](int a, int b){
        return a > b;
    });

    for(int i = 0; i < k; i++){
        if (v[i] <= n)n -= v[i];
    }

    if(n > 0) cout << "N\n";
    else cout << "S\n";

    return 0;
}