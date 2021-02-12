#include <stdio.h>
#include <string.h>

int qtd_espacos(char *str){
    int espacos = 0;
    while(*str){
        if (*str == ' '){
           espacos++;
        }
        str++;
    }
    return espacos;
}

int main () {
    char str[] = "Bom dia pessoal";

    //quebrar - split da string
    int qtd_strings = qtd_espacos(str) + 1, i = 0;
    char strings[qtd_strings][strlen(str)];
    char *pch = strtok (str," ");
    while (pch != NULL){
        strcpy(strings[i++], pch); //copiar cada string para a posição correta
        pch = strtok (NULL, " ");
    }

    //mostrar cada uma
    for (i = 0;i < qtd_strings;++i){
        printf("%s\n", strings[i]);
    } 

    //ou seguindo o seu exemplo
    printf("%s\n%s\n%s\n", strings[0], strings[1], strings[2]);
    return 0;
}