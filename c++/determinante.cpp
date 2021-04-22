#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int** matrizAlloc(int n){
    int **m = (int**)malloc((n+1) * sizeof(int*));

    for(int i = 0; i < n; i++){
        m[i] = (int*)malloc((n+1) * sizeof(int));
    }
    return m;
}

int Laplace(int n, int **matriz){
    if( n == 1) return matriz[0][0];

    int det = 0;

    for(int i = 0; i < n; i++){
        if(matriz[0][i] == 0) continue;

        int x = 0, y = 0;
        int **aux = matrizAlloc(n-1);

        for(int j = 1; j < n; j++){
            for(int k = 0; k < n; k++){
                if(k != i){
                    aux[x][y] = matriz[j][k];
                    y++;
                }
            }
            x++;
            y = 0;
        }

        int factor = (i%2 == 0) ? matriz[0][i] : -matriz[0][i];
        det = det + factor * Laplace(n-1, aux);
    }

    return det;
}

int main(void){
    int n;
    cout << "Insira a ordem da matriz: ";
    cin >> n;

    int **matriz = matrizAlloc(n);

    cout << "Insira a matriz:\n";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    cout << Laplace(n, matriz) << endl;

    return 0;
}