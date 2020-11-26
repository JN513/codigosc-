#include <stdio.h>

int main(){
    int n, m, ma[100][100], l=-1;

    scanf("%d%d",&n,&m);

    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) scanf("%d",&ma[i][j]);

    for(int i = 0; i < n; i++){
        int r = 1;
        for(int j = 0; j < m; j++){
            
            for(int k = j+1; k < m; k++) if(ma[i][j] == ma[i][k]) {
                r = 0;
                break;
            }

            if(r == 1){
                l = i;
                break;
            }
        }
        if(l != -1) break;
    }
    
    printf("Primeira linha sem numero repetido: %d \n", l);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) printf("%d ",ma[i][j]);
        printf("\n");
    }

    return 0;
}