#include <stdio.h>
#include <stdlib.h>

int CalculaSoma ( int x );

int main () {

    int x, soma;

    printf("Informe o valor de X: ");
    scanf("%d", &x);

    if ( x <= 0 ) {
        printf("Numero invalido!\n");
        exit(0);
    }

    soma = CalculaSoma ( x );

    printf("O total da soma dos algarismos eh: %d\n", soma);

    return 0;

}

int CalculaSoma ( int x ) {

    int soma = 0;

    while ( x > 0 ) {
        soma += ( x % 10 );
        x /= 10;
    }

    return soma;

}