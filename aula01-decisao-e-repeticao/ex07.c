//Leia uma matriz 3x3 e calcule a soma dos elementos da diagonal principal.

#include <stdio.h>

int main() {
    int matriz[3][3], soma = 0;

    // Leitura
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma da diagonal principal (i == j)
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }

    printf("Soma da diagonal principal: %d\n", soma);

    return 0;
}