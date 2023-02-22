#include <stdio.h>

int main() {
    float a,b,c;
    printf("Digite 3 valores, para A, B e C: ");
    scanf("%f %f %f", &a,&b,&c);
    if((a+b)<c || (a+c)<b || (b+c)<a){
printf("Nao eh um triangulo");
    }
    else if(a==b && a==c){
printf("Triangulo Equilatero");
    }
    else if(a==b || a==c || b==c){
        printf("Triangulo Isosceles");
    }
    else{
        printf("Triangulo Escaleno");
    }
}
