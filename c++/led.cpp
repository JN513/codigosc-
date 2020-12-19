#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

map<char, int> M;
int n;
string s;

void criar_map(){
    M['1'] = 2;
    M['2'] = 5;
    M['3'] = 5;
    M['4'] = 4;
    M['5'] = 5;
    M['6'] = 6;
    M['7'] = 3;
    M['8'] = 7;
    M['9'] = 6;
    M['0'] = 6;
}

int main(void){
    criar_map();

    cin >> n;

    for(int i = 0, r = 0; i < n; i++){
        r = 0;
        cin >> s;

        for(int j =0; j < s.size(); j++) r+= M[s[j]];

        cout << r << " leds" << nl;
    }

    return 0;
}