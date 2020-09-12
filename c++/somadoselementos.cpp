#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, r= 0, a;
    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> a;
        r += a;
    }

    cout << r << endl;

    return 0;
}