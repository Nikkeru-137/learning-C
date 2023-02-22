#include <stdio.h>

int main(void) {
    int id, op, dr, qu;//idade, opção, drink, quantidade
    float val, valf;//valor, valor final
    printf("Informe a sua idade: \n");
    scanf("%i", &id);
    if(id<18){
        printf("Voce eh menor de idade e nao pode comprar bebidas!");
    }
    else{
        printf("\n1. Whisky\n2. Vodka\n3. Cerveja\n4. Cachaca\nUtilize o numero referente a cada bebida.\n");
        scanf("%i", &op);
        if(op>4 || op<1){
            printf("Opcao invalida");
        }
        else{
            switch(op){
                case 1:
                    printf("\nCodigo Nome      Preco\n100    Whisky 1  200\n101    Whisky 2  150\n102    Whisky 3  140\n");
                    printf("\nDigite qual bebida deseja(Utilize o Codigo) e a quantidade desejada: \n");
                    scanf("%i %i", &dr,&qu);
                    if(qu<1){
                        printf("Quantidade Invalida");
                    }
                    switch(dr){
                        case 100:
                            if(qu<5){
                                val = qu*200;
                                printf("Whisky 1 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*200);
                                    valf = val-(val*0.1);
                                    printf("Whisky 1 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*200);
                                        valf = val-(val*0.3);
                                        printf("Whisky 1 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*200);
                                        valf = val-(val*0.35);
                                        printf("Whisky 1 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                        case 101:
                            if(qu<5){
                                val = qu*150;
                                printf("Whisky 2 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*150);
                                    valf = val-(val*0.1);
                                    printf("Whisky 2 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*150);
                                        valf = val-(val*0.3);
                                        printf("Whisky 2 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*150);
                                        valf = val-(val*0.35);
                                        printf("Whisky 2 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                        case 102:
                            if(qu<5){
                                val = qu*140;
                                printf("Whisky 3 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*140);
                                    valf = val-(val*0.1);
                                    printf("Whisky 3 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*140);
                                        valf = val-(val*0.3);
                                        printf("Whisky 3 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*140);
                                        valf = val-(val*0.35);
                                        printf("Whisky 3 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                    }
                    break;
                case 2:
                    printf("\nCodigo Nome     Preco\n200    Vodca 1  60\n201    Vodca 2  40\n202    Vodca 3  30\n");
                    printf("\nDigite qual bebida deseja(Utilize o Codigo) e a quantidade desejada: \n");
                    scanf("%i %i", &dr,&qu);
                    if(qu<1){
                        printf("Quantidade Invalida");
                    }
                    switch(dr){
                        case 200:
                            if(qu<5){
                                val = qu*60;
                                printf("Vodca 1 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*60);
                                    valf = val-(val*0.1);
                                    printf("Vodca 1 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*60);
                                        valf = val-(val*0.3);
                                        printf("Vodca 1 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*60);
                                        valf = val-(val*0.35);
                                        printf("Vodca 1 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                        case 201:
                            if(qu<5){
                                val = qu*40;
                                printf("Vodca 2 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*40);
                                    valf = val-(val*0.1);
                                    printf("Vodca 2 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*40);
                                        valf = val-(val*0.3);
                                        printf("Vodca 2 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*40);
                                        valf = val-(val*0.35);
                                        printf("Vodca 2 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                        case 202:
                            if(qu<5){
                                val = qu*30;
                                printf("Vodca 3 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*30);
                                    valf = val-(val*0.1);
                                    printf("Vodca 3 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*30);
                                        valf = val-(val*0.3);
                                        printf("Vodca 3 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*30);
                                        valf = val-(val*0.35);
                                        printf("Vodca 3 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                    }
                    break;
                case 3:
                    printf("\nCodigo Nome       Preco\n300    Cerveja 1  1.5\n301    Cerveja 2  2.0\n302    Cerveja 3  3.0\n");
                    printf("\nDigite qual bebida deseja(Utilize o Codigo) e a quantidade desejada: \n");
                    scanf("%i %i", &dr,&qu);
                    if(qu<1){
                        printf("Quantidade Invalida");
                    }
                    switch(dr){
                        case 300:
                            if(qu<5){
                                val = qu*1.5;
                                printf("Cerveja 1 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*1.5);
                                    valf = val-(val*0.1);
                                    printf("Cerveja 1 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*1.5);
                                        valf = val-(val*0.3);
                                        printf("Cerveja 1 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*1.5);
                                        valf = val-(val*0.35);
                                        printf("Cerveja 1 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                        case 301:
                            if(qu<5){
                                val = qu*2;
                                printf("Cerveja 2 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*2);
                                    valf = val-(val*0.1);
                                    printf("Cerveja 2 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*2);
                                        valf = val-(val*0.3);
                                        printf("Cerveja 2 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*2);
                                        valf = val-(val*0.35);
                                        printf("Cerveja 2 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                        case 302:
                            if(qu<5){
                                val = qu*3;
                                printf("Cerveja 3 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*3);
                                    valf = val-(val*0.1);
                                    printf("Cerveja 3 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*3);
                                        valf = val-(val*0.3);
                                        printf("Cerveja 3 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*3);
                                        valf = val-(val*0.35);
                                        printf("Cerveja - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                    }
                    break;
                case 4:
                    printf("\nCodigo Nome       Preco\n400    Cachaca 1  8.0\n401    Cachaca 2  20.0\n402    Cachaca 3  22.0\n");
                    printf("\nDigite qual bebida deseja(Utilize o Codigo) e a quantidade desejada: \n");
                    scanf("%i %i", &dr,&qu);
                    if(qu<1){
                        printf("Quantidade Invalida");
                    }
                    switch(dr){
                        case 400:
                            if(qu<5){
                                val = qu*8;
                                printf("Cachaca 1 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*8);
                                    valf = val-(val*0.1);
                                    printf("Cachaca 1 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*8);
                                        valf = val-(val*0.3);
                                        printf("Cachaca 1 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*8);
                                        valf = val-(val*0.35);
                                        printf("Cachaca 1 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                        case 401:
                            if(qu<5){
                                val = qu*20;
                                printf("Cachaca 2 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*20);
                                    valf = val-(val*0.1);
                                    printf("Cachaca 2 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*20);
                                        valf = val-(val*0.3);
                                        printf("Cachaca 2 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*20);
                                        valf = val-(val*0.35);
                                        printf("Cachaca 2 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                        case 402:
                            if(qu<5){
                                val = qu*3;
                                printf("Cachaca 3 - %i unidades - Valor: %.2f", qu, val);
                            }
                            else{
                                if(qu>=5 && qu<50){
                                    val = (qu*3);
                                    valf = val-(val*0.1);
                                    printf("Cachaca 3 - %i unidades - Valor: %.2f", qu, valf);
                                }
                                else{
                                    if(qu>=50 && qu<100){
                                        val = (qu*3);
                                        valf = val-(val*0.3);
                                        printf("Cachaca 3 - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                    else{
                                        val = (qu*3);
                                        valf = val-(val*0.35);
                                        printf("Cachaca - %i unidades - Valor: %.2f", qu, valf);
                                    }
                                }
                            }
                            break;
                    }
                    break;
            }
        }
    }
}