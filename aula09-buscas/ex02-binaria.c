#include <stdio.h>

int buscaBinaria(int v[], int n, int valor) {
    int inicio = 0, fim = n - 1, meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (v[meio] == valor)
            return meio;
        else if (valor < v[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }
    return -1;
}

int main() {
    int v[] = {5, 10, 15, 20, 25, 30, 35};
    int n = 7;
    int valor;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int pos = buscaBinaria(v, n, valor);

    if (pos != -1)
        printf("Valor encontrado na posição %d.\n", pos);
    else
        printf("Valor não encontrado.\n");

    return 0;
}