#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, q, v[100005];

int mdc(int a, int b){        
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void){
    cin >> n >> q;

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < q; i++){
        int t, a, b, c;
        cin >> t >> a >> b;

        if(t == 1){
            cin >> c;

            for(int j = a-1; j < b; j++) v[j] += c;
        } else {

            int result = v[a-1];

            for(int j = a; j < b; j++){
                result = mdc(result, v[j]);
            }

            cout << result << nl;
        }
    }

    return 0;
}