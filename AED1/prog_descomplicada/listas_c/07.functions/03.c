#include <stdio.h>

int VerificaPar ( int valor );

int main () {

    int valor;

    printf("Informe um valor pra saber se eh par ou impar: ");
    scanf("%d", &valor);


    switch ( VerificaPar ( valor ) ){

        case -1: printf("Valor %d eh IMPAR!\n", valor);
        break;

        case 0: printf("Valor %d eh ZERO\n", valor);
        break;

        case 1: printf("Valor %d eh PAR!\n", valor);
        break;

        default: printf("ERRO!");
        break;
    }

    return 0;

}

int VerificaPar ( int valor ) {

    if ( valor == 0 ) {
        return 0;
    } else if ( valor % 2 == 0 ) {
        return 1;
    } else {
        return -1;
    }

}