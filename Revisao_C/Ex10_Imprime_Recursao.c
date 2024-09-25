#include <stdio.h>

void imprime_vetor (int v[], int tam) {
    if (tam == 1) { //se for um ela imprime o unico elemento do vetor
        printf("%d", v[tam-1]);
    }else{
        imprime_vetor(v, tam - 1); //chama a si mesma e imprime o vetor inteiro
        printf("%d", v[tam-1]);
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    //int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    imprime_vetor(vetor, 4);
    printf("\n");

    return 0;
}