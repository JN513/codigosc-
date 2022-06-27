#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    string s;

    cin >> s;

    if(s.size() >= 10){
        cout << "palavrao\n";
    } else {
        cout << "palavrinha\n";
    }

    return 0;
}