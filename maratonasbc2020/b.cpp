#include <bits/stdc++.h>

using namespace std;

int n, m[11][11];

int localiza_navio(int d, int l, int r, int c){
    int temp = 0;
    if(d == 0){
        for(int i = 0; i < l; i++){
            if(c+i > 10 ) return 0;
            else{
                if(m[r][c+i] != -1) temp = 1;
                else m[r][c+i] = l;
            }
        }
    }
    if(d == 1){
        for(int i = 0; i < l; i++){
            if(r+i > 10 )return 0;
            else{
                if(m[r+i][c] != -1) temp = 1;
                else m[r+i][c] = l;
            }
        }
    }

    if(temp == 1) return 0;
    else return 1;
}

int main(void){
    for(int i = 1; i < 11; i++)
    for(int j = 1; j < 11; j++)m[i][j] = -1;

    int x;
    cin >> n;

    for(int i = 0; i < n; i++){
        int d, l, r, c;
        cin >> d >> l >> r >> c;

        if(localiza_navio(d,l,r,c) == 0) x = 1;
    }

    if(x == 1) cout << "N\n";
    else cout << "Y\n";

    return 0;
}