#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int m[6][5];

int main(void){
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 5; j++){
            m[i][j] = (4*i)-(j*j);
        }
    }


    for(int i = 1; i < 7; i++){
        for(int j = 1; j < 5; j++){
            cout << m[i][j] << " ";
        }

        cout << nl;
    }


    return 0;
}