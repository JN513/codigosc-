#include <stdio.h>

int main()
{
    int n, m, i , j;
    printf("-----Matriz Bidimensional-----\n");
    printf("Informe a dimensão da Matriz (nxm): ");
    scanf("%ix%i", &n, &m);
    float matriz [n][m];
    printf("---- Matriz ----\n");
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            printf("Elemento (%i,%i): ", i+1, j+1);
            scanf("%f", &matriz [i][j]);
        }
    
    
}