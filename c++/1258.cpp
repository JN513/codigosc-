#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

typedef struct Camisa{
    string nome;
    string cor;
    char tamanho;
} Camisa;



int main(void){

    int n;

    cin >> n;

    while (n != 0)
    {
        Camisa turma[n+1];

        for(int i = 0; i < n; i++){
            cin.ignore();
            getline(cin, turma[i].nome);
            //cout << turma[i].nome << endl;
            cin >> turma[i].cor >> turma[i].tamanho;
        }

        sort(turma, turma+n, [](Camisa a, Camisa b){
            if(a.cor != b.cor) {
                return a.cor < b.cor;
            }

            if(a.tamanho != b.tamanho) {
                return a.tamanho > b.tamanho;
            }

            return a.nome < b.nome;
        });

        for(int i = 0; i < n; i++){
            cout << turma[i].cor << " " << turma[i].tamanho << " " << turma[i].nome << endl;
        }

        cin >> n;

        if(n != 0)
            cout << endl;
    }
    

    return 0;
}