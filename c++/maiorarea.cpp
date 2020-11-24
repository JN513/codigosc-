#include <bits/stdc++.h>

using namespace std;

int main(void){
    int a,b,c,d;

    cin >> a >>  b >> c >> d;

    if(a*b > c*d) cout <<"Primeiro\n";
    else if(c*d > a*b) cout <<"Segundo\n";
    else cout <<"Empate\n";

    return 0;
}