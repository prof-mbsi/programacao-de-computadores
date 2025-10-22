#include <stdio.h>
#include <string.h>

struct Produto{
	char descricao[50];
	float peso;
	int quantidade;
};

int main(){
	struct Produto p1;
	
	strcpy(p1.descricao, "Agua");
	p1.peso = 0.65;
	p1.quantidade = 10;
	
	printf("Produto: %s", p1.descricao);
	printf("\nPeso: %.3f", p1.peso);
	printf("\nQtd: %d", p1.quantidade);
}
