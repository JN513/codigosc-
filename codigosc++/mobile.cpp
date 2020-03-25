#include <bits/stdc++.h>

using namespace std;

//------------------------
#define MAXN 10105

int r,q,temp,w = 1,y;

int n, m;
int v[MAXN];
int d[MAXN];
int nd[MAXN];
vector<int> lista[MAXN];
vector<int> k;
//------------------------
void dfs(int x){

    v[x] = 1;

    y = k.size() - 1;

    if(k[y] != temp)
    {
        m = false;
        return;
    }
    else
    {
        temp = k[0];
        k.clear();
        nd[x] = w+(2*temp);
        w = 0;
    }

    // percorremos por todos os vizinhos
    for(int i = 0;i < (int)lista[x].size();i++){

        if(v[lista[x][i] ] == -1){ // checamos se V ainda não foi visitado

            if (d[v[lista[x][i]]] == 0){

                k.push_back(0);
                dfs(lista[x][i]);
            }
        }
    }
    m = true;
}
int main(){

    cin>>n;

    for(int i = 0;i < n;i++)v[i] = -1; // inicializamos as estaçoes
    for(int i = 0;i < n;i++)nd[i] = 0;
    for(int i = 0;i < n;i++){

        int a, b;
        cin>>a>>b;

        if(b == 0){
            r = a;
        }
        // adicionamos cada um a lista do outro
        lista[a].push_back(b);
        lista[b].push_back(a);
    }

    for(int i = 0; i < n; ++i){
        d[i] = lista[i].size();
    }

    dfs(r);

    if(m == true){
        cout<<"bem";
    }
    else{
        cout<<"mal";
    }

    return 0;
}
