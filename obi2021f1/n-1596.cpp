#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int v[3];

    cin >> v[0] >> v[1] >> v[2];

    sort(v, v+3);

    cout << v[1] << nl;

    return 0;
}