#include <iostream>

#include <stdio.h>

#include <conio.h>

#include <windows.h>

int main()

{

int freq[5], hertz[5], i, cont;

printf("Digite uma frequencia\nPor exemplo:\nFrequencia 1000\n\n");

printf("Digite um valor de Hertz\nPorexemplo:\nHertz 1500\n\n");

for(cont=0;cont<=5;cont++){

printf("Frequencia: ");

scanf("%d", &freq[cont]);

printf("Hertz: ");

scanf("%d", &hertz[cont]);}

/*Ate aqui esta perfeito,

agora preciso que ele reproduza os Valores inseridors em

forma de Frequencia e Hertz para aparecer os efeitos sonoros*/

for(i=0;i<=5;i++){

Beep(freq, hertz);}

printf("Seu som foi reproduzido\n");

system("pause");

}
