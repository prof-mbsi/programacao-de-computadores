#include <stdio.h>

int main() {
    char letra = 'A';
    char *p = &letra;

    printf("Letra: %c\n", *p);

    *p = 'Z'; // altera a variável letra
    printf("Nova letra: %c\n", letra);

    return 0;
}