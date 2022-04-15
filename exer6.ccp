#include <stdio.h>
#include <stdlib.h>


int main() {
	float quilo, zin, cob;

	printf("Informe quantos quilos de latao voce deseja produzir: ");
	scanf_s("%f", &quilo);

	zin = quilo * 3;
	cob = quilo * 7;
	//total = zin + cob;
	 
	printf("\nPra produzir %.2f quilos de latao sao necessarios %.2f de zinco e %.2f de cobre\n\n", quilo, zin, cob);

	system("PAUSE");
	return(0);





	
}
