#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int v[5];
    bool suc = true;

    for(int i = 0; i < 5; i++)cin >> v[i];

    for(int i = 1; i < 5; i++){
        if(v[i] < v[i-1]){
            suc = false;
            break;
        }
    }

    if(suc) cout << "SIM\n";
    else cout << "NAO\n";

    return 0;
}