#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int v[3];

    for(int i = 0; i < 3; i++) cin >> v[i];

    sort(v, v+3);

    cout << v[1] << nl;

    return 0;
}