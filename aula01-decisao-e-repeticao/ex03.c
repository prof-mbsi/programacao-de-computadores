//Ler 8 números e mostrar quantos são positivos, negativos ou zero.

#include <stdio.h>

int main() {
    int numeros[8];
    int positivos = 0, negativos = 0, zeros = 0;

    for (int i = 0; i < 8; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &numeros[i]);

        if (numeros[i] > 0)
            positivos++;
        else if (numeros[i] < 0)
            negativos++;
        else
            zeros++;
    }

    printf("Positivos: %d\nNegativos: %d\nZeros: %d\n", positivos, negativos, zeros);

    return 0;
}
