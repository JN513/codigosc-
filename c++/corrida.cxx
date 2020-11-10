#include <bits/stdc++.h>

using namespace std;

struct Carro{
    int id, m=0;
};


int n, m;

bool compara(Carro x, Carro y){
    return x.m < y.m;
}

int main(){
    Carro carros[101];

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        carros[i].id = i+1;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            carros[i].m+=x;
        }
    }

    sort(carros, carros+n, compara);

    cout << carros[0].id << endl << carros[1].id << endl << carros[2].id << endl;

    return 0;
}