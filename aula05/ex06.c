#include <stdio.h>

void analisaVetor(int vetor[6]){
	int i, pos = 0, neg = 0, zero = 0;
	for(i = 0; i < 6; i++){
		if(vetor[i] > 0){
			pos++;
		} else{
			if(vetor[i] < 0){
				neg++;
			} else{
				zero++;
			}
		}
	}
	printf("Positivos: %d, negativos: %d, zeros: %d", pos, neg, zero);
}

int main(){
	int v[] = {-3, 0, 4, -1, 3, 0};
	analisaVetor(v);
	return 0;
}
