#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

const int maxn = 1e5 + 5;

int t, d, m, v[maxn];

int main(void){
    cin >> t >> d >> m;

    for(int i = 0; i <m; i++){
        cin >> v[i];
    }

    int pos = 0;
    bool ans = 0;

    for(int i = 0; i < m; i++){
        if(v[i] - pos >= t){
            ans = 1;
            break;
        }
            
        pos = v[i];
    }

    if(d - pos >= t){
        ans = 1;
    }

    if(ans){
        cout << "Y" << nl;
    }
    else{
        cout << "N" << nl;
    }

    return 0;
}