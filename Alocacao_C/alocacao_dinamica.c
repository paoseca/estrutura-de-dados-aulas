#include <stdlib.h>
#include <stdio.h>

int main () {
      int v [1000000];

    int *x;
/*    x = (int *) malloc (2000000000);
         if (x != NULL){
         printf ("foi");
     }
    else {
         printf ("falha na alocacao\n");
*/    

do {
    x = (int *) malloc (100000000);
    printf ("endereco alocado: %p\n", x);
} while (x != NULL);
    
    return 0;
}

/*Esse código tenta alocar um grande bloco de memória repetidamente, 
o que pode resultar em um loop infinito se a alocação nunca falhar (o que é improvável, mas possível, dependendo do sistema)*/