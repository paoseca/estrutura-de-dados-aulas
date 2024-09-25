/*02- Escreva uma função chamada dobrar que recebe um inteiro por valor e dobra seu valor. No main, 
declare um inteiro, chame a função dobrar, e imprima o valor antes e depois da chamada da função.*/

#include <stdio.h>
#include <stdlib.h>

void dobrar (int n) {

    n = n * 2;

    printf("Valor no dobrar: %d\n", n);
}


void dobrar_referencia (int *n) {
    *n = *n * 2;

    printf("\nValor no dobrar_referencia: %d\n", *n);
}

int main () {
    int x = 10;

    dobrar(x);

    printf("Valor antes de dobrar: %d", x);
    printf("\nValor depois de dobrar: %d", x); //porque não altera o main

    dobrar_referencia(&x);

    printf("\nValor depois de usar ponteiro: %d", x); //usando referencia altera o valor no main

    
    return 0;
}