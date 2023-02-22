#include <stdio.h>
#include "stdlib.h"
#include "time.h"

int main() {
    srand(time(NULL));
    int a;

    a = rand() % 101;
    if(a>50) {
        printf("Eh maior que 50");
    }
    else{
        printf("Eh menor ou igual a 50");
    }
}
