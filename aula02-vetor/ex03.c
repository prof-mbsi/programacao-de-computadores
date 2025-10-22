//Execute o teste de mesa:

#include <stdio.h>

int main() {
    int valores[4] = {5, 2, 3, 4};
    int soma = 0;

    for (int i = 0; i < 4; i++) {
        soma = soma + valores[i];
    }

    printf("Soma = %d\n", soma);
    return 0;
}