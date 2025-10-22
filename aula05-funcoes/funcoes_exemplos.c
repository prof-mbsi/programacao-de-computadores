#include <stdio.h>

void exibeMensagem(){
	printf("Esse e um exemplo de funcao!");
}

float calculaDobro(float num){
	return num * 2;
}

int main(){
	float valor;
	exibeMensagem();
	printf("\nInforme valor para calcular o dobro: ");
	scanf("%f", &valor);
	printf("\nDobro de %.2f = %.2f", valor, calculaDobro(valor));
	return 0;
}
