#include <stdio.h>
#include <stdlib.h>

void main() {

    float nota01, nota02, nota03;
    printf("\n Digite os valores das tres notas do seu aluno");
    scanf("\n %f", &nota01);
    scanf("\n %f", &nota02);
    scanf("\n %f", &nota03);



    float soma = (nota01 + nota02 + nota03);
    float media = (soma / 3);

    if (media >= 7) {
        printf("\n O aluno foi aprovado com a media %f", media);
    } else {
        printf("\n O aluno foi reprovado com a media %f", media);
    }
}

