#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

bool verifica_senha(string x){
    int Ma = 0, Mi = 0, Nu = 0; 

    if(x.size() < 6 or x.size() > 32) return false;

    for(int i = 0; i < x.size(); i++){
        if(x[i] >= 'a' and x[i] <= 'z') Mi++;
        else if(x[i] >= 'A' and x[i] <= 'Z') Ma++;
        else if(x[i] >= '0' and x[i] <= '9') Nu++;
        else return false;
    }

    if(Nu == 0 or Mi == 0 or Ma == 0) return false;

    return true;
}

int main(void){
    string line;

    while(getline(cin, line)){
        if(line == "") break;

        if(verifica_senha(line)) cout << "Senha valida.\n";
        else cout << "Senha invalida.\n";
    }

    return 0;
}