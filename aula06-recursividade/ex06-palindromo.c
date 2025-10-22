#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função recursiva para verificar palíndromo
int ehPalindromo(char str[], int inicio, int fim) {
    if (inicio >= fim) {
        return 1; // caso base: chegou no meio ou ultrapassou
    }
    if (str[inicio] != str[fim]) {
        return 0; // se diferente, não é palíndromo
    }
    return ehPalindromo(str, inicio + 1, fim - 1); // chamada recursiva
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra); // lê palavra sem espaços

    if (ehPalindromo(palavra, 0, strlen(palavra) - 1)) {
        printf("%s eh um palindromo!\n", palavra);
    } else {
        printf("%s nao eh um palindromo.\n", palavra);
    }

    return 0;
}