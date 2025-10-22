#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;   // caso base
    if (n == 1) return 1;   // caso base
    return fibonacci(n - 1) + fibonacci(n - 2); // passo recursivo
}

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}