#include <stdio.h>

int main( ){
    int resp=1, num, maior=-100000, menor=100000;
    float med_num, soma=0, qtd_num=0, med_par, soma_par=0, num_par=0;
    while(resp==1){
        printf("\nDigite um numero(Digite 0 para encerrar):");
        scanf("%i", &num);
        if(num==0){
            resp=0;
        }
        else{
            soma += num;
            qtd_num++;
            if(num>maior){
                maior = num;
            }
            if(num<menor){
                menor = num;
            }
            if(num % 2 == 0){
                num_par++;
                soma_par += num;
            }
        }
    }
    med_num = soma/qtd_num;
    med_par = soma_par/num_par;
    printf("\nA soma dos numeros digitados eh: %.2f"
           "\nA quantidade de numeros digitados eh: %.2f"
           "\nA media dos numeros digitados eh: %.2f"
           "\nO maior numero digitado eh: %i"
           "\nO menor numero digitado eh: %i"
           "\nA media dos numeros pares eh: %.2f", soma, qtd_num, med_num, maior, menor, med_par);
}
