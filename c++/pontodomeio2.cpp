#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int lado = 2;
    int n, z=1;;
    cin >> n;

    while(n != -1){
        while (n-- >0) {
          lado += lado-1;
        }

        cout <<"Teste "<<z<<endl<< lado*lado<<endl;
        cin >> n;
        lado = 2;
        z++;
    }

    return 0;
}
