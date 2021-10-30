#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 1e5 + 5
#define pii pair<int,int>
#define pb push_back
#define mp make_pair

using namespace std;

int n;
int rei = 1;

vector <int> grafo[NMAX];

int get_proximo_rei(int r){
    int f = NMAX;
    for(int i = 0; i < grafo[r].size(); i++){
        if(grafo[r][i] < f){
            f = grafo[r][i];
        }
    }

    return f;
}

int find_pai(int x){
    int visitado[n+1];

    for(int i = 0; i < n+1; i++){
        visitado[i] = 0;
    }
    
    queue <int> q;

    q.push(rei);
    visitado[rei] = 1;

    while(!q.empty()){
        int atual = q.front();
        q.pop();

        for(int i = 0; i < grafo[atual].size(); i++){
            if(visitado[grafo[atual][i]] == 0){
                if(grafo[atual][i] == x){
                    return atual;
                }
                visitado[grafo[atual][i]] = 1;
                q.push(grafo[atual][i]);
            }
        }
    }
}

int get_last_f(int x){
    int f = 0;

    if(grafo[x].size() == 0) return x;

    for(int i = 0; i < grafo[r].size(); i++){
        if(grafo[r][i] > f){
            f = grafo[r][i];
        }
    }

    return get_last_f(f);
}

int main(void){
    cin >> n;

    int id = 1;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        if(a == 1){
            id++;
            grafo[b].pb(id);
        }
        else{
            if(b == rei){
                int y = get_proximo_rei(rei);
                int x = get_last_f(y);
                for(int j = 0; j < grafo[rei].size(); j++){
                    if(grafo[rei][j] != y){
                        grafo[x].pb(grafo[rei][j]);
                    }
                }

                grafo[rei].erase();
                rei = y;
            } else {
                int y = find_pai(b);
                int z = NMAX;
                int ppp = 0;
                for(int j = 0; j < grafo[y].size(); j++){
                    if(grafo[y][j] == b) pos = j;
                    if(grafo[y][j] < z){
                        z = grafo[y][j];
                    }
                }

                if(z != b){
                    int ff = get_last_f(z);
                    for(int j = 0; j < grafo[b].size(); j++){
                        if(grafo[b][j]){
                            grafo[ff].pb(grafo[b][j]);
                        }
                    }

                    grafo[b].erase();
                    grafo[y].erase(grafo[y].begin()+ppp);
                } else {
                    int ff = get_last_f(b){
                        for(int j = 0; j < grafo[b].size(); j++){
                            if(grafo[b][j]){
                                grafo[ff].pb(grafo[b][j]);
                            }
                        }
                    }
                }
            }
            
        }
    }

    return 0;
}