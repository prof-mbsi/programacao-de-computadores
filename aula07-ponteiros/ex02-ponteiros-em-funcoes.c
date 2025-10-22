void trocaPorValor(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void trocaPorReferencia(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    trocaPorValor(x, y);
    printf("Por valor: x=%d, y=%d\n", x, y);

    trocaPorReferencia(&x, &y);
    printf("Por referencia: x=%d, y=%d\n", x, y);

    return 0;
}