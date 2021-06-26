#include <bits/stdc++.h>

#define nl endl
#define int long long

using namespace std;

int n, m, k;
int v[1010];

vector < pair<int,int> > grafo[1010];

void dijkstra(){
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>fila;

    fila.push({0,k});
    v[k] = 0;

    while(!fila.empty()){
        int node = fila.top().second;
        int peso = fila.top().first;
        fila.pop();

        if(peso > v[node]) continue;

        for(auto a : grafo[node]){
            if(v[a.second] > v[node]+a.first){
                v[a.second] = v[node]+a.first;
                fila.push({v[a.second], a.second});
            }
        }
    }
}

int32_t main(void){
    cin >> n >> m;

    for(int i = 0; i < n+1; i++) v[i] = 9999999;

    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;

        grafo[a].push_back({c,b});
        grafo[b].push_back({c,a});
    }

    cin >> k;

    dijkstra();

    int maior = -1, menor = 9999999;

    for(int i = 1; i <= n; i++){
        if(v[i] != 0) menor = min(menor,v[i]);
        maior = max(maior, v[i]);
    }

    cout << maior-menor << nl;

    return 0;
}
