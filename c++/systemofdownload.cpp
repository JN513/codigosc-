#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

string v[11];

int main(void){
    /* preencher a string
    0 - PROXYCITY
    1 - P.Y.N.G.
    2 - DNSUEY!
    3 - SERVERS
    4 - HOST!
    5 - CRIPTONIZE
    6 - OFFLINE DAY
    7 - SALT
    8 - ANSWER!
    9 - RAR?
    10 - WIFI ANTENNAS
    */

    v[0] = "PROXYCITY";
    v[1] = "P.Y.N.G.";
    v[2] = "DNSUEY!";
    v[3] = "SERVERS";
    v[4] = "HOST!";
    v[5] = "CRIPTONIZE";
    v[6] = "OFFLINE DAY";
    v[7] = "SALT";
    v[8] = "ANSWER!";
    v[9] = "RAR?";
    v[10] = "WIFI ANTENNAS";

    int n;

    cin >> n;

    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;

        cout << v[x+y] << nl;
    }

    return 0;
}