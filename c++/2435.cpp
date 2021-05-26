#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    double a, b, c;
    double d, e, f;

    cin >> a >> b >> c;
    cin >> d >> e >> f;

    if(b/c > e/f) cout << d << nl;
    else cout << a << nl;

    return 0;
}