#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, v[10002];

    cin >> n;

    for (int i = 0; i < n; i++) cin >> v[i];

    int s = v[0]+v[n-1];

    for(int i = 0; i < n; i++){
        if(v[i] + v[n-1-i] != s){
            cout << 'N' << endl;
            return 0;
        }
    }

    cout << 'S' << endl;
    return 0;
}