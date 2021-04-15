#include <bits/stdc++.h>

using namespace std;
#define oo 10000000

int n;
int m[101][101];
int visitado[101][101];
int distancia[101][101];

int dirx[4] = {0,0,1,-1}; //crio meus vetores de coordenadas
int diry[4]	= {1,-1,0,0};

bool ver(int x, int y){ //crio minha variavel para verificar os limites
	return x >= 0 && x < n && y >= 0 && y < n; // verifico os limites e retorno verdadeiro ou falso
}

void djaska(int x, int y){
    priority_queue <pair<pair<int,int>, int> vector <pair <pair<int,int>, int>> , greater<pair<pair<int,int>, int> >> fila;
    distancia[x][y] = 0;

    fila.push({{x,y}, distancia[x][y]});

    while(true){
        int i = -1;
        int j = -1;
        int menor = 0;

        while(!fila.empty()){
            int x = fila.top().first.first;
            int y = fila.top().first.second;
            fila.pop();

            if(!visitado[x][y]){
                int i = x;
                int j = y;
                break;
            }
        }

        if(i == -1 and j == -1) break;

        visitado[i][j] == true;

        for(int k = 0; k < 4; k++){
            
        }

    }
}

int main(){
    cin >> n;

    for(int i = 0; i <= n; i++)
    for(int j = 0; j <= n; j++) {
        cin >>m[i][j];
        distancia[i][j] = oo;
    }

    djaska(0,0);

    cout << distancia[n-1][n-1];

    return 0;
}