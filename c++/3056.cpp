#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    ll n, lado=2;

    cin >> n;

    while(n-- > 0){
        lado += lado-1;
    }

    cout << lado*lado << nl;

    return 0;
}