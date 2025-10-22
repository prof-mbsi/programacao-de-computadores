#include <stdio.h>
int main(){
	//int T = 4;
	int matriz[4][4] = {{3,4,5,3}, {6,7,8,4}, {6,5,4,5}, {7,8,9,6}};
	int i, j, soma = 0;
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(i + j == 3){
				soma += matriz[i][j];
			}
		}
	}
	printf("Soma da diagonal secundária: %d", soma);
}
