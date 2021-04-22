#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m;

struct Piloto{
    int id, pontos, posicao[105];
};

int main(void){
    while(cin >> n >> m && (n+m)){
        Piloto v[m+1];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> v[j].posicao[i];
                v[j].id = j+1;
                v[j].pontos = 0;
            }
        }

        int k;
        cin >> k;
        for(int i = 0, a; i < k; i++){
            cin >> a;
            for(int j = 0, y; j < a; j++){
                cin >> y;
                for(int z = 0; z < n; z++){                    
                    for(int w = 0; w < m; w++){
                        if(v[w].posicao[z] == j+1){
                            v[w].pontos += y;
                        }
                    }
                }
            }

            sort(v, v+m, [](Piloto a, Piloto b){
                if(a.pontos != b.pontos) return a.pontos > b.pontos;
                else return a.id < b.id;
            });

            cout << v[0].id << " ";

            for(int i = 1; i < m; i++){
                if(v[i].pontos == v[i-1].pontos) cout << v[i].id << " ";
                else break;
            }

            cout << nl;

            for(int i = 0; i < m; i++) v[i].pontos = 0;
        }
    }

    return 0;
}