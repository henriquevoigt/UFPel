#include <stdio.h>

int main () {

    float custo, fabrica;

    printf("Informe o custo da fabrica\n");
    scanf("%f", &fabrica);

    if ( fabrica <= 12000 ){
        custo = (fabrica + (fabrica * 0.05));
        printf("\nCusto do consumidor: R$%.2f", custo);
    } else if ( fabrica > 12000 && fabrica <= 25000 ){
        custo = (fabrica + (fabrica * 0.10) + (fabrica * 0.15));
        printf("\nCusto do consumidor: R$%.2f", custo);
    } else {
        custo = (fabrica + (fabrica * 0.15) + (fabrica * 0.20));
        printf("\nCusto do consumidor: R$%.2f", custo);
    }

    return 0;

}