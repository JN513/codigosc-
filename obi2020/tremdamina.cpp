#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 10003
#define MAXN 20003

using namespace std;

int e, r, k, v[NMAX], res = 0, d, f;

vector <pair<int,int>> grafo[MAXN];

void dfs(int x){

    for(int i = 0; i < (int) grafo[x].size(); i++){
        int y = grafo[x][i].first;

        if(v[y] == -1){
            if(y == f and res > d) {
                v[y] = res;
                return;
            }
            else if(y != f){
                res+= grafo[x][i].second;
                v[y] = 1;
                dfs(y);
            }
        }
    }
}

int main(void){
    cin >> e >> r;

    for(int i = 0; i <= e+1; i++) v[i] = -1;

    for(int i = 0, a, b, c; i < r; i++){
        cin >> a >> b >> c;

        grafo[a].push_back({b,c});
        grafo[b].push_back({a,c});
    }

    cin >> k;

    for(int i = 0; i < k; i++){
        cin >> f >> d;

        if(v[f] == -1) cout << -1 << nl;
        else cout << v[f] << nl;

        res = 0;
        for(int i = 0; i <= e+1; i++) v[i] = -1;
    }

    return 0;
}