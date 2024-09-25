/*09- Modificando Elementos de um Array
Crie uma função que receba um array de inteiros e seu tamanho,
e dobre o valor de cada elemento do array. Utilize passagem por referência.*/
#include <stdio.h>

 int dobra_vetor (int *n, int tam) {
    int dobro = 0;
    for (int i=0; i<tam; i++) {
        n[i] *= 2; //n[i] = n[i] * 2
    }
    return dobro;
 }

void imprime_vetor(int *n, int tam) {
    for(int i=0; i<tam; i++) {
        printf("%d\n", n[i]);
    }
    printf("\n");
}

 int main () {
    int v[5] = {1, 2, 3, 4, 5};
    int dobro;

    printf("Antes:\n");
    imprime_vetor(v, 5);

    dobro = dobra_vetor(v, 5);

    printf("\nDepois:\n", dobro);
    imprime_vetor(v, 5);

    return 0;
 }