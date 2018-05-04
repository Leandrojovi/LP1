#include <stdio.h>

int main (void) {
	char nome;
	char nome2;
	char nome3;
	int vitoria;
	int empate;
	int derrota;
	int ponto = 0;
	int ponto2 =1;
	int ponto3 =1;
	int i=0;
	
	while(i<20){
		printf("Digite o do time: ");
		scanf("%d", &nome);
		printf("Digite o numero de vitorias: ");
		scanf("%d", &vitoria);
		printf("Digite o numero de empates: ");
		scanf("%d", &empate);
		printf("Digite o numero de derrotas: ");
		scanf("%d", &empate);
		printf("Digite o numero de derrotas: ");
		scanf("%d", &derrota);
		ponto = vitoria*3 + empate;
		if (ponto < ponto2 or (ponto == ponto2){
			nome2 = nome;
			ponto2 = ponto;
			
		}
		if (ponto > ponto3) or (ponto == ponto3){
			nome3 = nome;
			ponto3 = ponto;
		}
		printf("O time com o maior numero de pontos eh: %d. Possui: %d. \n", &nome3, ponto3);
		printf("O time com o menor numero de pontos eh: %d. Possui: %d. \n", &nome2, ponto2);
		i+=1;
	return 0;
}
