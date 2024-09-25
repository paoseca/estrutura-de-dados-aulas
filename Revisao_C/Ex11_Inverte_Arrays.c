#include <stdio.h>

void inverte_vetor(int *v, int ini, int fim) {
    int aux;
    if(ini < fim) {
        aux = v[ini];
        v[ini] = v[fim];
        v[fim] = aux;
        inverte_vetor(v, ini + 1, fim - 1);
    }
}

void imprime_vetor (int v[], int tam) {
    if (tam == 1) { //se for um ela imprime o unico elemento do vetor
        printf("%d", v[tam-1]);
    }else{
        imprime_vetor(v, tam - 1); //chama a si mesma e imprime o vetor inteiro
        printf("%d", v[tam-1]);
    }
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    
    imprime_vetor(v, 5);
    
    printf("\n");

    inverte_vetor(v, 0, 4);
    imprime_vetor(v, 5);

    return 0;
}