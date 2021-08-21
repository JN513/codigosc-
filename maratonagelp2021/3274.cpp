#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define MAXN 1003

using namespace std;

int n, k, prod;
 
int pai[MAXN], dep[MAXN];
vector <int> b;

int find(int x){
    
    if(pai[x]==x) return x;
    return find(pai[x]);
}

int find_prod(int x){
    if(pai[x]==x) return x;
    prod++;
    return find_prod(pai[x]);
}
 
void join(int x, int y){
    pai[find(x)]=find(y);
}
 

int main(void){
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        pai[i] = i;
        dep[i] = i;
    }

    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;

        join(i, a);
        dep[i] = a;
    }

    //for(int i = 1; i <= n; i++) cout << peso[i] << nl;

    for(int i = 1; i <= n; i++) {
        prod = 1;
        find_prod(i);
        if(prod == 1 and dep[i] != i){
            find_prod(dep[i]);
            prod ++;
        }

        b.push_back(prod);
        cout << prod << nl;
    }

    sort(b.begin(), b.end());

    int qtd = 0;
    int qtd2 = 0;

    for(int i = 0; i < b.size(); i++){
        if(qtd + b[i]<= k){
            qtd += b[i];
        } else {
            break;
        }
    }

    for(int i = b.size()-1; i >= 0; i--){
        if(qtd2 + b[i] <= k){
            qtd2 += b[i];
        } else {
            break;
        }
    }

    if(qtd > qtd2){
        cout << qtd << nl;
    } else {
        cout << qtd2 << nl;
    }

    return 0;
}