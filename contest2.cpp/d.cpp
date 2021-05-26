#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m;
int v[1005];

vector <pair<int,int>> grafo[110];

void bfs(int k){
    queue < pair<int,int> > fila;

    int x = grafo[k].first;
    int y = grafo[k].second;

    fila.push({x,y});

    v[x] = y;

    while(!fila.empty()){

        x = fila.front().first;
        y = fila.front().second;

        fila.pop();

        for(int i = 0; i < grafo[x].size(); i++){
            int u = grafo[x][i].first;
            int w = grafo[x][i].second;

            if(v[u] == 0){
                v[u] = v[x]+w;

                fila.push({u, w});
            }
        }
    }
}

int main(void){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;

        grafo[a].push_back({b,c});
        grafo[b].push_back({a,c});
    }

    bfs(1);

    sort(v+1, v+n+1);

    cout << v[n]-v[1] << nl;

    return 0;
}