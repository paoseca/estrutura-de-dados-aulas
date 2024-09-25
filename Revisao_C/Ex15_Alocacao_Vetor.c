/*Descrição: Crie um programa que aloque dinamicamente um vetor de inteiros 
com 10 elementos, inicialize-o com números de 1 a 10 e imprima os elementos.*/
#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(int *n, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");
}

void inicializa_vetor(int *n, int tam) {
    printf("Digite os %d elementos do vetor:\n", tam);
    for (int i = 0; i < tam; i++) {
        scanf("%d", &n[i]); // Lê os elementos do vetor
    }
}

int main() {
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vetor = (int *)malloc(tam * sizeof(int)); // Alocação de memória

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    inicializa_vetor(vetor, tam); // Passa o ponteiro do vetor
    printf("Elementos do vetor: ");
    imprime_vetor(vetor, tam);

    free(vetor); // Libera a memória alocada
    return 0;
}


//malloc = retorna um ponteiro com o endeço do incio da meemoria alocada.
//v = (int *) malloc (n * sizeof(int));