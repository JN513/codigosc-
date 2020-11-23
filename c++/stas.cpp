#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, v[1000002], r = 0;

    cin >> n;

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 1; i < n; i++){
        if(v[i] == v[i-1]){
            v[i] = v[i-1]*-1;
            r++;
        }
    }

    cout << min(r, n-r) << endl;

    return 0;
}