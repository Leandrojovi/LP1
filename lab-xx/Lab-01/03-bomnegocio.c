#include <stdio.h>

int main (void) {
	
	float n1;
	float n2 = 3.17;
	float n3;
	printf("Digite o valor em reais:\n ");
	scanf("%d", &n1);
	n3 = n2*n1;
	if (n3 > 1000){
		printf ("Eh um bom negocio");
	}
	else {
		printf ("Eh um mal negocio.");
	}
	
	return 0;

}
