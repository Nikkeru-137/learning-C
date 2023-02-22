#include <stdio.h>

int main(void) {
  int x,y,z=0,c=1,d=0, proxnum, ant, atu;
  printf("\nDigite um numero, irei te dizer seu correspondente na sequencia de Fibonacci:\n");
  scanf("%i", &z);
  ant = 0;
  atu = 1;
  while(c<z){
   proxnum = ant + atu;
  ant = atu;
  atu = proxnum;
    c++;
  }
  printf("%i", proxnum);
}