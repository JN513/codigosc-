#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int dirx[4] = {0,0,1,-1};
int diry[4] = {1,-1,0,0};

int n, m, r;
char matriz[1030][1030];

bool verifica(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}

void bfs(int x, int y){
    queue < pair<int,int> > fila;

    fila.push({x,y});

    matriz[x][y] = 'o';

    while(!fila.empty()){

        x = fila.front().first;
        y = fila.front().second;

        fila.pop();

        for (int k = 0; k < 4; k++){
            int xi = x+dirx[k];
            int xj = y+diry[k];
            if (!verifica(xi,xj) or matriz[xi][xj] == 'o') continue;
            matriz[xi][xj] = 'o';
            fila.push({xi, xj});
        }
    }
}

int main(void){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> matriz[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matriz[i][j] == '.'){
                r++;
                bfs(i, j);
            }
        }
    }

    cout << r << nl;

    return 0;
}                                                           