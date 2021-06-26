#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

bool e_vogal(char a){
    return a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u';
}

char vogal_mp(char c){
    string al = "abcdefghijklmnopqrstuvwxyz";

    int p = 0;

    for(int i = 0; i < al.size(); i++){
        if(al[i] == c){
            p = i;
            break;
        }
    }

    int a = 0, e = 4,i = 8,o = 14,u = 20;

    if(abs(p-a) < abs(p-e) and abs(p-a) < abs(p-i) and abs(p-a) < abs(p-o) and abs(p-a) < abs(p-u)) return 'a';
    else if(abs(p-e) < abs(p-a) and abs(p-e) < abs(p-i) and abs(p-e) < abs(p-o) and abs(p-e) < abs(p-u)) return 'e';
    else if(abs(p-i) < abs(p-a) and abs(p-i) < abs(p-e) and abs(p-i) < abs(p-o) and abs(p-i) < abs(p-u)) return 'i';
    else if(abs(p-o) < abs(p-a) and abs(p-o) < abs(p-e) and abs(p-o) < abs(p-i) and abs(p-o) < abs(p-u)) return 'o';
    else if(abs(p-u) < abs(p-a) and abs(p-u) < abs(p-e) and abs(p-u) < abs(p-i) and abs(p-u) < abs(p-o)) return 'u';
}

int main(void){
    string s, r;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'z' or e_vogal(s[i])) s += s[i];
        else{
            r += s[i];
            r += vogal_mp(s[i]);
            r += s[i+1];
            i++;
        }
    }

    cout << r << nl;

    return 0;
} 