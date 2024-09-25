#include "vetor.h"

// implementação das funções auxiliares
// Dica: todo vetor é um ponteiro, mas nem todo ponteiro é um vetor
void preenche_vetor(int *v, int t) {
    for (int i = 0; i < t; i++)
        v[i] = rand() % (t * 10);
}

void exibe_vetor(int *v, int t, char *msg) {
    printf("\n%s\n", msg);
    for (int i = 0; i < t; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void soma_vetores(int *v1, int *v2, int *vs, int t) {
    for (int i = 0; i < t; i++) {
        vs[i] = v1[i] + v2[i];  // Corrigido: v2[1] para v2[i]
    }
}

void bubblesort(int *v, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (v[j] > v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void insertionsort(int *v, int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        int x = v[i];
        for (j = i - 1; j >= 0 && v[j] > x; j--) {
            v[j + 1] = v[j];
        }
        v[j + 1] = x;
    }
}

int partition(int *a, int p, int r) {
    int x = a[r]; //r= ultima posição do vetor
    int i = p - 1; //antes do inicio
    int j;
    for (j = p; j < r; j++) {
        if (a[j] <= x) {
            i = i + 1;
            int aux = a[i];
            a[i] = a[j];
            a[j] = aux;
        }
    }
    i = i + 1;
    int aux = a[j];
    a[j] = a[i];
    a[i] = aux;
    return i;
}

void quicksort(int *a, int p, int r) {
    if (p < r) {
        int q = partition(a, p, r);
        quicksort(a, p, q - 1);
        quicksort(a, q + 1, r);
    }
}

void selectionsort (int *v, int n) {
     for (int i = 0; i < n-1; ++i) {
        int min = i; //menor elemento é o atual
        for (int j = i+1; j < n; ++j) {
            if (v[j] < v[min]) { //a frente do min
                min = j;
            }
            int x = v[i];  // Armazena o valor de v[i] em x
            v[i] = v[min]; // Coloca o menor elemento na posição i
            v[min] = x;    // Coloca o valor antigo de v[i] na posição min
        }
     }
}

