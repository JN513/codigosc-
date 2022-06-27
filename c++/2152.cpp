#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b, c;

        cin >> a >> b >> c;

        string r;

        if(a < 10) {
            r += "0";
            r += to_string(a);
        } else {
            r += to_string(a);
        }

        r += ":";

        if(b < 10) {
            r += "0";
            r += to_string(b);
        } else {
            r += to_string(b);
        }

        r += " - ";

        if(c == 1){
            r += "A porta abriu!";
        } else {
            r += "A porta fechou!";
        }

        cout << r << endl;
    }

    return 0;
}