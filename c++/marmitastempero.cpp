#include <bits/stdc++.h>

using namespace std;

int main(void){
    int a, b, c, r = 0;

    cin >> a >> b >> c;

    if(b < a) r += a-b;
    if(c < a) r += a-c;

    if(r == 0) cout <<"Bora rangar\n";
    else cout << r << endl;

    return 0;
}