#include <stdio.h>
#include "stdlib.h"
#include "time.h"
int main() {
    srand(time(NULL));
    int ini,fim,sor,resp=1;
    while(resp==1){
    printf("Digite o intervalo de valores do sorteio(primeiro numero-ultimo numero): ");
    scanf("%i-%i", &ini, &fim);

    sor = ini + rand() % (fim+1);
    printf("O valor sorteado foi: %i", sor);

    printf("\nDeseja sortear outro numero?\n1-Sim\n2-Nao");
    scanf("%i", &resp);
    }
}
