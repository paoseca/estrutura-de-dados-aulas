#include "pilha.h"

void inicia_pilha (pilha *p, int capacidade) {
    p->topo = 0;
    p->v = (char *) malloc (1 * capacidade); //sizeof(char)
    p->capacidade = capacidade; //valor da minha pilha é igual a capacidade
}
int pilha_cheia (pilha *p) {
    if (p->topo == p->capacidade) return TRUE;
    else return FALSE;
} 
int pilha_vazia (pilha *p) {
    if (p->topo == 0) return TRUE;
    else return FALSE;
} 
void push (char c, pilha *p) {
    p->v[p->topo++] = c;
    //p->topo++;
}
char pop (pilha *p) {
    //p->topo--;
    return p->v[--p->topo];
}
void mostra_pilha (pilha *p) {
    if (pilha_vazia(p)==TRUE)
        printf ("pilha vazia\n");
    else {
        for (int i=p->topo-1; i>=0; i--)
            printf("%c\n", p->v[i]);
    }
}


