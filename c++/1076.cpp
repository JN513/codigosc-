#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int t, n;
vector <int> grafo[10005];
int nos[10005];

int bfs(int x){
    queue < pair<int,int> > fila;

    fila.push({x,0});

    int r = 0;

    while(!fila.empty()){

        x = fila.front().first;
        int y = fila.front().second;

        fila.pop();

        if((int)grafo[x].size() == 0){
            r += y*2;
        } else if((int)grafo[x].size() > 1){
            r += y*2;
            for (int k = 0; k < (int)grafo[x].size(); k++){
                if(!nos[grafo[x][k]]){
                    nos[grafo[x][k]] = 1;
                    fila.push({grafo[x][k], 1});
                }
            }
        } else {
            if(!grafo[x][0]){
                nos[grafo[x][0]] = 1;
                fila.push({grafo[x][0], y+1});
            }
        }
        
    }

    return r;
}


int main(void){
    cin >> t;

    for (int k = 0; k < t; k++){
        cin >> n;

        int v, a;

        cin >> v >> a;

        for(int i = 0; i < a; i++){
            int x, y;

            cin >> x >> y;

            grafo[x].push_back(y);
            grafo[y].push_back(x);
        }

        for(int i = 0; i <= v; i++){
            nos[i] = 0;
        }

        cout << "x\n";
        cout << bfs(n) << endl;
    }

    return 0;
}