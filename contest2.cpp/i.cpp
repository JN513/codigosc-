#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, a, r=0, temp=0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if((a == 1 or a == 2) and a != temp){
            temp = a;
            r++;
        }
    }

    cout << r << nl;

    return 0;
}