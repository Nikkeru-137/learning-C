#include <stdio.h>

int main(void) {
    int x,y;

    for(x=1;x<=5;x++){
        printf("x");
    }
    printf("\n");
    for(x=1;x==1;x++){
        printf("0");
        for(y=1;y<=4;y++){
            printf("x");
        }
    }
    printf("\n");
    for(x=1;x<=2;x++){
        printf("0");
        if(x==2){
            for(y=1;y<=3;y++){
                printf("x");
            }
        }
    }
    printf("\n");
    for(x=1;x<=3;x++){
        printf("0");
        if(x==3){
            for(y=1;y<=2;y++){
                printf("x");
            }
        }
    }
    printf("\n");
    for(x=1;x<=4;x++){
        printf("0");
        if(x==4){
            for(y=1;y<=1;y++){
                printf("x");
            }
        }
    }
    printf("\n");
    for(x=1;x<=5;x++){
        printf("0");
    }
}
