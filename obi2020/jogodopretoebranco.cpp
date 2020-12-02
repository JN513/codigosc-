#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int l, c, m[8][8], r, p;

bool verifica(int x, int y){
    return m[x][y] != 2 and m[x-1][y] != 2 and m[x+1][y] != 2 and m[x][y-1] != 2 and m[x][y+1] != 2;
}

bool verifica_preta(int x, int y){
    return m[x][y] != 1 and (m[x-1][y] == 1 or m[x+1][y] == 1 or m[x][y-1] == 1 or m[x][y+1] == 1);
}

int main(void){
    cin >> l >> c >> p;

    for (int i = 0, a, b; i < p; i++){
        cin >> a >> b;
        m[a][b] = 1;
    }

    for (int i = 1; i <= l; i ++){
        for (int j = 1; j <= c; j++){
            if(verifica(i, j)){
                if(verifica_preta(i, j)){
                    r++;
                    m[i][j] = 2;
                }
            }
        }
    }
///*
    for (int i = 1; i <= l; i ++){
        for (int j = 1; j <= c; j++) cout << m[i][j] << " ";
        cout << nl;
    }
    //*/
    cout << r << nl;

    return 0;
}