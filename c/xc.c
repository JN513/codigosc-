/**************************

***************************/
#include <stdio.h>
#define QUANT 3
#define PORCENT 100
#define TAM_NOME

struct material{
    char nome[40];
    float quantidade;
    float valorUn, total;
};

int main(void){
    struct material materiais[QUANT];
    float valTotCada = 0, valTotal = 0, calcPercent = 0, totGasto = 0;


    printf("\n--------Entrada de Materiais--------\n");

    for (int i = 0; i < QUANT; i++){
        printf("Digite o nome do material(%i): ", i+1);
        scanf("%s", materiais[i].nome);//[^\n]
        printf("Digite a quantidade do material: ");
        scanf("%f", &materiais[i].quantidade);
        printf("Digite o valor do material(R$): ");
        scanf("%f", &materiais[i].valorUn);
        fflush(stdin);
        materiais[i].total = materiais[i].quantidade * materiais[i].valorUn; 
        valTotal +=  materiais[i].total;     
    }

    for(int i = 0; i < QUANT; i++){
        calcPercent = materiais[i].total/valTotal * PORCENT;
        printf("Material: %s\nValor unitario: %.2f\nValor total: %.2f\nPercentual: %.2f.\n", materiais[i].nome, materiais[i].valorUn, materiais[i].total, calcPercent);
    }

        
    printf("O valor total gasto é: %.2f.\n", valTotal);  
        
    return 0;
}