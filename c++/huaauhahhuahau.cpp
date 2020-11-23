#include <bits/stdc++.h>

using namespace std;

int main(void){
    string s, x, y;
    cin >> s;

    for(int i = 0; i < s.size(); i++) if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') x+= s[i];
    for(int i = s.size()-1; i >= 0; i--) if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') y+= s[i];

    if(y == x) cout << "S\n";
    else cout << "N\n";

    return 0;
}