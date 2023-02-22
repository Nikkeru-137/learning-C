#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char fraseC[100];
    char fraseD[100];
    int code, op;
    char resp='s';

    while(resp=='s') {
        printf("Deseja codificar(1) ou decodificar(2) uma frase? ");
        scanf("%i", &op);
        getchar();
        switch(op) {
            case 1:
                printf("\nDigite uma frase para ser codificada de acordo com a Cifra de Cesar: ");
                scanf("%[^\n]s", fraseC);
                getchar();
                code=0;
                printf("\nDigite quantos digitos deseja usar para codificar a frase: ");
                scanf("%i", &code);
                getchar();
                for (int i = 0; i < strlen(fraseC); i++) {
                    if (fraseC[i] == 'x') {
                        fraseC[i] = toupper('A');
                    } else if (fraseC[i] == 'y') {
                        fraseC[i] = toupper('B');
                    } else if (fraseC[i] == 'z') {
                        fraseC[i] = toupper('C');
                    } else if (fraseC[i] == ' ') {
                        fraseC[i] = toupper(' ');
                    } else {
                        fraseC[i] = toupper(fraseC[i] + code);
                    }
                }
                printf("\nA frase codificada ficou assim: %s", fraseC);
            break;
            case 2:
                printf("\nDigite uma frase para ser decodificada de acordo com a Cifra de Cesar: ");
                scanf("%[^\n]s", fraseD);
                getchar();
                code=0;
                printf("\nDigite quantos digitos deseja usar para decodificar a frase: ");
                scanf("%i", &code);
                getchar();
                for (int i = 0; i < strlen(fraseD); i++) {
                    if (fraseD[i] == 'a') {
                        fraseD[i] = toupper('X');
                    } else if (fraseD[i] == 'b') {
                        fraseD[i] = toupper('Y');
                    } else if (fraseD[i] == 'c') {
                        fraseD[i] = toupper('Z');
                    } else if (fraseD[i] == ' ') {
                        fraseD[i] = toupper(' ');
                    } else {
                        fraseD[i] = toupper(fraseD[i] - code);
                    }
                }
                printf("\nA frase codificada ficou assim: %s", fraseD);
                break;
        }
        printf("\nDeseja realizar outra operacao? Utilize s ou n: ");
        scanf("%c", &resp);
        getchar();
    }
}
