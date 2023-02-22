#include <stdio.h>

int main() {
    int id,op;
    printf("Digite sua idade: ");
    scanf("%i", &id);
    printf("Filmes em cartaz: \n1.Titanic(16 anos)\n2.Pica Pau(Livre)\n3.A Volta de Jason(18 anos)\n4.Desistir\nDigite o filme que deseja comprar: ");
    scanf("%i", &op);
    switch(op){
        case 1:
            if(id>=16){
                printf("Voce comprou o filme Titanic. Bom filme!");
            }
            else{
                printf("Voce nao tem idade para assistir ao filme.");
            }
            break;
        case 2:
            printf("Voce comprou o filme Pica Pau. Bom filme!");
            break;
        case 3:
            if(id>=18){
                printf("Voce comprou o filme A Volta de Jason. Bom filme!");
            }
            else{
                printf("Voce nao tem idade para assistir ao filme.");
            }
            break;
    }
}
