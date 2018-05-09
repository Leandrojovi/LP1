#include <stdio.h>
int main(void){
	float c;
	float k;
	float f;
	int num;
	
	printf("Digite a temperatura em Kelvin: \n")
	scanf("%d", &c);
	printf("Digite 1 para Celsius ou digite 2 para Fahrenheit.\n")
	scanf("%d", &num);
	if (num == 2){
		c = k - 273;
		printf("A temperatura em Kelvin eh: %d \n", &k);
		break;
	}	
	if (num == 1){
		f = (9*(k - 273)/5) + 32
		printf("A temperatura em Kelvin eh: %d \n", &c);
		break;
	}	
	else{
		printf("Erro.")
		break;
	}
	return 0;