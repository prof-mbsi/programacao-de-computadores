#include <stdio.h>

int main() {
    int v[3] = {10, 20, 30};
    int *p = v; // aponta para o primeiro elemento

    printf("%d\n", *p);     // 10
    printf("%d\n", *(p+1)); // 20
    printf("%d\n", *(p+2)); // 30

    return 0;
}