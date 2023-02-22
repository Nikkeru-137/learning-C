#include <stdio.h>
#include <string.h>
#include <string.h>
int main() {

    char nome[30];
    int idade;
    int maiorIdade=-1;
    char nomeMaiorIdade[30];
    int menorIdade=1000;
    char nomeMenorIdade[30];

    do
    {
        printf("Digite a sua idade e nome: ");
        scanf("%i %s", &idade, nome);
        getchar();
        printf("\n");

        if(idade > maiorIdade && idade > 0){
            maiorIdade = idade;
            strcpy(nomeMaiorIdade, nome);
        }

        if(idade < menorIdade && idade > 0){
            menorIdade = idade;
            strcpy(nomeMenorIdade, nome);
        }

    }while(idade > 0);

    printf("%s tem %i anos e eh a pessoa mais velha", nomeMaiorIdade, maiorIdade);
    printf("\n%s tem %i anos e eh a pessoa mais nova", nomeMenorIdade, menorIdade);


    return 0;
}