#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v, i, n;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    v = (int *) calloc(n, sizeof(int)); // inicializa tudo com 0

    if (v == NULL) {
        printf("Erro na alocacao!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    free(v);
    return 0;
}