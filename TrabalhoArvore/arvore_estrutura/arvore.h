
#ifndef ARVORE_H
#define ARVORE_H

#include <stdio.h>   
#include <stdlib.h> 
#include <ctype.h>   
#include <string.h>

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

void descricaoopcao();