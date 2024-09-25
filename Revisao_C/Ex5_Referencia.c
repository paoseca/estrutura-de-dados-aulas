/*05- Crie uma função chamada atualizarValores que recebe dois ponteiros para inteiros e um inteiro. 
A função deve dobrar o valor do primeiro inteiro e adicionar o valor do segundo ao inteiro recebido. 
No main, declare duas variáveis inteiras, chame a função e imprima todos os valores antes e depois.*/
#include <stdio.h>
#include <stdlib.h>

void atualizarValores (int *a, int *b, int *c) {
    int aux;
    *a = *a * 2;
    *c = *b;
}

int main () {

    int a = 5;
    int b = 10;
    int c = 15;

    printf("Antes: a = %d, b = %d, c = %d",a ,b ,c);

    atualizarValores(&a, &b, &c);

    printf("\nDepois: a = %d, b = %d, c = %d", a, b, c);

    return 0;
}



