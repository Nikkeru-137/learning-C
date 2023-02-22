#include <stdio.h>

int main(void) {
    int x=1,y=1,prod;
    float valor;
    printf("---Caixa de Supermercado---\n");
    while(x!=404){
        printf("\n1-Feijao - R$2.00\n2-Arroz  - R$1.5\n3-Carne  - R$10.0\n4-Tomate - R$3.0\n5-Cebola - R$2.5\n");
        while(y!=0){
            scanf("%i", &prod);
            switch(prod){
                case 1:
                    valor = valor + 2;
                    break;
                case 2:
                    valor = valor + 1.5;
                    break;
                case 3 :
                    valor = valor + 10;
                    break;
                case 4 :
                    valor = valor + 3;
                    break;
                case 5:
                    valor = valor + 2.5;
                    break;
            }
            printf("\nMais algum item? (Use 1 para sim e 0 para nao)\n");
            scanf("%i", &y);
        }
        printf("\nValor final: %.2f\n", valor);
        valor = 0;
        y = 1;
        printf("\nDeseja fechar o caixa? (Use 404 para sim e 400 para nao)\n");
        scanf("%i", &x);
    }
}