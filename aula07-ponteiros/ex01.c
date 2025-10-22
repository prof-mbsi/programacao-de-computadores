#include <stdio.h>

int main(){
    int x = 10;
    int *px = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor armazenado em px: %p\n", px);
    printf("Valor apontado por px: %d\n", *px);
    printf("Endereco de px: %p\n", &px);
}