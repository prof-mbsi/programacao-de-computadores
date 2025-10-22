//Execute o teste de mesa:

#include <stdio.h>

int main() {
    int v[5];
    int i;

    for (i = 0; i < 5; i++) {
        v[i] = (i + 1) * 3;
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}