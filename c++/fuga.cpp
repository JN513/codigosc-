#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, p, f, d;

    cin >> h >> p >> f >> d;

    if(d == -1 && f < p && h < f) cout <<"S\n";
    if(d == -1 && ) cout <<"N\n";
    if(d == 1 && h < p) cout <<"S\n";
    if(d == 1 && h > p) cout <<"N\n";

    return 0;
}
