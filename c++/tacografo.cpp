#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, v, t, r=0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> t >> v;
        r+= t*v;
    }

    cout<<r<<endl;

    return 0;
}