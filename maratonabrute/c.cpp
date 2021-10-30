#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, l, r, q;

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> l >> r >> q;

        if(q > r or q < l){
            cout << "-1" << nl;
            continue;
        }

        int ans = 0;
        bool ok = false;
        int k = 0;

        for(int j = l; j <= r; j++){
            if(e_primo(j)){
                ans++;
            }

            if(ans == q){
                k = j;
                ok = true;
                break;
            }
        }

        if(ok) cout << k << nl;
        else cout << "-1" << nl;
    }

    return 0;
}