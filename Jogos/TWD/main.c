#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    char cenario[20][20];

    //iniciar matriz
    for(int l = 0; l < 20; l++){
        for(int c = 0; c < 20; c++){
            cenario[l][c] = '_';
        }
    }

    //iniciar rick
    int rickL = rand()%20;
    int rickC = rand()%20;

    cenario[rickL][rickC]='R';

    //iniciar zumbis
    for(int z = 1; z <= 15;){
        int zumbiL = rand()%20;
        int zumbiC = rand()%20;

        if(cenario[zumbiL][zumbiC] == '_'){
            cenario[zumbiL][zumbiC] = 'Z';
            z++;
        }
    }

    //iniciar obstaculos
    for(int o = 1; o <= 20;){
        int obstaculoL = rand()%20;
        int obstaculoC = rand()%20;

        if(cenario[obstaculoL][obstaculoC] == '_'){
            cenario[obstaculoL][obstaculoC] = '#';
            o++;
        }
    }

    //iniciar saida
    for(int s = 1; s <= 1;){
        int saidaL = rand()%20;
        int saidaC = rand()%20;

        if(cenario[saidaL][saidaC] == '_'){
            cenario[saidaL][saidaC] = 'S';
            s++;
        }
    }

    //iniciar balas
    for(int b = 1; b <= 10;){
        int balasL = rand()%20;
        int balasC = rand()%20;

        if(cenario[balasL][balasC] == '_'){
            cenario[balasL][balasC] = '.';
            b++;
        }
    }

    int balas=0;
    int vida=1;
    int esc=0;
    do{
printf("\n");
    //imprimir matriz
        for(int l = 0; l < 20; l++){
            for(int c = 0; c < 20; c++){
                printf("%c", cenario[l][c]);
            }
            printf("\n");
        }

        printf("\n balas de rick: %i", balas);

        char movimento;

        printf("\n>>>");
        scanf("%c", &movimento);
        getchar();


        switch(movimento){

            case 'w':
                if(rickL-1>=0 ){
                    if(cenario[rickL-1][rickC] != '#') {
                        if(cenario[rickL-1][rickC] == '.'){
                            balas++;
                        }
                        else if(cenario[rickL-1][rickC] == 'Z'){
                            if(balas == 0){
                                vida--;
                            }
                            else{
                                balas--;
                            }
                        }
                        else if(cenario[rickL-1][rickC] == 'S'){
                            esc++;
                        }
                        cenario[rickL][rickC] = '_';
                        rickL--;
                        cenario[rickL][rickC] = 'R';
                    }
                }
                break;

            case 'a':
                if(rickC-1>=0 ){
                    if(cenario[rickL][rickC-1] != '#') {
                        if(cenario[rickL][rickC-1] == '.'){
                            balas++;
                        }
                        else if(cenario[rickL][rickC-1] == 'Z'){
                            if(balas == 0){
                                vida--;
                            }
                            else{
                                balas--;
                            }
                        }
                        else if(cenario[rickL][rickC-1] == 'S'){
                            esc++;
                        }
                        cenario[rickL][rickC] = '_';
                        rickC--;
                        cenario[rickL][rickC] = 'R';
                    }
                }
                break;

            case 's':
                if(rickL+1 < 20){
                    if(cenario[rickL+1][rickC] != '#') {
                        if(cenario[rickL+1][rickC] == '.'){
                            balas++;
                        }
                        else if(cenario[rickL+1][rickC] == 'Z'){
                            if(balas == 0){
                                vida--;
                            }
                            else{
                                balas--;
                            }
                        }
                        else if(cenario[rickL+1][rickC] == 'S'){
                            esc++;
                        }
                        cenario[rickL][rickC] = '_';
                        rickL++;
                        cenario[rickL][rickC] = 'R';
                    }
                }
                break;

            case 'd':
                if(rickC+1 < 20 ){
                    if(cenario[rickL][rickC+1] != '#') {
                        if(cenario[rickL][rickC+1] == '.'){
                            balas++;
                        }
                        else if(cenario[rickL][rickC+1] == 'Z'){
                            if(balas == 0){
                                vida--;
                            }
                            else{
                                balas--;
                            }
                        }
                        else if(cenario[rickL][rickC+1] == 'S'){
                            esc++;
                        }
                        cenario[rickL][rickC] = '_';
                        rickC++;
                        cenario[rickL][rickC] = 'R';
                    }
                }
                break;

        }


    }while(vida==1 && esc==0);
if(vida==0) {
    printf("Rick morreu X(");
} else{
    printf("Rick escapou =)");
}
}
