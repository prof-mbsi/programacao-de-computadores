#include <stdio.h>

int buscaSequencial(int v[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) {
            return i; // retorna o índice encontrado
        }
    }
    return -1; // não encontrado
}

int main() {
    int v[] = {10, 25, 30, 40, 50};
    int n = 5;
    int valor;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int pos = buscaSequencial(v, n, valor);

    if (pos != -1)
        printf("Valor encontrado na posição %d.\n", pos);
    else
        printf("Valor não encontrado.\n");

    return 0;
}