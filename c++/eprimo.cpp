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
    int n;

    cin >> n;

    cout << e_primo(n) << nl;

    return 0;
}