
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

void descricaoopcao(){
    printf("\n----------------------------------------\nNotacao Infixa\nO que e:\n E o formato tradicional que usamos no dia a dia escolar, onde o operador fica entre os operandos (X op Y)\nExemplo: A + B ou (A + B) * C\n\n----------------------------------------\nNotacao Pos-fixa (Notacao Polonesa Reversa)\nO que e: \nE o formato onde o operador vem depois dos operandos (X Y op).\nExemplo: A expressao A + B vira AB +; a expressao (A + B) * C vira AB + C *.\nCaracteristica: Nao precisa de parenteses e e muito mais facil e rapida para um computador calcular usando uma estrutura de dados do tipo pilha (stack), pois a ordem das operacoes e exatamente a sequencia de leitura da esquerda para a direita.\n\n");
    return;
}

