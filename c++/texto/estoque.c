#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define typeof(var) _Generic( (var),\
char: "Char",\
int: "Integer",\
float: "Float",\
char *: "String",\
void *: "Pointer",\
default: "Undefined")

FILE * arq;

int i,vf,tot,aux=0;

int qtd_ponstosevirgulas(char *str){
    int ponstosevirgulas = 0;
    while(*str){
        if (*str == ';'){
           ponstosevirgulas++;
        }
        str++;
    }
    return ponstosevirgulas;
}

int search_code(int code){
    while(feof(arq) == 0){
        char *line;
        fgets(line, 10000, arq);

        printf("%s\n",line);

        int qtd_strings = qtd_ponstosevirgulas(line) + 1, i = 0;

        printf("qtd: %d\n", qtd_strings);
        char strings[qtd_strings][strlen(line)];
        char *pch = strtok (line,";");
        while (pch != NULL){
            printf("%s\n", typeof(pch));
            strcpy(strings[i++], pch); //copiar cada string para a posição correta
            printf("ola\n");
            pch = strtok (NULL, ";");
        }

        //mostrar cada uma
        for (i = 0;i < qtd_strings;++i){
            printf("%s\n", strings[i]);
        } 
    }

    return 0;
}

int main(int argc, char *argv[]) {      
        
    while(vf != 3){
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\tControle de estoque \n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\tDigite 1 para buscar um produto \n");
        printf("\tDigite 2 para inserir um produto \n");
        printf("\tDigite 3 para sair \n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        scanf("%d",&vf);

        if(vf==3){
           return(0);
        }
/*
        if(vf==1){            
            
            arq = fopen("teste.txt","r");
            
            if(arq == NULL){
                printf("Erro ao abrir o arquivo.\n");
                exit(0);
            }
            
            //for(i=0;i<10;i++){
            fgets(cad_prod[10].name, 10000, arq);
            printf("%s\n",cad_prod[10].name);
           // }
            
            
            fclose(arq);

        }
*/
        if(vf==2){
            printf("---------------------------------------------\n");
            arq = fopen("teste.txt", "a+r");
    
            if (arq == NULL){
                printf("Erro ao abrir o arquivo\n");
                exit(0);                
            }else
                printf("Informe a quantidade de produtos que deseja inserir: ");
                scanf("%i",&tot);
                printf("Inserindo produtos...\n\n");

                for(i=0;i<tot;i++){
                    char name[20], valor[10];
                    int cod, qtd;

                    printf("Informe o Nome do produto: ");
                    scanf(" %[^\n]s",name);
                
                    printf("Informe o Código do produto: ");
                    scanf("%i",&cod);
                                        
                    printf("Informe a Quantidade do produto: ");
                    scanf("%i",&qtd);
                
                    printf("Informe o Valor do produto: ");
                    scanf("%s",valor);

                    printf("\nVerificando se protudo já existe\n");

                    int resul = search_code(cod);

                    if(resul == 1){
                        printf("Produto já existente");
                        exit(0);
                    }

                    fprintf(arq, "%s;%d;%d;%s\n", name, cod, qtd, valor);
                
                    printf("\n");
                
                }
                
                fclose(arq);
        }
    }

    return 0;    
}