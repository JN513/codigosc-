#include <bits/stdc++.h>

using namespace std;

int n, r = 0;

int main(){
    cin >> n;

    while (n != 1){
        r++;
        if(n%2!=0) n = 3*n+1;
        else n = n/2;
    }

    cout << r << endl;

    return 0;
}