#include <stdio.h>

int main(void) {
int  vet[10];
  for(int i=0; i<10; i++){
    printf("\nDigite um valor para o vetro na posicao %i: ", i);
    scanf("%i", &vet[i]);
    getchar();
    if(vet[i]<0){
      vet[i]=0;
    }
    printf("esse eh o numero: %i", vet[i]);
  }
}