#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, r;

vector<pair<int,int>> trechos;

int main(void){
    cin >> n;

    for(int i = 0, a, b; i < n; i++){
        cin >> a >> b;
        trechos.push_back({a,b});
    }

    for(int i = 1, a, b; i < n; i++){
        if(trechos[i].first - trechos[i-1].second >= 1) r++;
    }

    cout << r << nl;

    return 0;
}