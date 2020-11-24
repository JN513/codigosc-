#include <bits/stdc++.h>

#define NMAX 100002
#define inf 1000000000

using namespace std;

int n, r=inf;
vector <int> grafo[NMAX];

int dfs(int x, int y){
    int a = inf, b= inf;

    if(grafo[x].size() == 1) a = 0;

    for(int i = 0; i < grafo[x].size(); i++){
        if(grafo[x][i] == y) continue;

        b = min(b, dfs(grafo[x][i] ,x));
        if(b < a) swap(a, b); //troca os valores de a e b
    }

    r = min(r, a+b);
    return a+1;
}

int main(void){
    cin >> n;

    for(int i = 0, x, y; i < n-1; i++){
        cin >> x >> y;

        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }

    dfs(1, 1);

    cout << r << endl;

    return 0;
}