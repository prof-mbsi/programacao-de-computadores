#include <stdio.h>
int main(){
	int matriz[2][4];
	int l, c, soma = 0;
	
	for(l = 0; l < 2; l++){
		for(c = 0; c < 4; c++){
			printf("\nInforme valor para [%d][%d]: ", l, c);
			scanf("%d", &matriz[l][c]);
			soma += matriz[l][c];
		}
		//reiniciar a soma
		printf("\n%d", soma);
		soma = 0;
	}
}
