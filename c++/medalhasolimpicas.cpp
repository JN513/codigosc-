#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    if(a > d){
        cout << "A" << nl;
    } else if(d > a){
        cout << "B" << nl;
    } else {
        if(b > e){
            cout << "A" << nl;
        } else if(e > b){
            cout << "B" << nl;
        } else {
            if(c > f){
                cout << "A" << nl;
            } else if(f > c){
                cout << "B" << nl;
            }
        }
    }


    return 0;
}