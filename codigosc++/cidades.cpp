#include <bits/stdc++.h>

using namespace std;

//------------------------
#define MAXN 5010

int n, m, temp;
int componente[MAXN];
vector<int> lista[MAXN];
//------------------------
void dfs(int x){
    // percorremos por todos os vizinhos
    for(int i = 0;i < (int)lista[x].size();i++){

        int v = lista[x][i];

        if(componente[v] == -1){ // checamos se V ainda não foi visitado
            componente[v] = componente[x];
            dfs(v);
        }
    }
}

int main(){

    cin>>n;

    for(int i = 0;i < n;i++) componente[i] = -1; // inicializamos as componentes
    for(int i = 0;i < m;i++){

        int a, b;
        cin>>a>>b;

        if(i == 0)
        {
            temp = a;
        }

        // adicionamos cada um a lista do outro
        lista[a].push_back(b);
        lista[b].push_back(a);
    }



    return 0;
}