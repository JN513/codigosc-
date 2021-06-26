#include <bits/stdc++.h>

using namespace std;

#define int long long

int dist[1010],t;
vector<pair<int,int>> adj [1010];


void dijkstra(){

    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>fila;
    fila.push({0,t});
    dist[t]= 0;

    while(!fila.empty()){

        int node = fila.top().second;
        int peso = fila.top().first;
        fila.pop();

        if(peso > dist[node]) continue;

        for(pair<int,int> next : adj[node]){
            if(dist[next.second] > dist[node] + next.first){
                dist[next.second] = dist[node] + next.first;
                fila.push({dist[next.second],next.second});
            }
        }
    }


}

int32_t main(){
    int n,m;


    memset(dist,9999999,sizeof(dist));


    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b,ping;
        cin >> a >> b >> ping;
        adj[a].push_back({ping,b});
        adj[b].push_back({ping,a});


    }

    cin >> t;

    dijkstra();


    int maior =-1;
    int menor = 9999999;
    for(int i=1;i <=n;i++){
        if(dist[i] != 0){
            menor = min(menor,dist[i]);
        }
        maior = max(maior,dist[i]);
    }

    cout << maior - menor << endl;


}
