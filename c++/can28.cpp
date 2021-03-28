#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n = 10000;

    int r = 0;

    for(int i = n; i < 100000; i++){
        string x = to_string(i);

        int w = 1;

        for(int i = 0; i < x.size(); i++){
            int a  = (int)x[i]-'0';

            w = w * a;
        }

        if(w == 1000){
            r++;
        }
    }

    cout << r << nl;


    return 0;
}