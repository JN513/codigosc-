#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

ll divi = 0, n;

bool e_primo(ll x){
    int div = 0;
    for(int i = 1; i <= x/2; i++) {
        if(div > 1) return false;
        if(x % i == 0) div++;
        divi++;
    }

    if(div == 1)return true;
    if(div > 1) return false;
}
int main(void){
    cin >> n;

    for (ll i = 1; i <= n; i++) if(e_primo(i)) cout << i << nl;      

    cout <<"Total de divisãoes: " << divi << nl;

    return 0;
}