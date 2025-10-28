#include <stdio.h>

int CalculaDobro( int x );

int main () {

    int x;

    printf("Informe X: ");
    scanf("%d", &x);

    printf("O dobro de %d eh %d\n", x, CalculaDobro(x));

    return 0;

}

int CalculaDobro ( int x ){

    int y;

    y = x * 2;

    return y;

}