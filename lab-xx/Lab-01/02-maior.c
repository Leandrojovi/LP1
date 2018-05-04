#include <stdio.h>

int main (void) {
	
	int n1;
	int n2;
	printf("Digite o primeiro numero: \n ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: \n ");
	scanf("%d", &n2);
	if (n1 > n2){
		printf ("O numero %d eh maior.", &n1);
	}
	else{
		printf ("O numero %d eh maior.", &n2);
	}
	
	return 0;
}

