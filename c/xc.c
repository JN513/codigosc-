//Cristiano, Mauro, Pablo//
#include <stdio.h>

int main(){
    int n, m, i , j;
    printf("-----Matriz Bidimensional-----\n");
    printf("Informe a dimensão da Matriz (nxm): \n");
    scanf("%d%d", &n, &m); // tirei o x pois buga no scanf, o %d e mais eficiente que o %i
    float matriz [n][m];
    int repete, k, l = -1;
    printf("---- Matriz ----\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        do
        {
            printf("Elemento (%d,%d): ", i+1, j+1);
            scanf("%f", &matriz [i][j]);
        }while(matriz[i][j]>m);
    
    for(i = 0; i < n; i++){
        repete = 1;
        for(j = 0; j < m; j++){     
            for(k = j + 1; k < m; k++) if (matriz[i][j] == matriz[i][k])
                repete = 0;
                break;
            }
            
            if(repete == 1){
                l = i;
                break;
            }
        if(l != -1)break;       
    }
    
    printf("Primeira linha sem número repetido: %d \n", l+1); // somo mais um a l, pois a matriz esta em uma escala de 0 a n && 0 a m
                                                              // então somo mais um para mudar para escala apartir de 1
    for(j = 0; j < m; j++) printf("%.2f ",matriz[l][j]);      // uso %f pois a matriz e ponto flutuande (float) e %d e para decimal
    printf("\n");
    
    return 0;           
}
/* O numero a  ser informado tem que ser menor ou igual ao número maximo de colunas*/
