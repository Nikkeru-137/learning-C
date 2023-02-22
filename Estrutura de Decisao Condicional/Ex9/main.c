#include <stdio.h>

int main() {
    //Criar um algoritmo que entre com a idade de uma pessoa e imprimir o valor que ela deverá pagar.
    int id;
    printf("Digite sua idade: ");
    scanf("%i", &id);
    if(id>65){
        printf("Voce ira pagar 400 reais");
    }
    else if(59<id && id<=65){
printf("Voce ira pagar 250 reais");
    }
    else if(45<id && id<=59){
        printf("Voce ira pagar 150 reais");
    }
    else if(29<id && id<=45){
        printf("Voce ira pagar 120 reais");
    }
    else if(10<id && id<=29){
        printf("Voce ira pagar 60 reais");
    }
    else if(id<=10){
        printf("Voce ira pagar 30 reais");
    }
}
