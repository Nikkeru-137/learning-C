#include <stdio.h>

int main() {
    //Uma empresa deseja dar 20% de aumento para aqueles funcionários que possuem salário menor ou igual a R$1000,00
    // e um aumento de 10% para aqueles que possuem salários maiores que R$1000,00
    //Escreva um programa que pede para o usuário digitar o seu salário. Imprima seu novo salário na tela.
    float sal, nsal;
    printf("Digite seu salario: ");
    scanf("%f", &sal);
    if(sal<=1000.00){
        nsal = sal + (sal * 0.2);
        printf("Novo salario: %.2f", nsal);
    }
    else{
        nsal = sal + (sal * 0.1);
        printf("Novo salario: %.2f", nsal);
    }
}
