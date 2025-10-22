#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int)); // aloca memória

    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite o valor [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores digitados:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor); // libera memória
    return 0;
}