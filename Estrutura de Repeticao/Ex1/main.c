#include <stdio.h>

int main() {
    float num, num_val = 0, soma;
    for(int i = 1; i<=10; i++){
        printf("Digite um numero:");
        scanf("%f", &num);
        if(num>0){
            num_val++;
            soma += num;
        }
    }
    printf("A media dos valores positivos digitados eh: %f", soma/num_val);
}
