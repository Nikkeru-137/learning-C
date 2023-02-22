#include <stdio.h>

int main() {
    int num, soma;
    printf("Digite um numero:");
    scanf("%i", &num);
    for(int i = 1; i<num; i++){
        if(num % i == 0){
            soma += i;
        }
    }
    printf("\nA soma dos divisores de %i eh %i", num, soma);
}
