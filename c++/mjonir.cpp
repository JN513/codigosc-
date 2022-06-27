#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        string s;

        cin >> s >> x;

        if(s == "Thor") cout << "Y" << nl;
        else cout << "N" << nl;
    }

    return 0;
}