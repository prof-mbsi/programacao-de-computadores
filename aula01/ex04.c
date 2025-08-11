//Ler temperaturas de 7 dias, mostrar a maior temperatura e o dia correspondente.

#include <stdio.h>

int main() {
    float temp[7];
    int diaMaior = 0;
    for (int i = 0; i < 7; i++) {
        printf("Temperatura do dia %d: ", i+1);
        scanf("%f", &temp[i]);
        if (temp[i] > temp[diaMaior]) {
            diaMaior = i;
        }
    }

    printf("Maior temperatura: %.1f no dia %d\n", temp[diaMaior], diaMaior+1);

    return 0;
}