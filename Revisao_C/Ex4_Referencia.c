/*04- Escreva uma função chamada inicializar que recebe um ponteiro para um inteiro e inicializa o valor desse inteiro para 10.
 No main, declare um inteiro, chame a função inicializar, e imprima o valor antes e depois da chamada*/
#include <stdio.h>
#include <stdlib.h>

void inicializar (int *a) {
    *a = 10;

}

int main () {

    int x = 24;
    printf("Antes: %d\n", x);

    inicializar(&x);
    printf("Depois: %d", x);

    return 0;
}
