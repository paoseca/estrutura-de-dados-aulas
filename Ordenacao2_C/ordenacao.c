#include "vetor.h"

int main () {
    int n, *v;
    srand(time(0));
    printf("Digite o tamanho do vetor, 0 encerra: ");
    scanf("%d", &n);
    while(n > 0) {
        v = (int *) malloc (n * sizeof(int));
        preenche_vetor(v, n);
        //exibe_vetor(v, n, "1o vetor gerado:");
        long inicio = time(0);
        bubblesort(v, n);
        long fim = time(0);
        printf("\nn = %d, tempo bubble = %d\n", n, fim - inicio);
        //exibe_vetor(v, n, "vetor ordenado bubble:");

        preenche_vetor(v, n);
        //exibe_vetor(v, n, "2o vetor gerado");
        inicio = time(0);
        insertionsort(v, n);
        fim = time(0);
        printf("\nn = %d, tempo insertion= %d", n, fim - inicio);
        //exibe_vetor(v, n, "vetor ordenado insertion:");

        preenche_vetor (v, n);
        exibe_vetor(v, n, "3 vetor gerado");
        inicio = time(0);
        quicksort(v, 0, n-1);
        fim = time(0);
        printf ("\nn=%d, tempo do quick = %d", n, fim - inicio);
        exibe_vetor(v,n, "vetor ordenado pelo quicksort");

        preenche_vetor (v, n);
        inicio = time(0);
        selectionsort(v, n);
        fim = time(0);
        printf("\nn = %d, tempo selection= %d", n, fim - inicio);
        exibe_vetor(v,n, "vetor ordenado pelo selectionsort");

        free(v);
        printf("\ndigite o tamanho para um novo teste, 0 encerra: ");
        scanf("%d", &n);
    }

    return 0;
}
