#include "arvore.h"

int main(){

    printf ("\n++++++++++++++++++++++++++++++++\n        Arvore Aritmetica\n++++++++++++++++++++++++++++++++\n");

    int user=4;
    do{
    
        printf("Escolha sua Notacao Matematica:\n1-> Notacao Infixa\n2-> Notacao Pos-fixa (Notacao Polonesa Reversa)\n3-> Descricao sobre cada opcao\n0->Sair\n>> ");
        scanf("%d",&user);
        switch (user){
        case 1:
            printf("\nNotacao Infixa selecionada\nInsira sua conta\n>>  ");
            Infixo();
        break;
        case 2:
            printf("\nNotacao Pos-fixa selecionada\nInsira sua conta\n>>  ");
        break;
        case 3:
            descricaoopcao();
        break;
        default:
            printf("Entrada Invalida.\n");
            break; 
        }
    }while(user!=0);
    
}