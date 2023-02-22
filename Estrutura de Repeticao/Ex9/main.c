#include <stdio.h>

int main(void) {
    int x=1;
    printf("Boas Vindas:\n");
    while(x!=3){
        printf("\n1-Imprimir \"Ola\";\n2-Imprimir \"Bem vindo!\";\n3-Sair do algoritmo;\n");
        scanf("%i", &x);
        switch(x){
            case 1:
                printf("\nOla\n");
                break;
            case 2:
                printf("\nBem vindo!\n");
                break;
            case 3:
                x=3;
        }
    }
}