#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;

    cin >> a >> b;

    int med = ((a*2)+(b*3))/5;

    if(med < 3) cout<<"Reprovado\n";
    else if(med >= 7) cout<<"Aprovado\n";
    else cout <<"Final\n";

    return 0;
}