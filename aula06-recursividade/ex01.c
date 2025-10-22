#include <stdio.h>

void contagem(int n) {
    if (n == 0) {   // caso base
        printf("Fim!\n");
    } else {
        printf("%d\n", n);
        contagem(n - 1);  // passo recursivo
    }
}

int main() {
    contagem(5);
    return 0;
}