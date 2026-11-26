#include "arvore.h"

caracterconta* criar_no(char c) {
    caracterconta *novo = (caracterconta *)malloc(sizeof(caracterconta));
    if (novo != NULL) {
        novo->Caracter = c;
        novo->proxCaracter = NULL;
    }
    return novo;
}

void liberar_lista(caracterconta *inicio) {
    caracterconta *atual = inicio;
    while (atual != NULL) {
        caracterconta *proximo = atual->proxCaracter;
        free(atual);
        atual = proximo;
    }
}

void iniciarcontaInfiso(conta *containteira) {
    containteira->comeco = NULL;
    containteira->fim = NULL;
}

bool lernumIn(char temp) {
    return isdigit((unsigned char)temp);
}

void calculoInfixo(int i, char temp[500], caracterconta *atual, conta *c) {
    if (temp[i] == '\0') {
        if (c->fim != NULL && i > 0) {
            c->fim->Caracter = temp[i - 1];
        }
        return;
    }

    if (temp[i] == ' ') {
        calculoInfixo(i + 1, temp, atual, c);
        return;
    }

    if (lernumIn(temp[i]) ||
        temp[i] == '/' || temp[i] == '*' || temp[i] == '-' || temp[i] == '+' ||
        temp[i] == '(' || temp[i] == ')' || temp[i] == '{' || temp[i] == '}' ||
        temp[i] == '[' || temp[i] == ']') {

        caracterconta *novo = criar_no(temp[i]);
        if (novo == NULL) {
            return;
        }

        if (c->comeco == NULL) {
            c->comeco = novo;
            c->fim = novo;
        } else {
            atual->proxCaracter = novo;
            c->fim = novo;
        }

        calculoInfixo(i + 1, temp, novo, c);
        return;
    }

    calculoInfixo(i + 1, temp, atual, c);
}

void Infixo() {
    char temp[500];
    conta c;

    iniciarcontaInfiso(&c);

    if (scanf(" %499[^\n]", temp) == 1) {
        calculoInfixo(0, temp, c.comeco, &c);
    }

    liberar_lista(c.comeco);
}