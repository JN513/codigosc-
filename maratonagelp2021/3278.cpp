#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int qtd;
int c, n;

int main(void){
    cin >> c >> n;

    bool ok = true;

    for(int i = 0; i < n; i++){
        int a, b, d;

        cin >> a >> b >> d;

        if(ok == false) continue;

        if(i == n-1 and d > 0) {
            ok = false;
        }

        qtd -= a;

        if(qtd < 0) {
            ok = false;
        }

        qtd += b;

        if(qtd > c) {
            ok = false;
        }

        if(qtd < c and d > 0) {
            ok = false;
        }
    }

    if(qtd > 0) ok = false;

    if(ok) {
        cout << "possible\n";
    } else {
        cout << "impossible\n";
    }

    return 0;
}