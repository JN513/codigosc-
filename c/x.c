#include <stdio.h>

int main (){
    int num, i;
    int ContMenor = 0, ContMaior = 0;
    int me=0, ma=0 ;


    for (i = 0; i < 5; i++){
        printf ("\nDigite um numero Inteiro%d: " , i + 1);
        scanf ("%d", &num);

        if(num > ContMaior || i == 0){
            ContMaior = num;
            ma = 1;
        }else if(num == ContMaior) ma++;

        if(num < ContMenor || i == 0){
            ContMenor = num;
            me = 1;
        }else if(num == ContMenor) me++;

    }

    printf ("\nMaior Numero: %d quantas vezes apareceu:%d\n", ContMaior,ma);
    printf ("Menor Numero: %d quantas vezes apareceu:%d\n", ContMenor,me);
}