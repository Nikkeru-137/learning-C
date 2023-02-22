#include <stdio.h>

int main() {
    int hab, fil, fils = 0;
    float sal, soma_sal=0, soma_fil, maior=-1, menor=1000000, med_fil;
    printf("Digite quantos habitantes serao cadastrados:");
    scanf("%i", &hab);

    for(int i = 1; i<=hab; i++){
        printf("\nDigite o salario e a quantidade de filhos do habitante %i:", i);
        scanf("%f %i", &sal, &fil);
        soma_sal += sal;
        soma_fil += fil;
        if(sal>maior){
            maior = sal;
        }
        if(sal<menor){
            menor = sal;
        }
        if(fil>2){
            fils += 1;
        }
    }
    med_fil = (fils*100)/hab;
    printf("\nA media do salario da populacao eh: %.2f"
           "\nA media do numero de filhos eh: %.2f"
           "\nO maior salario eh: %.2f e o menor eh: %.2f"
           "\nO percentual de habitantes com mais de dois filhos eh: %.2f%", soma_sal/hab, soma_fil/hab, maior, menor, med_fil);
}
