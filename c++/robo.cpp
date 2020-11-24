#include <bits/stdc++.h>

using namespace std;

int n,m,x,y,k,l, ma[100002][100002];

void anda(int i, int j){
    int t = 0, z = 1;
    for (int ki = 0; ki < l; ki++){
        while(ma[i+t][j+z] != 2){
            i+=t; j += z;
        }
    }
}

int main(void){
    cin >> n >> m >> x >> y >> k >> l;

    for (int i = 0, a, b; i < k; i++){
        cin >> a >> b;

        ma[a][b] = 2;
    }

    anda(x,y);

    cout << x << " " << y << endl;

    return 0;
}