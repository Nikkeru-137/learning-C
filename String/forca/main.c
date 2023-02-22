#include <stdio.h>
#include <string.h>

int main() {
    char sorte[30] = "roma";

    int tam = strlen(sorte);

    char atual[tam+1];
//inicializando a palavra 'atual' com '_'
    for(int i = 0; i< tam; i++){
        atual[i] = '_';
    }

    //jogo

do{
    //imprimir status atual do jogo
    for(int i = 0; i< tam; i++){
        printf("%c ", atual[i]);
    }
    char letra;
    printf("\n\n> ");
    scanf("%c", letra);
    getchar();

    //verificar a letra digita na palavra 'sorte
    //se existir, deve-se substituir o '_' pela letra na variavel 'atual'

    for(int i = 0; i < tam; i++){
        if(letra == sorte[i]){
            atual[i] = letra;
        }
    }

}while(1);


}
