#include <stdio.h>

int main( )
{
    //Faça um programa que lê 2 valores A e B (inteiros) e informa se A é divisível por B ou não.
    int a,b,r;
    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &a, &b);
    if(a % b == 0){
        printf("A eh divisivel por B!");
    }
    else{
        printf("A nao eh divisivel por B!");
    }
}
