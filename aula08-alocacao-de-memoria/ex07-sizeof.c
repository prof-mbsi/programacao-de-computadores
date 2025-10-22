#include <stdio.h>

int main() {
    int *p;
    double *q;

    printf("sizeof(p): %lu bytes\n", sizeof(p));
    printf("sizeof(*p): %lu bytes\n", sizeof(*p));
    printf("sizeof(q): %lu bytes\n", sizeof(q));
    printf("sizeof(*q): %lu bytes\n", sizeof(*q));

    return 0;
}