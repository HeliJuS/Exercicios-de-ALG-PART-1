#include <stdio.h>
#include <stdlib.h> 

int main() {
	
	char nome[150];
	float salario, aumento;

	printf("Informe seu nome: ");
	gets_s(nome);

	printf("Informe seu salario: ");
	scanf_s("%f", &salario);

	aumento = (1 + 0,2) * salario;

	printf("O aumento do salario eh: %f", aumento);

	system("PAUSE");
	return(0);
}
