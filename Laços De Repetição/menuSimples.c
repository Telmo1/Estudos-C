#include <stdio.h>
#include <stdlib.h>


void main(){

    int opcao1;

    while(opcao1 < 1 || opcao1 > 3){
        printf("\nEscolha uma opcao \n");
    printf("\n1- Opcao 01");
    printf("\n2- Opcao 02");
    printf("\n3- Opcao 03\n\n");

    scanf("%d", &opcao1);

    switch(opcao1){
        case 1:
        printf("\n Opcao 1 foi escolhida");
        break;

         case 2:
        printf("\n Opcao 2 foi escolhida");
        break;

         case 3:
        printf("\n Opcao 3 foi escolhida");
        break;

        default:
            printf("Opcao invalida");
            break;

    }
    }




}
