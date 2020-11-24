#include <bits/stdc++.h>

using namespace std;

int n,m,x,y,k,l, ma[100002][100002];

int main(void){
    cin >> n >> m >> x >> y >> k >> l;

    for (int i = 0, a, b; i < k; i++){
        cin >> a >> b;

        ma[a][b] = 2;
    }

    return 0;
}