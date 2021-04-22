#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, g = 0, a = 0, d = 0;
    cin >> n;

    while(n!= 4){
        if (n == 1) a++;
        if(n == 2) g++;
        if(n == 3) d++;

        cin >> n;
    }

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: "<<a << nl;
    cout << "Gasolina: "<<g << nl;
    cout << "Diesel: "<<d<<nl;


    return 0;
}