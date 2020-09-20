#include <bits/stdc++.h>

using namespace std;

int n, r;
int m[100][100];
int visitado[100][100];
int distancia[100][100];

int dirx[4] = {0,0,1,-1}; //crio meus vetores de coordenadas
int diry[4]	= {1,-1,0,0};

bool ver(int x, int y){ //crio minha variavel para verificar os limites
	return x >= 0 && x < n && y >= 0 && y < n; // verifico os limites e retorno verdadeiro ou falso
}

void djaska(int x, int y){

}

int main(){
    cin >> n;

    for(int i = 0; i <= n; i++)
    for(int j = 0; j <= n; j++) cin >>m[i][j];

    djaska(0,0);

    cout << r;

    return 0;
}