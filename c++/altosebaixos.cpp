#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, r = 0;
    string  c;

    cin>> n>>c;

    for(int i = 0; i < n; i++){
        if(c[i-1] == 'A') r++;
        else if(c[i-1] == 'B') r--;
        cout << r<< " ";
    }

    return 0;
}