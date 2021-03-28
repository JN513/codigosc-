#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

bool e_primo(int x){
    if(x < 2) return false;
    if(x == 2) return true;
    if(x % 2 == 0) return false;

    for(int i = 3; i <= pow(x, 0.5); i+=2)
        if(x % i == 0)
        return false;

    return true;
}

int main(void){
    int n = 101;

    while(true){
        ll x = pow(n, 2);

        if(e_primo(x-10000)) {
            cout << x << " " << n << nl;
            break;
        }
        n++;
    }

    return 0;
}