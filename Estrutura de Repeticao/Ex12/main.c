#include <stdio.h>

int main(void) {
  int x,y=0,charrest=3,tenta1=1,tenta2=1,tenta3=1,ac=0;
  char letra[3],resp;
  printf("\nDigite 3 caracteres diferentes para o jogo de adivinhacao:\n");
  for(x=0; x<3; x++){
    scanf("%c", &letra[x]);
  }//tentativas

for(x=0; x<3; x++){
    printf("%c", letra[x]);
  }

  for(y=1; y<=15; y++){
    printf("\nDigite o caractere para o teste:\n");
    resp = ' ';
    scanf("%c\n", &resp);
    if(resp==letra[0] && tenta1==1){
      tenta1=0;
      charrest=charrest-1;
      printf("\nVoce Acertou! restam apenas %i caracteres\n", charrest);
      printf("%c", resp);
      ac=ac+1;
    }
    else if(resp==letra[1] && tenta2==1){
      tenta2=0;
      charrest=charrest-1;
      printf("\nVoce Acertou! restam apenas %i caracteres\n", charrest);
      printf("%c", resp);
      ac=ac+1;
    }
    else if(resp==letra[2] && tenta3==1){
      tenta3=0;
      charrest=charrest-1;
      printf("\nVoce Acertou! restam apenas %i caracteres\n", charrest);
      printf("%c", resp);
      ac=ac+1;
    }
    else{
      printf("\nVoce errou! Restam apenas %i tentativas e %i caracteres\n", 15-y, charrest);
    printf("%c", resp);
      }
    if(ac==3){
      y=16;
    }
  }
}
