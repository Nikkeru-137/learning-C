#include <stdio.h>

int main() {
    //Entrar com sexo (caracter ‘m’ para masculino e ‘f’ para feminino) e idade de uma pessoa.
    // Se a pessoa for do sexo feminino e tiver menos de 25 anos, imprimir a mensagem: ACEITA.
    // Caso contrário, imprimir a mensagem: NÃO ACEITA
    char s;
    int id;
    printf("Digite seu sexo (m ou f) e sua idade: ");
    scanf("%c %i", &s, &id);
    if(s == 'f' && id<25){
        printf("ACEITA");
    }
    else{
        printf("NAO ACEITA");
    }
}
