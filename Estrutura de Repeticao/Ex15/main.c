#include <stdio.h>

int main() {
    int tam;
    printf("Digite o tamanho do quadrado: ");
    scanf("%i", &tam);
printf("\n");
    for(int ln = 1; ln<=tam; ln++){
        for(int col=1; col<=tam; col++){
            if(ln==col){
                printf("x");
            }
            else if(col+ln==tam+1){
                printf("x");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
