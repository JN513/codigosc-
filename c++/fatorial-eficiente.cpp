#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

const int TAM = 20003;//maior numero calculavel com vetor de 20000 posições e 5983

void fatorial(int resp[], int tamanho, int numero){
    int transporte, aux;

    for(int i = 1; i <= numero; i++){
        transporte = 0;

        for(int j = 0; j < tamanho; j++){
            aux=i*resp[j]+transporte;
            resp[j]=aux%10;
            transporte = aux/10;
        }

        while(transporte){
            resp[tamanho] = transporte%10;
            transporte = transporte/10;
            tamanho++;
        }
    }

    printf("Quantidade de digitos: %d\n",tamanho);

    printf("Resultado: ");

    for(int i = tamanho-1; i >= 0; i--){
        printf("%d",resp[i]);
    }

    printf("\n");
}

int main(int argc, char *argv[]){
    int resp[TAM], tamanho=1, numero;

    if(argc > 1){
        numero = atoi(argv[1]);
    }else{
        scanf("%d",&numero);
    }

    resp[0]=1;

    fatorial(resp, tamanho, numero);

    return 0;
}
