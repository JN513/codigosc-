#include <bits/stdc++.h>

using namespace std;

#define oo 10000000

int n, m;
int pil[10002];
int pro[10002];
int dis[10002];
vector<pair<int,int>> vizinhos[10005];

void Dijkstra(int s){
    for(int i = 1 ; i <= n+1 ; i++) dis[i] = oo;
    dis[s] = 0;

    priority_queue <pair<int,int>> fila;

    fila.push({s,dis[s]});

    while(true){
        int davez = -1;
        //int menor = oo;

        while(!fila.empty()){
        int atual = fila.top().first;
        fila.pop();

            if(!pro[atual]){
                davez = atual;
                break;
            }
        }

        if (davez == -1) break;

        pro[davez] = true;

        for(int i = 0; i < (int)vizinhos[davez].size();i++){
            int dist = vizinhos[davez][i].second;
            int atual = vizinhos[davez][i].first;

            if(dis[atual] > dis[davez]+dist){
                dis[atual] = dis[davez]+dist;
                fila.push({dis[atual], atual});
            }
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int x, y, dist;
        cin >> x >> y >> dist;
        vizinhos[x].push_back({y,dist});
        vizinhos[y].push_back({x,dist});
    }

    Dijkstra(0);

    cout << dis[n+1]<<endl;

    return 0;
}