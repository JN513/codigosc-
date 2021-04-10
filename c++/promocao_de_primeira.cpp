#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 50002

using namespace std;

int n, visi[NMAX], r, dp[NMAX][2];
vector <pair <int,int> > grafo[NMAX];

void dfs(int x, int p){
    visi[x] = 1;

    for(auto e : grafo[x]){
        if( e.first == p )continue;

        dfs(e.first, x);

        dp[x][e.second] = max( dp[x][e.second], dp[e.first][!e.second] + 1 );
    }

    r = max( r, dp[x][0] + dp[x][1] + 1 );
}

int main(void){
    cin >> n;

    for(int i = 0, a, b, c; i < n-1; i++){
        cin >> a >> b >> c;

        grafo[a].push_back({b,c});
        grafo[b].push_back({a,c});
    }

    dfs(1, -1);

    cout << r << nl;

    return 0;
}