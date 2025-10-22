#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    char *nome;

    printf("Digite o tamanho do nome: ");
    scanf("%d", &tamanho);

    nome = (char *) malloc((tamanho + 1) * sizeof(char)); // +1 para o '\0'

    if (nome == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Digite o nome: ");
    scanf(" %s", nome);

    printf("Nome digitado: %s\n", nome);

    free(nome);
    return 0;
}