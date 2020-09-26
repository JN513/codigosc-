#include <bits/stdc++.h>

using namespace std;

int n, r = 0, v[10005];

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin>>v[i];
    for(int i = 1; i < n; i++) if (v[i] - v[i-1] > 8) {
        cout << "N\n";
        return 0;
    }
    cout << "S\n";

    return 0;
}