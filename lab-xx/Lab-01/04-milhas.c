#include <stdio.h>

int main (void) {
	
	float v1;
	float v2;
	printf("Digite o valor em milhas:\n ");
	scanf("%d", &v1);
	v2 = v1*1.6;
	if (v2 < 80){
		printf ("Acelere.");
	}
	if (v2 > 100) {
		printf ("Desacelere.");
	if (v2 > 80) and (v2 < 100){
		printf ("Mantenha.");
	}
	
	return 0;
}

