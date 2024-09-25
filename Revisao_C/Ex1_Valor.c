/*01- Escreva uma função chamada soma que recebe dois inteiros como parâmetros e retorna a soma deles. 
No main, chame essa função e imprima o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int soma (int x, int y) {
    return x + y;
}

int main () {

    int x, y, resultado;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    resultado = soma(x, y); //preciso guadar a soma em uma variavel

    printf("A soma de %d e %d é: %d ",x, y, resultado);
}