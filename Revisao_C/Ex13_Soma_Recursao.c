/*Escreva uma função recursiva que calcule a soma dos elementos de um array.*/
#include <stdio.h>

int calcula_soma (int *n, int tam) {
    int i;
    if(tam == 0) {
        return 0;
    }else {
        for(i=0; i<tam; i++) {
            return n[tam-1] + calcula_soma(n, tam-1); //ultima posição + chama a função menos um que já foi
        }
    }
}

int main () {
    
    int v[5] = {1, 2, 3, 4, 5};
    int soma = 0;

    soma = calcula_soma(v, 5);
    printf("%d", soma);

    return 0;
}