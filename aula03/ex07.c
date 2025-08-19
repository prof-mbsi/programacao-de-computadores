#include <stdio.h>
#define LINHAS 3
#define COLUNAS 4
int main(){
	float matriz[LINHAS][COLUNAS] = {
		{2,3,4,5},
		{3,4,5,6},
		{4,5,6,7},
	};
	int i, j;
	float soma = 0.0, media = 0.0, elementos;
	elementos = LINHAS * COLUNAS;
	
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			soma += matriz[i][j];
		}
	}
	media = soma / elementos;
	printf("Média dos elementos: %f", media);
}
