#include <bits/stdc++.h>
int main(){
	int idade;
	char sexo;
	printf("digite seu sexo:");
	gets(&sexo);
	printf("entre com sua idade:");
	scanf("%d",&idade);
	if (idade>60)
    printf("\n voce tem %d pode ganhar o brinde",idade);

	else if(idade<61 && sexo == 'm')
    printf("\n voce tem %d voce n pode ganhar o brinde ",idade);

	else if(  sexo == 'f')
	printf("voce eh mulher pode ganhar o brinde");


	return 0;
}
