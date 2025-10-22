#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *notas, soma = 0;

    printf("Quantas notas deseja informar? ");
    scanf("%d", &n);

    notas = (float *) malloc(n * sizeof(float));

    if (notas == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    printf("\nMédia = %.2f\n", soma / n);

    free(notas);
    return 0;
}