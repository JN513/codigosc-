#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, r = 0, c = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >>a;
        if (c < 1000000) {
            c += a;
            r++;
        }
    }

    cout << r;

    return 0;
}
