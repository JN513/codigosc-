#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int v[14] = {8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};

    int n, r = 0, i = 0;
    cin >> n;

    while(n > 0){
        if(n - v[i] >= 0) {
            r++;
            n-=v[i];
        }else i++;
    }

    cout << r << nl;

    return 0;
}