#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    int multi;

    printf("Digite tres numeros separados por espaco\n");

    scanf("%d %d %d", &numero1, &numero2, &numero3);
    multi = numero1 * numero2 * numero3;
    printf("O resultado da multiplicacao e %d \n", multi);


}
