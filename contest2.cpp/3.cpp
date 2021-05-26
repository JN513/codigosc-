#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 50005

using namespace std;

vector <int> grafo[NMAX];
int n, m, v[NMAX], r;

void dfs(int x){
    v[x] = 1;

    for(int a: grafo[x]){
        if(v[a] == 0){
            dfs(a);
        }
    }
}

int main(void){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        if(v[i] == 0){
            r++;

            dfs(i);
        }
    }

    cout << r << nl;

    return 0;
}