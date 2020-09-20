#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, v[101], r = 1;

    cin >> n;

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 1; i < n; i++) if(v[i] != v[i-1]) r++;

    cout << r << endl;

    return 0;
}