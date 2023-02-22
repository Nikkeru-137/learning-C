#include <stdio.h>
#include <time.h>
int main(void) {
  srand(time(NULL));
  int vet[10];
  int vetimp[10];
  for(int i=0; i<10;i++){
    vet[i]=rand()%51;
  }
  
}