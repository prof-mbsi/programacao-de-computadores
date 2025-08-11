//Cadastre o preço de 5 produtos em um vetor. 
//Depois, mostre apenas os produtos com preço acima de R$ 100,00.

#include <stdio.h>

int main() {
    float precos[5];

    for (int i = 0; i < 5; i++) {
        printf("Preço do produto %d: R$ ", i+1);
        scanf("%f", &precos[i]);
    }

    printf("Produtos com preço acima de R$ 100,00:\n");
    for (int i = 0; i < 5; i++) {
        if (precos[i] > 100.0) {
            printf("Produto %d: R$ %.2f\n", i+1, precos[i]);
        }
    }

    return 0;
}