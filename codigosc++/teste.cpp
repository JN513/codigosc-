#include <bits/stdc++.h>

using namespace std;

//------------------------
#define MAXN 5010

int n, m;
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

    cin>>n>>m;

    for(int i = 1;i <= n;i++) componente[i] = -1; // inicializamos as componentes
    for(int i = 1;i <= m;i++){

        int a, b;
        cin>>a>>b;

        // adicionamos cada um a lista do outro
        lista[a].push_back(b);
        lista[b].push_back(a);
    }

    int numero_componentes = 0;

    for(int i = 1;i <= n;i++){

        if(componente[i] == -1){ // i ainda não tem componente

            // começaremos uma dfs a partir de i
            // assim, i será o começo de uma nova componente
            numero_componentes++;
            componente[i] = numero_componentes;
            dfs(i);
        }
    }

    cout<<numero_componentes<<"\n"; // por fim, imprimimos a resposta

    return 0;
}