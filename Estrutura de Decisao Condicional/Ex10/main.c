#include <stdio.h>

int main() {
    float n1, n2, n3, med, n4;
    printf("Digite as 3 notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    med = (n1+n2+n3)/3;
    if(med<=4){
        printf("Esta reprovado.");
    }
    else if(4<=med && med<7){
printf("Esta de recuperacao");
printf("\nDigite a nota da recuperacao: ");
scanf("%f", &n4);
if((med+n4)/2>=5){
    printf("Esta aprovado");
}
else{
    printf("Esta reprovado");
}
    }
    else if(med>=7){
        printf("Esta aprovado.");
    }
}
