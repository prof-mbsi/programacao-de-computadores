//Leia 10 números inteiros e armazene em um vetor. Em seguida, imprima apenas os valores pares.
#include <stdio.h>

int main() {
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Numeros pares:\n");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d\n", numeros[i]);
        }
    }

    return 0;
}