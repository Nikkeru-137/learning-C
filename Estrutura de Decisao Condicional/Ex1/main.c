#include <stdio.h>

int main() {
    //1- Elaborar um programa em linguagem C para somar dois números inteiros e mostrar o valor da soma na tela.
    // Você só deve imprimir a mensagem se a soma dos números for maior que 10.
    int n1,n2,s;
    printf("Digite dois numeros inteiro para a soma: ");
    scanf("%i %i", &n1,&n2);
    s=n1+n2;
if(s>10){
    printf("O resultado da soma eh: %i", s);
}
else{
printf("O resultado da soma eh inferior a 10, portanto nao sera exibido!");
}
}
