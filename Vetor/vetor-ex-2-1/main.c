#include <stdio.h>
#include <math.h>
#include <time.h>
int main(void) {
  srand(time(NULL));
  int vet[100];
  int num, qtd=0;
  for(int i=0; i<100; i++){
    vet[i]=rand()%11;
  }
printf("Digite um valor entre 0 e 10: ");
  scanf("%i", &num);

  for(int i=0; i<100; i++){
    if(vet[i]==num){
      qtd++;
    }

  }
  printf("O numero %i foi repetido %i vezes", num, qtd);
}