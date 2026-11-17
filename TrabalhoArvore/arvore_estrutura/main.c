#include "arvore.h"

int main(){

    printf ("\n++++++++++++++++++++++++++++++++\n        Arvore Aritmetica\n++++++++++++++++++++++++++++++++\n");

    int user=4;
    do{
        printf("Calculadora 0.1\n");
        printf("Escolha sua Notacao Matematica:\n1-> Notacao Infixa\n2-> Notacao Pós-fixa (Notacao Polonesa Reversa)\n3-> Descricao sobre cada opcao\n0->Sair\n>>");
        scanf("%d",&user);
        switch (user)
        {
        case '1':
            
        break;
        case '2':

        break;
        case '3':
            descricaoopcao();
        break;
        default:
            printf("Entrada Invalida.\n");
            break;
        }
    }while(user==0);
    
}