#include <stdio.h>
#include <stdlib.h>

void incrementa(int *n, int tam) {
    for (int i = 0; i < tam - 1; i++) {
        n[i] = n[i + 1]; // Desloca os elementos para a esquerda
    }
    n[tam - 1] = 0; // O último elemento é definido como 0 (ou outro valor desejado)
}


void imprime (int *n, int tam) {
    int i;
    for (i=0; i<tam; i++) { //0 a 4 (menor que 5)
        printf("%d\n", n[i]); 
    }
}

int main () {

    int v[5] = {1, 2, 3, 4, 5};

    printf("Antes:\n");
    imprime(v, 5);

    printf("\nDepois:\n");
    incrementa(v, 5);
    imprime(v, 5);

    return 0;
}