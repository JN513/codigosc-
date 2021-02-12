#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int mdc(int x, int y){
    if(y == 0) return x;
    else return mdc(y, x%y);
}

int main(void){
    int a, b, c;

    cin >> a >> b >> c;

    cout << mdc(mdc(a, b), c) << nl;

    return 0;
}