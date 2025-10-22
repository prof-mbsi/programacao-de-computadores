#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 3, y = 7;

    troca(&x, &y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}