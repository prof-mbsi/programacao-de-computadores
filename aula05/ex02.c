#include <stdio.h>

int calculaIdade(int anoNascimento){
	return 2025 - anoNascimento;
}

float calculaIMC(float peso, float altura){
	return peso / (altura * altura);
}

int main(){
	float peso, altura;
	int ano;
	printf("\nInforme seu peso: ");
	scanf("%f", &peso);
	printf("\nInforme sua altura: ");
	scanf("%f", &altura);
	printf("\nInforme seu ano de nascimento: ");
	scanf("%d", &ano);
	
	printf("\nSeu IMC = %.2f", calculaIMC(peso, altura));
	printf("\nSua idade: %d", calculaIdade(ano));
}
