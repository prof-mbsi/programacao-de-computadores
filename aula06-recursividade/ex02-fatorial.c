#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1)   // caso base
        return 1;
    else
        return n * fatorial(n - 1); // passo recursivo
}

int main() {
    int num = 5;
    printf("Fatorial de %d = %d\n", num, fatorial(num));
    return 0;
}