#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v, n, novo_n, i;

    printf("Digite o tamanho inicial: ");
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) v[i] = i + 1;

    printf("\nDigite o novo tamanho: ");
    scanf("%d", &novo_n);

    v = (int *) realloc(v, novo_n * sizeof(int));

    for (i = n; i < novo_n; i++) v[i] = i + 1;

    printf("\nVetor final:\n");
    for (i = 0; i < novo_n; i++) printf("%d ", v[i]);

    free(v);
    return 0;
}