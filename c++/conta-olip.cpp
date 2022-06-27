#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        cout << x%2 << nl;
    }

    return 0;
}