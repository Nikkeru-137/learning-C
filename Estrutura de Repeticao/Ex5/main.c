#include <stdio.h>

int main() {
    int num, x=0;
    printf("Digite um numero:");
    scanf("%i", &num);
    for(int i=2; i<num; i++) {
        if (num % i == 0) {
            x++;
            break;
        }
    }
    if(x==1){
        printf("Numero nao eh primo");
    }
    else{
        printf("numero eh primo");
    }
}
