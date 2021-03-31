#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define MAXN 100010

using namespace std;

int n, k;

int pai[MAXN], peso[MAXN];

int find(int x){
    if(pai[x] == x) return x;

    return pai[x]=find(pai[x]);
}

void join(int x, int y){
    x=find(x);
    y=find(y);

    if(x == y) return;

    if(peso[x] < peso[y]){
        pai[x] = y;
    }else if(peso[y] < peso[x]){
        pai[y] = x;
    }else {
        pai[x] = y;
        peso[y]++;
    }
}

int main(void){
    cin >> n >> k;

    for(int i = 1; i <= n; i++) pai[i] = i;

    for(int i = 0; i < k; i++){
        char a;
        int x, y;

        cin >> a >> x >> y;

        if(a == 'C'){
            if(find(x) == find(y)) cout << "S\n";
            else cout << "N\n";
        }

        if(a == 'F'){
            join(x, y);
        }
    }

    for(int i = 1; i <= n; i++){
        cout << i << " " << pai[i] << " " << peso[i] << nl;
    }

    return 0;
}