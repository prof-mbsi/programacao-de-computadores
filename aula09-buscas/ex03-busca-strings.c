#include <stdio.h>
#include <string.h> // Necessário para strcmp

// Função que faz a busca sequencial em um vetor de strings
int buscaSequencialString(char nomes[][30], int tamanho, char nomeBuscado[]) {
    for (int i = 0; i < tamanho; i++) {
        // strcmp retorna 0 se as strings forem iguais
        if (strcmp(nomes[i], nomeBuscado) == 0) {
            return i; // Retorna o índice onde encontrou
        }
    }
    return -1; // Retorna -1 se não encontrou
}

int main() {
    int tamanho = 5;
    char nomes[5][30] = {"Ana", "Bruno", "Carlos", "Daniela", "Eduardo"};
    char nomeBuscado[30];

    printf("Digite o nome que deseja buscar: ");
    fgets(nomeBuscado, 30, stdin);

    // Remove o '\n' da leitura feita com fgets
    nomeBuscado[strcspn(nomeBuscado, "\n")] = '\0';

    int indice = buscaSequencialString(nomes, tamanho, nomeBuscado);

    if (indice != -1)
        printf("Nome encontrado na posição %d.\n", indice);
    else
        printf("Nome não encontrado.\n");

    return 0;
}
