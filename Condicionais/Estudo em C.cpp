#include <stdio.h>
#include <stdlib.h>

float valor01;
float valor02;
float valorAbs;

int main() {
  printf("Insira o primeiro valor:");
  scanf("%f", &valor01);
  printf("Insira o segundo valor:");
  scanf("%f", &valor02);
  valorAbs = (valor01 - valor02);
  printf("O valor absoluto e %f", abs(valorAbs));
  return 0;

}
