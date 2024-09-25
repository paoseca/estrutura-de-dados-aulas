#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef
    struct { //tag
        int topo;
        char *v;
        int capacidade;
}pilha;//nome

void inicia_pilha (pilha *p, int capacidade); 
int pilha_cheia (pilha *); // 0 1
int pilha_vazia (pilha *); 
void push (char, pilha *); //push -> Empilha
char pop (pilha *); //pop -> Desempilha
void mostra_pilha (pilha *);
