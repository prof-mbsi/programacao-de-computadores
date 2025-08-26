#include <stdio.h>
#include <string.h>

struct Produto{
	char descricao[50];
	float peso;
	int quantidade;
};

int main(){
	struct Produto produtos[2];
	int i;
	float maiorPeso = 0.0;
	char produtoMaisPesado[50];
	
	for(i = 0; i < 2; i++){
		printf("Informe descricao do produto: ");
		scanf("%s", &produtos[i].descricao);
		printf("Informe peso do produto: ");
		scanf("%f", &produtos[i].peso);
		printf("Informe quantidade do produto: ");
		scanf("%d", &produtos[i].quantidade);
		if(produtos[i].peso > maiorPeso){
			maiorPeso = produtos[i].peso;
			strcpy(produtoMaisPesado, produtos[i].descricao);
		}
	}
	for(i = 0; i < 2; i++){
		if(produtos[i].quantidade > 10 && produtos[i].quantidade < 100){
			printf("\nProduto: %s", produtos[i].descricao);
			printf("\nPeso: %.3f", produtos[i].peso);
			printf("\nQtd: %d", produtos[i].quantidade);
		}
	}
	printf("\nProduto mais pesado: %s", produtoMaisPesado);
	printf("\nMaior Peso: %.3f", maiorPeso);
}
