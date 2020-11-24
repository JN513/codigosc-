#include <bits/stdc++.h>

#define NMAX 10002

using namespace std;

int n, a, b, v[NMAX];
vector <int> linhas[NMAX];

void bfs(int x){
    queue<int> fila;
    fila.push(x);

    v[x] = 0;

    while (!fila.empty()){
        int y = fila.front();
        fila.pop();

        for (int i = 0; i < (int)linhas[y].size(); i++){
            int u = linhas[y][i];
            if(v[u] == -1){
                v[u] = v[y]+1;
                fila.push(u);
            }
        }
    }
}

int main(void){
    cin >> n >> a >> b;

    for(int i = 0; i < n+2; i++) v[i] = -1;

    for(int i = 0, x, y; i < n-1; i++){
        cin >> x >> y;

        linhas[x].push_back(y);
        linhas[y].push_back(x);
    }

    bfs(a);

    cout << v[b] << endl;

    return 0;
}