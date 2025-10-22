#include <stdio.h>

int main() {
    int a = 42;
    int *p = &a;
    int **pp = &p;

    printf("Valor de a = %d\n", **pp);
    printf("Valor de a = %d\n", *p);
    printf("Valor de a = %d\n", a);

    return 0;
}