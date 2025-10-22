#include <stdio.h>
#include <string.h>

void exibeSaudacao(char nome[50]){
	printf("\nOla %s!", nome);
}

int main(){
	char outraCoisa[50];
	printf("\nInforme seu nome: ");
	fgets(outraCoisa, 50, stdin);
	exibeSaudacao(outraCoisa);
}
