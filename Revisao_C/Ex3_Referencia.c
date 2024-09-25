/*03- Escreva uma função chamada troca que recebe dois ponteiros para inteiros e troca os 
valores entre eles. No main, chame essa função e mostre os valores antes e depois da troca.*/ //a recebe b e b recebe a

#include <stdio.h>
#include <stdlib.h>

void troca (int *a, int *b) { // a aponta pro 10
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
} 

int main () {

    int a = 10;
    int b = 35;

    printf("Valor antes:\n a = %d\n b = %d", a, b);
   
    troca(&a, &b);

    printf("\nValor depois:\n a = %d\n b = %d", a, b);

    return 0;
}
