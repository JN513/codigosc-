#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m;
int saldo[1005];
bool gastou[1005], recebeu[1005];

int main(void){
    cin >> m >> n;

    for(int i = 0, x, v, y; i < m; i++){
        cin >> x >> v >> y;

        gastou[x] = true;
        saldo[x] -= v;

        recebeu[y] = true;
        saldo[y] += v;
    }

    bool ok = false;
    int r = 0;

    for(int i = 1; i <= n; i++){
        if(gastou[i] and recebeu[i]) ok = true;

        if(saldo[i] > 0)r += saldo[i];
    }

    if(ok) cout << "S\n" << r << nl;
    else cout << "N\n" << r << nl;

    return 0;
}