#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, m;

    cin >> n >> m;

    int zero_up_to;

    bool ok = true;
    for(int i = 0; i < n; i++){
        int primeironao0 = m;

        for(int j = 0; j < m; j++){
            int x;
            cin >> x;

            if(x != 0){
                if(j <= zero_up_to) ok = false;
                if (primeironao0 == m) primeironao0 = j;
            }
        }
        zero_up_to = primeironao0;
    }

    if(ok) cout << "S\n";
    else cout << "N\n";

    return 0;
}