/*Fatorial: Escreva uma função recursiva que calcule o fatorial de um número inteiro não negativo*/
#include <stdio.h>

int fatorial (int n) {
    if (n == 0) {  //se for 0 retorna: 1,  porque o fatorial de 0 é 1 |  n! = n · (n – 1)· (n – 2) ·
        return 1;
    }else {
        return n * fatorial(n-1);
    }
}

int main () {

    int x; 
    int fatora =0;

    printf("Digite o valor do x: ");
    scanf("%d", &x);

    fatora = fatorial(x);
    printf("%d", fatora);

    return 0;
}