#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;

int main(void){
    while(cin >> n and n){
        char ma[n+1][n+1];

        int meio = n/2;

        if(meio * 2 < n){
            meio ++;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ma[i][j] = 'O';

                if(i == meio-1 and j == meio-1){
                    ma[i][j] = 'X';
                }
            }
        }

        bool end = true;

        while(end){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cout << ma[i][j] << " ";
                }

                cout << endl;
            }
            cout << "@\n";
        
            

            end = false;
        }
    }

    return 0;
}