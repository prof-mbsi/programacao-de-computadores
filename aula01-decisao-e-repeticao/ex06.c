//Leia os elementos de uma matriz 2x2 de inteiros e imprima o conteúdo no formato de matriz.
#include <stdio.h>

int main() {
    int matriz[2][2];

    // Leitura dos elementos
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impressão
    printf("Matriz digitada:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}