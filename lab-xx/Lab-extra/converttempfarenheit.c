#include <stdio.h>
int main(void){
	float c;
	float k;
	float f;
	int num;
	
	printf("Digite a temperatura em Fahrenheit: \n")
	scanf("%d", &c);
	printf("Digite 1 para Celsius ou digite 2 para Kelvin.\n")
	scanf("%d", &num);
	if (num == 2){
		k = (5*(f - 32)/9) +273;
		printf("A temperatura em Kelvin eh: %d \n", &k);
		break;
	}	
	if (num == 1){
		c = ((f - 32)/1.8);
		printf("A temperatura em Kelvin eh: %d \n", &c);
		break;
	}	
	else{
		printf("Erro.")
		break;
	}
	return 0;