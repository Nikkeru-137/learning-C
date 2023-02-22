#include <stdio.h>

int main(void) {
    int num,x;
    printf("Digite um numero para exibicao de sua tabuada:\n");
    scanf("%i", &num);
    for(x=1; x<=10; x++){
        printf("%i * %i = %i\n", num,x, x*num);
    }
}