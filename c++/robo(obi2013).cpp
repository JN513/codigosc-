#include <bits/stdc++.h>

using namespace std;

int l, c, a, b, m[1002][1002]; 

int dirx[4] = {0,0,1,-1}; //crio meus vetores de coordenadas
int diry[4]	= {1,-1,0,0};

bool ver(int x, int y){ //crio minha variavel para verificar os limites
	return x >= 1 && x <= l && y >= 1 && y <= c; // verifico os limites e retorno verdadeiro ou falso
}

void dfs(int x, int y){
    m[x][y] = 0;
    a = x; b = y;

    for (int k = 0; k < 4; k++){
        int xi = x+dirx[k];  // crio o xi para facilitar
		int xj = y+diry[k]; // crio o xj também para facilitar, pois não precisarei usar todo o conjunto toda vez atenas o xj, o mesmo vale pro xi

		if(!ver(xi, xj))continue; // verifico xi e xj usando minh função ver

        if(m[xi][xj] == 1) dfs(xi, xj);
    }
}

int main(void){
    cin >> l >> c >> a >> b;

    for (int i = 1; i <= l; i++)
    for (int j = 1; j <= c; j++) cin >> m[i][j];

    dfs(a, b);

    cout << a << " " << b << endl;

    return 0;
}