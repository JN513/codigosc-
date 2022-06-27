#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int d, i, x, f;

int main(void){
    cin >> d >> i >> x >> f;

    if(f % 2 != 0){
        if(d % 2 == 0 ){
            i -= x;
        } else {
            i += x;
        }
    }

    cout << i << endl;

    return 0;
}