#include <bits/stdc++.h>

using namespace std;

int n, m, a,b, v[101];

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> a >> b;
        v[a-1] = 1;
        for(int j = a-1; j < n; j+=b) v[j] = 1;
        for(int j = a-1; j >= 0; j-=b) v[j] = 1;
    }

    for(int i = 0; i < n; i++) cout <<v[i]<<endl;

    return 0;
}