#include <bits/stdc++.h>

using namespace std;

int main(void){
    int v[4];

    for(int i = 0; i < 4; i++) cin >> v[i];

    sort(v,v+4);

    if(v[0]*v[3] == v[1] * v[2]) cout << "S\n";
    else cout << "N\n";

    return 0;
}