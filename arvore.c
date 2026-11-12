#include <stdio.h>   
#include <stdlib.h> 
#include <ctype.h>   
#include <string.h>  
#include "arvore.h"  

NoArvore* criarNo (char valordigitado){
    NoArvore *no = (NoArvore*) malloc (sizeof(*no));
    if (no == NULL){
        printf ("Erro ao alocar\n");
        exit (1);
    }
    else{
        no->valor = valordigitado;
        no->esq = NULL;
        no->dir = NULL;
        return no;
    }
}

