#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    ll n = 1000000;

    while(true){
        string x = to_string(n);

        ll w = 1;

        for(int i = 0; i < x.size(); i++){
            int a  = (int)x[i]-'0';

            w+= a;
        }

        if(w == 2021){
            cout << w << " " << n << endl;
            break;
        }

        n++;
    }

    return 0;
}