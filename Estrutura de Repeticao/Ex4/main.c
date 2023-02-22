#include <stdio.h>

int main() {
    int id, op, reg=0;
    float soma_id, ex=0, bom=0;
    for(int i=1; i<=5; i++){
    printf("Digite sua idade:");
    scanf("%i", &id);
    printf("\nInforme sua opiniao sobre o filme"
           "\n1.Excelente;"
           "\n2.Bom;"
           "\n3.Regular."
           "\nSua avaliacao:");
    scanf("%i", &op);
    switch(op){
        case 1:
            soma_id += id;
            ex += 1;
            break;
        case 2:
            bom += 1;
            printf("%i", bom);
            break;
        case 3:
            reg +=1;
            break;
        default:
            printf("Opcao invalida");
            break;
    }
    }
    printf("\nA media da idade das pessoas que responderam excelente eh: %.2f"
           "\nA quantidade de pessoas que responderam regular eh: %i"
           "\nA porcentagem de pessoas que responderam bom entre todos os expectadores analisados eh: %.2f", soma_id/ex, reg, (bom*100)/5);
}
