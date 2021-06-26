#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = a + d;

    if(a % 2 == 0 and x % 2 == 0){
        cout << b << nl;
    }

    if(a % 2 == 1 and x % 2 == 1){
        cout << b << nl;
    }

    if(a % 2 == 0 and x % 2 == 1){
        cout << b-c << nl;
    }

    if(a % 2 == 1 and x % 2 == 0){
        cout << b+c << nl;
    }


    return 0;
}