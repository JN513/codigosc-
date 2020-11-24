#include <bits/stdc++.h>

using namespace std;

int t, l, o, d;

int v[1002];
vector<int> grafo[1002];

void bfs(int x){
    queue<int> fila;

    fila.push(x);

    v[x] = 0;

    while(!fila.empty()){
        int y = fila.front(); fila.pop();

        for(int i = 0; i < grafo[y].size(); i++){
            int u = grafo[y][i];

            if(v[u] == -1 ){
                v[u] = v[y]+1;
                fila.push(u);
            }
        }
    }
}

int main(void){
    cin >> t >> l >> o >> d;

    for (int i = 0; i < t+1+l; i++) v[i] = -1;

    for (int i = 0, k; i < l; i++){
        cin >>k;
        for(int j = 0, a; j < k; j++){
            cin >> a;
            grafo[a].push_back(t+i+1);
            grafo[t+i+1].push_back(a);
        }
    }

    bfs(o);

    cout << v[d]/2 << endl;

    return 0;
}