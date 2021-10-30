#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    ll a, b;

    cin >> a >> b;

    double x = (double)b / a;

    ll v[3];

    v[0] = round(x);

    v[1] = (3*b)-(a+b);

    v[2] = (3*a)-(a+b);

    sort(v, v+3);

    cout << v[0] << nl;

    return 0;
}