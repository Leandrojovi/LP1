#include <stdio.h>
int main (void){
	int temps[50];
	int i=1;
	int somatemps;
	float media;
	while (i<=50){
		printf("Digite a temperatura %d: ", &i);
		scanf("%d", &temps[i])
		somatemps+=temps[i];
		i+=1;
	media=somatemps/i;
	}
	printf("A media dos %d eh: %f", &i, &media);
	return 0;
}
		