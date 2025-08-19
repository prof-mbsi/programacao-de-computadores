#include <stdio.h>
int main(){
	int matriz[3][3];
	int linha,coluna;
	
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("Informe valor para [%d][%d]: ", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	printf("\n\nMatriz: \n");
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("%d ", matriz[linha][coluna]);
		}
		printf("\n");
	}
}
