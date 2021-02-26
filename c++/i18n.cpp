#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    string s;

    string r;

    cin >> s;

    r += s[0];
    r += to_string(((int)s.size()-2));
    r += s[s.size()-1];

    cout << r << nl;

    return 0;
}