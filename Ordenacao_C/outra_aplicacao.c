#include "vetor.h"

int main () {
    int t;
    printf("Digte o tamanho dos vetores: ");
    scanf("%d", &t);

   int *v1 =  (int *) malloc (t*sizeof(int));
    preenche_vetor (v1, t);

     int *v2 =  (int *) malloc (t*sizeof(int));
    preenche_vetor (v2, t);

     int *v3 =  (int *) malloc (t*sizeof(int));
    soma_vetor (v1, v2, v3, t);

    exibe_vetor(v1, t);
    printf("\n+\n");
    exibe_vetor(v2, t);
    printf("\n=\n");
    exibe_vetor (v3 ,t);

    return 0;
}