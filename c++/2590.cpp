#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        unsigned long long int in;

        cin >> in;

        unsigned long long int r = pow(7, in);

        string s = to_string(r);

        cout << s[s.size()-1] << endl;
    }

    return 0;
}