#include <stdio.h>

int main(void) {
float vet[8];
int x, y;  
  for(int i=0; i<8; i++){
    printf("\nDigite um valor para o vetor na posição %i: ", i);
    scanf("%f", &vet[i]);
    getchar();
    printf("%f", vet[i]);
  }
  printf("\nDigite dois valores entre 0 e 7: ");
  scanf("%i %i", &x, &y);
  getchar();

  printf("\nA soma das posicoes %i e %i eh: %.2f", x, y, vet[x]+vet[y]);
}