#include <stdio.h>
#include <string.h>

struct Produto{
	char descricao[50];
	float peso;
	int quantidade;
};

int main(){
	struct Produto produtos[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Informe descricao do produto: ");
		scanf("%s", &produtos[i].descricao);
		printf("Informe peso do produto: ");
		scanf("%s", &produtos[i].peso);
		printf("Informe quantidade do produto: ");
		scanf("%d", &produtos[i].quantidade);
	}
	for(i = 0; i < 5; i++){
		if(produtos[i].quantidade > 10 && produtos[i].quantidade < 100){
			printf("\nProduto: %s", produtos[i].descricao);
			printf("\nPeso: %.3f", produtos[i].peso);
			printf("\nQtd: %d", produtos[i].quantidade);
		}
	}
	
}
