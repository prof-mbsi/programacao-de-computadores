#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// -------------------- Funções de busca --------------------

// Busca sequencial
int buscaSequencial(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor)
            return i;
    }
    return -1;
}

// Busca binária
int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (vetor[meio] == valor)
            return meio;
        else if (valor < vetor[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }
    return -1;
}

// Função de comparação para qsort
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// -------------------- Programa principal --------------------

int main() {
    int vetor[1000];
    int valorBuscado, posicao;
    clock_t inicio, fim;
    double tempoSeq, tempoBin;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // Gera 1000 números aleatórios entre 1 e 10000
    for (int i = 0; i < 1000; i++) {
        vetor[i] = rand() % 10000 + 1;
    }

    // Ordena o vetor para a busca binária
    qsort(vetor, 1000, sizeof(int), comparar);

    printf("Digite um valor a ser buscado (entre 1 e 10000): ");
    scanf("%d", &valorBuscado);

    // -------------------- Busca Sequencial --------------------
    inicio = clock();
    posicao = buscaSequencial(vetor, 1000, valorBuscado);
    fim = clock();
    tempoSeq = ((double)(fim - inicio)) / CLOCKS_PER_SEC * 1000; // ms

    if (posicao != -1)
        printf("\n[Sequencial] Valor encontrado na posicao %d.\n", posicao);
    else
        printf("\n[Sequencial] Valor nao encontrado.\n");
    printf("Tempo de execucao: %.4f ms\n", tempoSeq);

    // -------------------- Busca Binária --------------------
    inicio = clock();
    posicao = buscaBinaria(vetor, 1000, valorBuscado);
    fim = clock();
    tempoBin = ((double)(fim - inicio)) / CLOCKS_PER_SEC * 1000; // ms

    if (posicao != -1)
        printf("\n[Binaria] Valor encontrado na posicao %d.\n", posicao);
    else
        printf("\n[Binaria] Valor nao encontrado.\n");
    printf("Tempo de execucao: %.4f ms\n", tempoBin);

    // -------------------- Comparação --------------------
    printf("\n-------------------------------------------\n");
    if (tempoSeq > tempoBin)
        printf("➡️  Busca BINARIA foi mais rapida!\n");
    else if (tempoSeq < tempoBin)
        printf("➡️  Busca SEQUENCIAL foi mais rapida (raro, mas pode acontecer!)\n");
    else
        printf("➡️  Ambas tiveram o mesmo tempo!\n");

    printf("Diferenca: %.4f ms\n", fabs(tempoSeq - tempoBin));
    printf("-------------------------------------------\n");

    return 0;
}