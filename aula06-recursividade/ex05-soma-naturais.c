#include <stdio.h>

// Função recursiva para somar os n primeiros números
int somaNaturais(int n) {
    if (n == 0) {
        return 0; // caso base
    } else {
        return n + somaNaturais(n - 1); // passo recursivo
    }
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Soma dos %d primeiros numeros naturais = %d\n", n, somaNaturais(n));

    return 0;
}