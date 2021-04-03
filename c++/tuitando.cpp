#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    string line;

    getline(cin, line);

    if (line.size() <= 140) cout << "TWEET\n";
    else cout << "MUTE\n";

    return 0;
}