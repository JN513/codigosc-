#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, e = 0;
    char s = 'N';
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        e -= a;
        e += b;

        if(e > m) s = 'S';
    }

    cout << s << endl;

    return 0;
}