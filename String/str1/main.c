#include <stdio.h>
#include <string.h>
int main() {
    char mensagem[10] = "Ola mundo";

    char nome[30];
    //char msg[] = "hi everyone";se ja for definido o texto direto, nao eh necessario informar o tamanho no vetor
    //nesse caso ele tera 12 espacos, 11 de caracteres e 1 para o \0(indica fim do vetor, ou algo assim)

    printf("%s", mensagem);
    printf("Digite seu nome: ");
    scanf("%s", nome); //vetor de string nao precisa de &nomevariavel, algo a ver com ponteiros

    scanf("%[^\n]s", nome);//com mais de uma palavra, quando usa o espaco o scanf nao funciona, pega apenas a primeira palavra, precisa desse "codigo" para funcionar
    //puts(mensagem);//printf para strings, porem nao permite formatar o texto
   //fgets(mensagem, 5, stdin);outra forma de ler string

   char texto[30];

   for(int i=0; i<30; i++){
       scanf("%c", &texto);
       getchar();
   }

   //nao eh possivel alterar o texto da string se ele tiver sido declarado explicitamente, como char texto[50] = "oi";, nao tem como alterar depois disso
   //strcpy(nome, "ola mundo"); funcao do <string.h>


//String.h

//strcpy(nomestring, "texto") serve para copiar ou alterar o texto de uma string

//strcat(nome, nome2)  serve para concatenar strings, junta as duas e armazena na primeira

//strcmp(nome, nome2) => 0 sao iguais
//strcmp(nome, nome2) => <0 nome vem antes alfabeticamnte que o nome2
//strcmp(nome, nome2) => >0 nome vem alfabeticamente apos que o nome2
//int tam = strlen(nome); serve para saber o quantos caracteres tem antes do \0



}
