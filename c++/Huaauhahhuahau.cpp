#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, x = "", y = "";

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        int z =  s.size();
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') x += s[i];
        if(s[z-1-i] == 'a' || s[z-1-i] == 'e' || s[z-1-i] == 'i' || s[z-1-i] == 'o' || s[z-1-i] == 'u') y += s[z-1-i];
    }

    if(x == y) cout << "S\n";
    else cout << "N\n";

    return 0;
}
