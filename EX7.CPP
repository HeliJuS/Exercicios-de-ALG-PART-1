#include <math.h>


int main() {
	float area, raio;

	printf("Informe o valor do raio da esfera: ");
	scanf_s("%f", &raio);

	area = 4 * 3.14 * raio ^ 2;

	printf("A area da esfera eh: %f", &area);

	system("PAUSE");
	return(0);
