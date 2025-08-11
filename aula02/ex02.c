//Execute o teste de mesa:

#include <stdio.h>

int main() {
    int numeros[5] = {4, 7, 10, 3, 8};
    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d eh par\n", numeros[i]);
        }
    }
    return 0;
}