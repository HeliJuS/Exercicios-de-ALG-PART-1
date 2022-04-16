#include <stdio.h>
#include <stdlib.h>

int main() {

	float area, raio, pi = 3.14; //eu defini um valor para a varial pi, nesse caso toda vez q ela aparecer ela tera o valor fixo que eu determinei
	
	printf("Informe o valor do raio da esfera: ");
	scanf_s("%f", &raio);

	area = 4 * pi * raio * raio; // nao consegui colocar raio^2

	printf("\nA area da esfera eh igual a: %.2f\n\n", area);

	system("PAUSE");
	return(0);

}
