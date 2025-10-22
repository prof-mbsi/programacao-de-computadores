int soma(int n) {
    if (n == 0)
        return 0;
    else
        return n + soma(n - 1);
}

int main() {
    printf("%d", soma(4));
    return 0;
}