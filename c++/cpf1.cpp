#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

bool valida_cpf(string x){
    int v[11];

    int cont = 0;
    for(int i = 0; i < x.size(); i++){
        if(x[i] != '.' and x[i] != '-'){
            v[cont] = x[i] - '0';
            cont++;
        }
    }

    int b1 = 0;
    for(int i = 0; i < 9; i++){
        b1 += v[i]*(i+1);
    }

    if(b1 % 11 == 10) b1 = 0;
    else b1 = b1 % 11;

    if(b1 != v[9]) return false;

    int b2 = 0;
    for(int i = 0; i < 9; i++){
        b2 += v[i]*(9-i);
    }

    if(b2 % 11 == 10) b2 = 0;
    else b2 = b2 % 11;

    if(b2 != v[10]) return false;

    return true;
}

int main(void){
    string line;

    while(getline(cin, line)){
        if (line == "") break;
        if (valida_cpf(line)) cout << "CPF valido\n";
        else cout << "CPF invalido\n";
    }

    return 0;
}