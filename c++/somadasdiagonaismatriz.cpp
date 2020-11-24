#include <bits/stdc++.h>

using namespace std;

int main(void){
    int m[3][3];

    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) cin >> m[i][j];

    cout << "Diagonal principal: " <<m[0][0]+m[1][1]+m[2][2] <<endl;
    cout << "Diagonal secundaria: " <<m[2][0]+m[1][1]+m[0][2] <<endl;

    return 0;
}