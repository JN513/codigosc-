#include <bits/stdc++.h>

using namespace std;

int main(){
    int v[3];
    int b[2];

    for (int i = 0; i < 3; i++) cin >> v[i];
    for (int i = 0; i < 2; i++) cin >> b[i];

    sort(v, v+3);
    sort(b, b+2);

    if (v[0] <= b[0] && v[1] <= b[1]) cout <<"S\n";
    else cout <<"N\n";

    return 0;
}
