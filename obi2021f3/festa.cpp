#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m, t;

vector <int> f;


int main(void){

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> t;

        f.push_back(t);
    }

    int v[n+1];

    for(int i = 0; i <= n; i++){
        v[i] = i;
    }

    int ans = 1;

    for(int x : f){
        for(int i = 1; i <= n; i++){
            if(v[i] == -1) continue;

            if(ans % x == 0){
                v[i] = -1;
            }

            ans++;
        }

        ans = 1;
    }

    for(int i = 1; i <= n; i++){
        if(v[i] != -1) cout << v[i] << nl;
    }

    return 0;
}