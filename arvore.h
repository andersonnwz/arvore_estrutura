
#ifndef ARVORE_H
#define ARVORE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct noArvore {
    char valor;                  
    struct noArvore *esq;       
    struct noArvore *dir;  
} NoArvore;

typedef struct pilha{
    
    NoArvore *topo;
    struct pilha *proximo;
    
}pilha;


#endif