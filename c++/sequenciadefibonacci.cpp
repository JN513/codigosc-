#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, v[20];

    v[0] = 0;
    v[1] = 1;

    cin >> n;

    cout << v[0] << " "<< v[1]<<" ";

    for(int i = 2; i < n; i++){
        v[i] = v[i-1]+v[i-2];
        cout << v[i] << " "; 
    }
    cout << endl;
}