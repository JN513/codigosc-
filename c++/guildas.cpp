#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 100010

using namespace std;

int n, m, peso[NMAX], qtd[NMAX], pai[NMAX];

int find(int x){
    if(pai[x] == x) return x;

    return pai[x] = find(pai[x]);
}

void join(int x, int y){
    x=find(x);
    y=find(y);

    if(x == y) return;

    if(peso[x] < peso[y]){
        pai[x] = y;
        qtd[y] += qtd[x];
    }else if(peso[y] < peso[x]){
        pai[y] = x;
        qtd[x] += qtd[y];
    }else {
        pai[x] = y;
        peso[y]++;
        qtd[y] += qtd[x];
    }
}

int main(void){
    while(cin >> n >> m and (m+n)){   
        int r = 0;

        for(int i = 1; i <= n; i++){
            cin >> qtd[i];
            pai[i] = i;
            peso[i] = 0;
        }

        for(int i = 0; i < m; i++){
            int a, b, c;
            cin >> a >> b >> c;

            if(a == 1){
                join(b, c);
            }

            if(a == 2){
                int k = qtd[find(b)];
                int w = qtd[find(c)];
                
                if(k > w){
                    if(find(1) == find(b)) r++;
                }

                if(w > k){
                    if(find(1) == find(c)) r++;
                }
            }
        }

        cout << r << nl;
    }

    return 0;
}