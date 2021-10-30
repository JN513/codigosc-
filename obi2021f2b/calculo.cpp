#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int s, a, b, r;

int main(void){
    cin >> s >> a >> b;

    for(int i = a; i <= b ; i++){
        string st = to_string(i);

        int temp = 0;

        for(char c : st){
            temp += (c - '0');
        }

        if(temp == s) r++;
    }

    cout << r << nl;

    return 0;
}