#include <stdio.h>
#include <string.h>

struct ContaBancaria{
	int numero;
	char titular[50];
	float saldo;
};

int main(){
	int i;
	struct ContaBancaria contas[3];
	for(i = 0 ; i < 3; i++){
		printf("Informe numero da conta: ");
		scanf("%d", &contas[i].numero);
		printf("Informe titular da conta: ");
		scanf("%s", &contas[i].titular);
		printf("Informe saldo da conta: ");
		scanf("%f", &contas[i].saldo);
	}
	for(i = 0 ; i < 3; i++){
		if(contas[i].saldo < 0){
			printf("\nTitular de saldo negativo: %s", contas[i].titular);
		}
	}
}
