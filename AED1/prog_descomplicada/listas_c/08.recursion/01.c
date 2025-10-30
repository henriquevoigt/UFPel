#include <stdio.h>

int CalculaSoma ( int x );

int main () {

    int x, soma = 0;

    printf("Informe X: ");
    scanf("%d", &x);

    while ( x < 1 ) {
        printf("Informe X > 1: ");
        scanf("%d", &x);
    }

    soma = CalculaSoma ( x );

    printf("Total de 1 a %d: %d\n", x, soma);

    return 0;

}

int CalculaSoma ( int x ) {

    if ( x == 1 ) {
        return 1;
    } else {
        return x + CalculaSoma ( x - 1 );
    }
}