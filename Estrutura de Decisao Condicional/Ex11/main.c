#include <stdio.h>

int main() {
    int op;
    float n1,n2,r;
    printf("Operacoes disponiveis:\n1.Soma + \n2.Subtracao -\n3.Divisao /\n4.Multiplicacao *\nEscolha uma para ser efetuada.");
    scanf("%i", &op);
    switch(op){
        case 1:
            printf("Digite dois valores para a soma: ");
            scanf("%f %f", &n1,&n2);
            r = n1+n2;
            printf("o resultado eh: %.2f", r);
            break;
        case 2:
            printf("Digite dois valores para a subtracao: ");
            scanf("%f %f", &n1,&n2);
            r = n1-n2;
            printf("o resultado eh: %.2f", r);
            break;
        case 3:
            printf("Digite dois valores para a divisao: ");
            scanf("%f %f", &n1,&n2);
            r = n1/n2;
            printf("o resultado eh: %.2f", r);
            break;
        case 4:
            printf("Digite dois valores para a multiplicacao: ");
            scanf("%f %f", &n1,&n2);
            r = n1*n2;
            printf("o resultado eh: %.2f", r);
            break;
    }
}
