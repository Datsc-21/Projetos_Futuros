#include <stdio.h>
#include <stdlib.h>

void menu_II(){ 
int op;
do{

    printf("\n==============================================");
    printf("\n|                                            |");
    printf("\n|           ESCOLHA UMA DAS OPCAO            |");
    printf("\n|                                            |");
    printf("\n|             1 - CLIENTES                   |");
    printf("\n|             2 - CURRICULOS                 |");
    printf("\n|             3 - VENDAS                     |");
    printf("\n|             0 - SAIR                       |");
    printf("\n|                                            |");
    printf("\n==============================================");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 0:
        break;
    
    default:
    printf("OPCAO INVALIDA!!!!");
        break;
    }

}while(op != 0);
}