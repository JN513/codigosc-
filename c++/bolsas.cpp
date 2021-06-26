#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

struct Bolsa{
    int d, t;
};

int main(void){
    int n, temp = 0, maior = 0;

    cin >> n;

    Bolsa bolsas[n];

    for(int i = 0; i < n; i++) cin >> bolsas[i].t >> bolsas[i].d;

    sort(bolsas, bolsas+n, [](Bolsa a, Bolsa b){
        return a.d < b.d;
    });

    for(int i = 0; i < n; i++){
        maior = max(maior, max(0, temp+bolsas[i].t-bolsas[i].d));
        temp += bolsas[i].t;
    }

    cout << maior << nl;

    return 0;
}