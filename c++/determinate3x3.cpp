#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int matriz[4][6];
int d;
int v[7];

int main(void){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 3; j < 5; j++){
            matriz[i][j] = matriz[i][j-3];
        }
    }

    for(int i = 0; i < 6; i++) v[i] = 1;

    for(int i = 0; i < 3; i++){
        v[0] = v[0] * matriz[i][i];
        v[1] = v[1] * matriz[i][i+1];
        v[2] = v[2] * matriz[i][i+2];
        v[3] = v[3] * matriz[i][2-i];
        v[4] = v[4] * matriz[i][3-i];
        v[5] = v[5] * matriz[i][4-i];
    }

    int a = 0, b = 0;

    for(int i = 0; i < 3; i++){
        a+= v[i];
        b+= v[5-i];
    }

    cout << "Determiante: "<<a-b<<nl;
    return 0;
}