#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int t;

    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        ll r = 0;

        cin >> n;

        for(int  j = 0; j < n; j++){
            int a;

            cin >> a;

            if(a%(n+1) == 0){
                r += a/(n+1);
            } else {
                r += a * (n+1);
            }
        }

        cout << r << nl;
    }


    return 0;
}