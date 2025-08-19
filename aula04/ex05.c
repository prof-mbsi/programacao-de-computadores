#include <stdio.h>
int main(){
	int matriz[3][3] = {{3,4,5}, {6,7,8}, {6,5,4}};
	int i, j, soma = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(i == j){
				soma += matriz[i][j];
			}
		}
	}
	printf("Soma da diagonal principal: %d", soma);
}
