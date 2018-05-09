#include <stdio.h>
int main(void){
	float c;
	float k;
	float f;
	int num;
	
	printf("Digite a temperatura em Celsius: \n")
	scanf("%d", &c);
	printf("Digite 1 para Fahrenheit ou digite 2 para Kelvin.\n")
	scanf("%d", &num);
	if (num == 2){
		k = c + 273;
		printf("A temperatura em Kelvin eh: %d \n", &k);
		break;
	}	
	if (num == 1){
		f = (1.8*c) + 32;
		printf("A temperatura em Kelvin eh: %d \n", &f);
		break;
	}	
	else{
		printf("Erro.")
		break;
	}
	return 0;
}