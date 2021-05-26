#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 10005

using namespace std;

int n, v[NMAX];
bool suc = true;
vector <int> grafo[NMAX];
vector <int> grafo2[NMAX];

void dfs(int x){
    v[x] = 1;
    if(grafo[x].size() > 1) suc = false;
    for(int i : grafo[x]){
        if(v[i] == 0){
            dfs(i);
        }
    }
}

void rdfs(int x){
    v[x] = 1;
    if(grafo2[x].size() > 1) suc = false;
    for(int i : grafo2[x]){
        if(v[i] == 0){
            dfs(i);
        }
    }
}

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        grafo[a].push_back(b);
        grafo2[b].push_back(a);
    }

    dfs(1);

    for(int i = 1; i <= n; i++){
        if(v[i] == 0) {
            suc = false;
            break;
        }
        v[i] = 0;
    }

    rdfs(1);

    for(int i = 1; i <= n; i++){
        if(v[i] == 0) {
            suc = false;
            break;
        }
    }

    if (not suc) cout << "S\n";
    else cout << "N\n";

    return 0;
}