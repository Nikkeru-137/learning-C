#include <stdio.h>

int main() {
    int cod,qtd;
    float vf;
    printf("Especificacao    Codigo   Preco\n"
           "Cachorro Quente  100      1.20\n"
           "Bauru Simples    101      1.30\n"
           "Bauru com Ovo    102      1.50\n"
           "Hamburguer       103      1.20\n"
           "Cheeseburguer    104      1.30\n"
           "Refrigerante     105      1.00\n"
           "\nDigite o codigo do item que deseja comprar e a quantidade que deseja: ");
    scanf("%i %i", &cod,&qtd);
    switch(cod){
        case 100:
            vf=qtd*1.2;
            printf("O valor final a ser pago eh: %.2f", vf);
            break;
        case 101:
            vf=qtd*1.3;
            printf("O valor final a ser pago eh: %.2f", vf);
            break;
        case 102:
            vf=qtd*1.5;
            printf("O valor final a ser pago eh: %.2f", vf);
            break;
        case 103:
            vf=qtd*1.2;
            printf("O valor final a ser pago eh: %.2f", vf);
            break;
        case 104:
            vf=qtd*1.3;
            printf("O valor final a ser pago eh: %.2f", vf);
            break;
        case 105:
            printf("O valor final a ser pago eh: %i", qtd);
            break;
    }
}
