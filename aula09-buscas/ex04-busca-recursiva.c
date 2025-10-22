#include <stdio.h>

// Função recursiva de busca binária
int buscaBinariaRecursiva(int vetor[], int inicio, int fim, int valor) {
    if (inicio > fim) {
        return -1; // Caso base: elemento não encontrado
    }

    int meio = (inicio + fim) / 2; // Encontra o meio do vetor

    if (vetor[meio] == valor) {
        return meio; // Encontrou o elemento
    } 
    else if (valor < vetor[meio]) {
        // Busca na metade esquerda
        return buscaBinariaRecursiva(vetor, inicio, meio - 1, valor);
    } 
    else {
        // Busca na metade direita
        return buscaBinariaRecursiva(vetor, meio + 1, fim, valor);
    }
}

int main() {
    int vetor[] = {3, 8, 15, 23, 42, 57, 81, 99};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valor, posicao;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &valor);

    posicao = buscaBinariaRecursiva(vetor, 0, tamanho - 1, valor);

    if (posicao != -1)
        printf("Valor %d encontrado na posição %d.\n", valor, posicao);
    else
        printf("Valor %d não encontrado.\n", valor);

    return 0;
}
