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

void dfs(int i, int j){
    matriz[i][j] = 'o';
    for(int k = 0; k < 4; k++){
        if(verifica(i + dirx[k], j + diry[k])){
            if(matriz[i + dirx[k]][j + diry[k]] == '.') dfs(i + dirx[k], j + diry[k]);
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
                dfs(i, j);
            }
        }
    }

    cout << r << nl;

    return 0;
}