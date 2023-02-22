#include <stdio.h>

int main() {
    //Escreva um programa em que uma variável recebe um valor lido entre 20 e 100. Imprima na tela o valor gerado, caso seja divisível por 3 e por 5.
    int n1;
    printf("Digite um numero entre 20 e 30: ");
    scanf("%i", &n1);
    if(n1 % 3 == 0 && n1 % 5 == 0){
        printf("%i", n1);
    }
    else{
        printf("Valor nao divisivel por 3 ou 5.");
    }
}
