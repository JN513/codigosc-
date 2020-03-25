#include <bits/stdc++.h>

using namespace std;

//------------------------
#define MAXN 20105

int n, m, r;
int v[MAXN];
int v[MAXN];
vector<int> lista[MAXN];
//------------------------
void dfs(int x){

    v[x]=1;
    cout << v[x];
    // percorremos por todos os vizinhos
    for(int i = 0;i < (int)lista[x].size();i++){

        if(v[lista[x][i] ] == -1){ // checamos se V ainda não foi visitado

            if (d[v[lista[x][i]]] < 3){
               // cout << v[lista[x][i]];
                b++;
                dfs(lista[x][i]);
            }

        }
    }
}

int main(){

    cin>>n>>m >> r;

    for(int i = 1;i <= n;i++)v[i] = -1; // inicializamos as estaçoes
    for(int i = 1;i <= m;i++){

        int a, b;
        cin>>a>>b;

        if(b == 0)
        {
            r = a;
        }
        // adicionamos cada um a lista do outro
        lista[a].push_back(b);
        lista[b].push_back(a);
    }

    for(int i = 0; i < n; ++i)
    {
        d[i] = lista[i].size();
    }

    for (int i = 0; i < n; ++i)
    {
        if (v[i] == -1)
        {
            dfs(i);
            break;
        }

    }

    cout << n-b-1;

    return 0;
}
