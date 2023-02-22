#include <stdio.h>

int main(void) {
    int s=2099,sd,x,y=1;
    for(x=1; x<=3; x++){
        printf("\nDigite a senha de acesso\n");
        scanf("%i", &sd);
        if(sd==s){
            printf("\nSenha Correta");
            x=4;
        }
        else{
            printf("\nSenha Incorreta\n");
            y++;
        }
        if(y>3){
            printf("\nAcesso Bloqueado");
        }
    }
}