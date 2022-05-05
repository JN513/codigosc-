#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	float alturaSub, tamDegrau;
	printf("/t.:: Questão 16 | Lista 2 - Operadores::.\n\n");
	printf("Informe a altura que deseja subir: ");
	scanf("%f", &alturaSub);
	printf("Informe a altura do degrau: ");
	scanf("%f", &tamDegrau);
	float total = alturaSub/tamDegrau;
	printf("Você deve subir %.0f degraus\n", total);

	return 0;
}