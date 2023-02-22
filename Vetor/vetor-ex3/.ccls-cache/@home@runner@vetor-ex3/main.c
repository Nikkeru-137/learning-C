#include <stdio.h>

int main(void) {
  int vet[6];
  int x=1;
  for(int i=0; i<6;){
    printf("Digite um valor par para o vetor na posicao %i: ", i);
    scanf("%i", &vet[i]);
    getchar();
    /*if(vet[i]%2!=0){
      x=0;
      while(x==0){
      printf("Valor digitado nao eh par, digite novamente: ");
      scanf("%i", &vet[i]);
      if(vet[i]%2==0){
        x=1;
      }
        }
    }*/
    if(vet[i]%2==0){
      i++;
    }
    
  }
  for(int i=0; i<6; i++){
    printf("%i\n", vet[i]);
  }
}