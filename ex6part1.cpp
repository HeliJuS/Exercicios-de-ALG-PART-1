#include <stdio.h>
#include <stdlib.h>

int main(){

	int dia, mes, ano;

	printf("Digite o dia: ");
	scanf_s("%d", &dia);

	printf("Digite o mes: ");
	scanf_s("%d", &mes);

	printf("Digite o ano: ");
	scanf_s("%d", &ano);

	printf("\nA data de hoje eh: %d/%d/%d\n\n", dia, mes, ano);

	system("PAUSE");
	return(0);
