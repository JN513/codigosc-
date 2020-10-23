#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> a;
        n += a;
        if(n < 0) n = 0;
        if(n > 100) n = 100;
    }

    cout << n << endl;

    return 0;
}