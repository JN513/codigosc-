#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;
int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >>dy >> rx >> ry;

        if( (rx >= bx or rx >= cx) or (rx <= ax or rx <= dx) or (ry >= dy or ry >= cy ) or (ry <= ay or ry <= by) ) cout << 0 << nl;
        else cout << 1 << nl;
    }

    return 0;
}