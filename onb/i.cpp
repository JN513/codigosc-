#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    double num, inter, decim;

    cin >> num;

    inter = (int)num;

    decim = (num - inter) * 100;

    if (decim/(num*num) <= 24.9 and decim/(num*num) >= 18.5)
        cout << "Sim" << nl;
    else cout << "Nao" << nl;

    return 0;
}