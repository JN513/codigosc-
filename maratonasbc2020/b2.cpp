#include <bits/stdc++.h>

using namespace std;

int n, m[11][11];

int localiza_navio(int d, int l, int r, int c){
    if(d == 0){
        for(int i = 0; i < l; i++){
            if(c+i > 10 ) return 0;
            else{
                if(m[r][c+i] != 0) return 0;
                else m[r][c+i] = l;
            }
        }
    }
    if(d == 1){
        for(int i = 0; i < l; i++){
            if(r+i > 10 )return 0;
            else{
                if(m[r+i][c] != 0) return 0;
                else m[r+i][c] = l;
            }
        }
    }
}

int main(void){
    int x;
    cin >> n;

    for(int i = 0; i < n; i++){
        int d, l, r, c;
        cin >> d >> l >> r >> c;

        if(localiza_navio(d,l,r,c) == 0) x = 1;
    }

    if(x == 1) cout << "N";
    else cout << "Y";
    return 0;
}