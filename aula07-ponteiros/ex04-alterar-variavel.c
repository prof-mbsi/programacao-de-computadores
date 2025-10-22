#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Antes: a = %d\n", a);

    *p = 25; // altera o valor de a
    printf("Depois: a = %d\n", a);

    return 0;
}