#include <stdio.h>
#include <stdlib.h>

int main() {
	float nota1, nota2, nota3, nota4, media;

	printf("Informe o valor da primeria nota: ");
	scanf_s("%f", &nota1);

	printf("Informe o valor da segunda nota: ");
	scanf_s("%f", &nota2);

	printf("Informe o valor da terceira nota: ");
	scanf_s("%f", &nota3);

	printf("Informe o valor da quarta nota: ");
	scanf_s("%f", &nota4);

	media = (nota1 * 2 + nota2 * 2 + nota3 * 3 + nota4 * 3) / 10;

	if (media >= 9)
	{
		printf("A sua media eh: A");
	}

	else if (media >= 7.5 && media < 9) // ou == || // && == e
	{
		printf("A sua media eh: B");
	}
	else if (media >= 6 && media > 7.5)
	{
		printf("A sua media eh: C");
	}
	else if (media >= 4 && media < 6)
	{
		printf("A sua media eh: D");
	}
	else if (media < 4){
		printf("\nA sua media eh: E\n\n");
	}
	else{
		printf("ERRO");
	}

	return(0);
}



//if( media >= 9 printf_s("A sua classificacao é A");)

	//else if(
	//	media > 6 e < 7, 5;
	   // printf_s("A sua classificação é C");
		//	)
	//media > 6 e < 7, 5;
	//printf_s("A sua classificação é C");
