#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    string s, r;

    getline(cin, s);

    int p = 0;

    for(int i = 0; i < s.size(); i++){
        if(p == 0 and s[i] == 'p') {
            p = 1;
            continue;
        }
        if(p == 1 and s[i] != ' ') p = 0;

        r += s[i];
    }

    cout << r << nl;

    return 0;
}