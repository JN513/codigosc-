#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

const int inf = 5e8;

int t, n, m;

char ma[105][105];
int dist[105][105];

int dirx[4] = {0,0,1,-1};
int diry[4] = {1,-1,0,0};

bool verifica(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}

void bfs(int x, int y){
    priority_queue < pair<int, pair<int, int> > > fila;

    fila.push({-1, {x, y}});

    while(!fila.empty()){

        x = fila.top().second.first;
        y = fila.top().second.second;
        int w = -fila.top().first;

        fila.pop();

        if(dist[x][y] != w) continue;

        for (int k = 0; k < 4; k++){
            int xi = x+dirx[k];
            int xj = y+diry[k];
            if (verifica(xi,xj)){
                //cout << nl << xi << " " << xj << "ok" << nl;

                if(ma[xi][xj] == '.'){
                    if(dist[xi][xj] > dist[x][y] + 1){
                        dist[xi][xj] = dist[x][y] + 1;
                        fila.push({-dist[xi][xj], {xi, xj}});
                    }
                }else if(ma[xi][xj] >= '0' && ma[xi][xj] <= '9'){
                    if(dist[xi][xj] > dist[x][y] + ma[xi][xj] - '0'){
                        dist[xi][xj] = dist[x][y] + ma[xi][xj] - '0';
                        fila.push({-dist[xi][xj], {xi, xj}});
                    }
                }
            }
        }
    }
}

int main(){
    scanf("%d", &t);

    for(int k = 0; k < t; k++){
        scanf("%d%d", &n, &m);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf(" %c", &ma[i][j]);
                dist[i][j] = inf;
            }
        }

        dist[0][0] = 1;
        bfs(0, 0);

        if(dist[n-1][m-1] == inf) {
            printf("-1\n");
        } else {
            printf("%d\n",dist[n-1][m-1]);
        }

    }

    return 0;
}