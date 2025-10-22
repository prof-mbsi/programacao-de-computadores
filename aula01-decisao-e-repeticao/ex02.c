//Ler 5 notas, calcular a média e dizer quantas estão acima dela.
#include <stdio.h>

int main() {
    float notas[5], soma = 0;
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / 5;
    int acima = 0;
    for (int i = 0; i < 5; i++) {
        if (notas[i] > media) {
            acima++;
        }
    }

    printf("Media = %.2f\n", media);
    printf("Notas acima da media: %d\n", acima);

    return 0;
}
