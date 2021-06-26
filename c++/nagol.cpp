#include <stdio.h>

int main ()
{

	unsigned linha, coluna;
	unsigned long long ordem;
	unsigned qtsLinha, qtsColuna;

	scanf("%u %u %u %u", &qtsLinha, &qtsColuna, &linha, &coluna);

	linha++;
	coluna++;
	ordem = linha - 1;
	ordem = ordem * qtsColuna;
	ordem += coluna;

	if (ordem & 1)
		printf("Direita\n");
	else
		printf("Esquerda\n");

    return 0;

}