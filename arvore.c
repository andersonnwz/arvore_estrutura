
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
    printf("Notação Infixa\nO que e: É o formato tradicional que usamos no dia a dia escolar, onde o operador fica entre os operandos (X op Y)\nExemplo: A + B ou (A + B) * C\n\nNotação Pós-fixa (Notação Polonesa Reversa)\nO que e: É o formato onde o operador vem depois dos operandos (X Y op).\nExemplo: A expressão A + B vira AB +; a expressão (A + B) * C vira AB + C *.\nCaracterística: Não precisa de parênteses e é muito mais fácil e rápida para um computador calcular usando uma estrutura de dados do tipo pilha (stack), pois a ordem das operações é exatamente a sequência de leitura da esquerda para a direita.\n");
    return;
}