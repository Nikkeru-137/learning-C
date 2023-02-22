#include <stdio.h>

int main(void) {
    float r, xc, yc, xp, yp, res;//raio, xcircunferencia, ycircunferencia, xponto, yponto
    printf("Digite 3 valores reais, um para o raio da circunferência, o segundo para o x e o terceiro para o y: ");
    scanf("%f %f %f", &r,&xc,&yc);
    printf("Digite mais dois valores, um para o x do ponto e outro para o y: ");
    scanf("%f %f", &xp,&yp);
    res = (xp+xc)*(xp+xc)+(yp+yc)*(yp+yc);
    if(res<=r){
        printf("\nO ponto pertence a circunferência.");
    }
    else{
        if(res>r){
            printf("\nO ponto está fora da circunferência.");
        }
    }
}