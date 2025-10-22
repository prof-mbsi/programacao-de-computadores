#include <stdio.h>

void dobrar(int *n) {
    *n = *n * 2;
}

int main() {
    int x = 5;
    dobrar(&x);
    printf("x dobrado = %d\n", x);

    return 0;
}