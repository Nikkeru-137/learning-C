#include <stdio.h>

int main() {
    //Faça um programa que lê a quantidade de dias que o hóspede ficou no hotel e imprime o valor total a pagar.
    float dia, vf;
    printf("Digite quantos dias o hospede ficou no hotel: ");
    scanf("%f", &dia);
    if(dia<15){
        vf = (dia*50)+(15.3*dia);
        printf("O valor final a ser pago eh de: %.2f", vf);
    }
    else if(dia==15){
        vf = (dia*50)+(10*dia);
        printf("O valor final a ser pago eh de: %.2f", vf);
    }
    else{
        vf = (dia*50)+(8.5*dia);
        printf("O valor final a ser pago eh de: %.2f", vf);
    }
}
