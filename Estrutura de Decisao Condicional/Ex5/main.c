#include <stdio.h>

int main() {
    //Escreva um programa que peça 3 notas (reais) para o usuários. Imprima “voce passou”,
    // caso a média das notas seja maior ou igual a 7; caso contrário, imprima “voce nao passou”.
    float n1, n2, n3, m;
    printf("Digite 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    m = (n1+n2+n3)/3;
    if(m>= 7){
        printf("Voce passou!");
    }
    else{
        printf("Voce nao passou");
    }
}
