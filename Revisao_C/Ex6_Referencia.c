/*06- Escreva uma função chamada incrementar que recebe um ponteiro para um inteiro e incrementa o valor desse inteiro em 1. 
No main, declare uma variável inteira, chame a função e imprima o valor antes e depois da chamad*/

#include <stdio.h>
#include <stdlib.h>

void incrementa (int *n) {
    *n = *n + 1;
}

int main () {

    int x = 10;

    printf("Antes: %d", x);

    incrementa(&x);
    printf("\nDepois: %d", x);

    return 0;
}