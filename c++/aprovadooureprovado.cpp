#include <bits/stdc++.h>

using namespace std;

int main(){
    float a, b;

    cin >> a >> b;

    float c = (a+b)/2;

    if (c < 4) cout <<"Reprovado";
    if (c < 7 && c >= 4)cout <<"Recuperacao";
    if (c >= 7) cout <<"Aprovado";

    return 0;
}
