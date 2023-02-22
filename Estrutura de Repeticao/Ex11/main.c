#include <stdio.h>

int main() {
    int x, voto1=0, voto2=0,voto3=0,votototal=0;
double voto4=0, voto5=0;
    while(x!=6){
    printf("\n1-Candidato Jair Rodrigues\n2-Candidato Carlos Luz\n3-Candidato Neves Rocha\n4. Nulo\n5.Branco\nEntre com seu voto:");
    scanf("%i", &x);
    switch(x){
        case 1:
            voto1++;
          votototal++;
            break;
        case 2:
            voto2++;
          votototal++;
            break;
        case 3:
            voto3++;
          votototal++;
            break;
        case 4:
            voto4++;
          votototal++;
            break;
        case 5:
            voto5++;
          votototal++;
            break;
    }
    }
printf("O candidato 1 teve %i votos\n"
       "O candidato 2 teve %i votos\n"
       "O candidato 3 teve %i votos\n"
       "A porcentagem de votos nulos eh %.2f"
       "\nA porcentagem de votos em branco eh %.2f"
       , voto1, voto2, voto3, (voto4*100)/votototal, (voto5*100)/votototal);
    if(voto1>voto2 && voto1>voto3){
        printf("\nO candidato Jair Rodrigues foi o vencedor ");
    }
    else if(voto2>voto1 && voto2>voto3){
        printf("\nO candidato Carlos Luz foi o vencedor ");
    }
    else if(voto3>voto1 && voto3>voto2){
        printf("\nO candidato Neves Rocha foi o vencedor ");
    }
}
