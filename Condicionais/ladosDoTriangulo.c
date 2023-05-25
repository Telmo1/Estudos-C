#include <stdio.h>
#include <stdlib.h>

void main(){

    float lado1, lado2, lado3;

    printf("Digite a entrada dos valores para verificacao");
    scanf("\n %f", &lado1);
    scanf("\n %f", &lado2);
    scanf("\n %f", &lado3);

    if (lado1 == lado2 && lado1 == lado3){
        printf("Temos um triangulo equilatero \n");
    }
     else if(lado1 == lado2 || lado1 == lado3) {
        printf("Temos um triangulo isosceles \n");
    }else if (lado2 == lado3) {
        printf("Temos um triangulo isosceles \n");
    }else{
        printf("O triangulo e escaleno");
    }

      //Pausa o programa após executar
    system("pause");
}
