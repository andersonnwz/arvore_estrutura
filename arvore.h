
#ifndef ARVORE_H
#define ARVORE_H

#include <stdio.h>   
#include <stdlib.h> 
#include <ctype.h>   
#include <string.h>
#include <stdbool.h>

typedef struct noArvore {   
    char valor;                               
    struct noArvore *esq;       
    struct noArvore *dir;  
} NoArvore;

typedef struct pilha{
    
    NoArvore *topo;
    struct pilha *proximo;
    
}pilha;


typedef struct caracterconta{
    char Caracter;
    struct caracterconta *proxCaracter;
}caracterconta;

typedef struct conta {                  
    caracterconta *comeco;
    caracterconta *fim; 
} conta;


void descricaoopcao();

caracterconta* criar_no(char c);
void liberar_lista(caracterconta *inicio);
void iniciarcontaInfiso(conta *containteira);
bool lernumIn(char temp);
void calculoInfixo(int i, char temp[500], caracterconta *atual, conta *c);
void Infixo();

#endif