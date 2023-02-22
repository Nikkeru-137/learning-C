#include <stdio.h>
#include <math.h>
int main(void) {

  int a[6];
  int soma;
  int quadrado;

  a[0] = 1;
  a[1] = 0;
  a[2] = 5;
  a[3] = -2;
  a[4] = -5;
  a[5] = 7;

  soma = a[0] + a[1] + a[5];
  printf("A soma eh: %i", soma);

  a[4] = 100;

  quadrado =  (pow(a[3], 2)) + (pow(a[5], 2));
  printf("\nA soma do quadrado da posicao 3 e 5 eh: %i\n", quadrado);

for(int i =0; i<6; i++){
  printf("%i\n", a[i]);
}
}