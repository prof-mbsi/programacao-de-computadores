#include <stdio.h>

void exibeVetor(int vetor[3]){
	int i;
	for(i = 0; i < 3; i++){
		printf("%d, ", vetor[i]);
	}
}

int main(){
	int v[3];
	v[0] = 3;
	v[1] = 6;
	v[2] = 9;
	exibeVetor(v);
}
