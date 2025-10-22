#include <stdio.h>
#include <time.h>   // Para medir o tempo de execução
#include <stdlib.h> // Para qsort (opcional, para ordenar o vetor)

// Função de comparação usada pelo qsort
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Função de busca sequencial
int buscaSequencial(int vetor[], int tamanho, int valor, int *comparacoes) {
    for (int i = 0; i < tamanho; i++) {
        (*comparacoes)++;
        if (vetor[i] == valor)
            return i;
    }
    return -1;
}

// Função de busca binária
int buscaBinaria(int vetor[], int tamanho, int valor, int *comparacoes) {
    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        (*comparacoes)++;

        if (vetor[meio] == valor)
            return meio;
        else if (valor < vetor[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }
    return -1;
}

int main() {
    int vetor[20];
    int valor, opcao, posicao, comparacoes = 0;
    clock_t inicio, fim;
    double tempo_execucao;

    // Entrada de dados
    printf("Digite 20 numeros:\n");
    for (int i = 0; i < 20; i++) {
        printf("%dº: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nEscolha o tipo de busca:\n");
    printf("1 - Sequencial\n");
    printf("2 - Binaria (vetor sera ordenado automaticamente)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nDigite o valor que deseja buscar: ");
    scanf("%d", &valor);

    inicio = clock(); // Inicia a contagem de tempo

    if (opcao == 1) {
        posicao = buscaSequencial(vetor, 20, valor, &comparacoes);
    } else if (opcao == 2) {
        qsort(vetor, 20, sizeof(int), comparar); // Ordena o vetor antes da busca binária
        posicao = buscaBinaria(vetor, 20, valor, &comparacoes);
    } else {
        printf("Opcao invalida!\n");
        return 0;
    }

    fim = clock(); // Finaliza a contagem de tempo

    tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC; // Calcula o tempo em segundos

    // Resultados
    if (posicao != -1)
        printf("\nValor encontrado na posicao %d.\n", posicao);
    else
        printf("\nValor nao encontrado.\n");

    printf("Total de comparacoes: %d\n", comparacoes);
    printf("Tempo de execucao: %.6f segundos\n", tempo_execucao);

    return 0;
}