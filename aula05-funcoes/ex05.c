#include <stdio.h>

float somaVetor(float vetor[3]){
	int i;
	float soma = 0;
	for(i = 0; i < 3; i++){
		soma += vetor[i];
	}
	return soma;
}

int main(){
	float v[] = {1.1, 1.2, 1.3};
	
	printf("%.2f", somaVetor(v));
}
