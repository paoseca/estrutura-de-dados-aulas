#include <stdio.h>

// Função que retorna a soma dos elementos de um array
int retorna_soma(int *n, int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += n[i]; // Soma os elementos do array
    }
    return soma; // Retorna a soma
}

// Função que imprime os elementos do vetor
void imprime_vetor(int *n, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", n[i]); // Imprime cada elemento
    }
    printf("\n"); // Nova linha após a impressão
}

int main() {
    int soma;
    int v[5] = {1, 2, 3, 4, 5};

    printf("Array antes:\n");
    imprime_vetor(v, 5); // Imprime o vetor antes da soma

    soma = retorna_soma(v, 5); // Chama a função para calcular a soma

    printf("Soma dos elementos: %d\n", soma); // Imprime a soma

    return 0;
}
