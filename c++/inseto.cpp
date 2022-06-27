#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x > 8000){
            cout << "Mais de 8000!\n";
        } else{
            cout << "Inseto!\n";
        }
    }

    return 0;
}