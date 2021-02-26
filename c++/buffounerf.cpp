#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, d, m, p;

    cin >> n >> d >> m >> p;

    if(n*d > m*p) cout << "NERF" << nl;
    else cout << "BUFF" << nl;

    return 0;
}