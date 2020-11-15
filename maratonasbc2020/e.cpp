#include <bits/stdc++.h>

using namespace std;

struct Empregado{
    int id, idade, chefe, festas = 0;
};

struct Festa{
    int anfitriao, idade_min, idade_max;
};

int n, m;

Empregado empregados[100002];
Festa festas[100002];

int main(void){
    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        cin >> empregados[i].idade >> empregados[i].chefe;
        empregados[i].id = i;
    }

    for (int i = 1; i <= m; i++){
        cin >> festas[i].anfitriao >> festas[i].idade_min >> festas[i].idade_max;
    }

    for (int i = 1; i <= m; i++) for (int j = 1; j <= n; j++) if(empregados[j].idade > festas[i].idade_min and empregados[j].idade < festas[i].idade_max) empregados[j].festas++;


    for (int i = 1; i <= n; i++) cout << empregados[i].festas<<" ";
    cout << endl;

    return 0;
}