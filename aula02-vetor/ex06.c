//Execute o teste de mesa:

#include <stdio.h>

int main() {
    int numeros[4] = {5, 10, 15, 20};
    int soma = 0;
    int i;

    for (i = 0; i < 4; i++) {
        soma = soma + numeros[i];
    }

    printf("Soma = %d\n", soma);

    return 0;
}