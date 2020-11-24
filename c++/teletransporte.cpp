#include <bits/stdc++.h>

#define NMAX 1000010

using namespace std;

int n, k, m, v[NMAX];

vector<int> grafo[NMAX];

void bfs(int x){
    queue<int> fila;

    fila.push(x);

    v[x] = 0;

    while(!fila.empty()){
        int f = fila.front();
        fila.pop();

        if(f == n) return;

        for(int i = 0; i < (int) grafo[f].size(); i++){
            int u = grafo[f][i];

            if(v[u] == -1){
                v[u] = v[f]+1;
                fila.push(u);
            }
        }
    }
}

int main(void){
    cin >> n >> k >> m;

    for (int i = 0; i < n+1+m; i++) v[i] = -1;

    for (int i = 1; i <= m; i++)
    for (int j = 0, x; j < k; j++){
        cin >> x;

        grafo[x].push_back(n + i);
        grafo[n+i].push_back(x);
    }

    bfs(1);

    if(v[n] != -1) cout << v[n]/2+1<<endl;
    else cout << v[n] << endl;

    return 0;
}