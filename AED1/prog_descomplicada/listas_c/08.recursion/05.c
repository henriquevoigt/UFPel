#include <stdio.h>

int CalculaFibo ( int x );

int main () {

    int x, total;

    printf("Informe X: ");
    scanf("%d", &x);

    total = CalculaFibo ( x );

    printf("Termo da posicao %d: %d\n", x, total);

    return 0;

}

int CalculaFibo ( int x ) {

    if ( x == 1 ) {
        return 0;
    } else if ( x == 2 ) {
        return 1;
    } else {
        return ( CalculaFibo ( x - 1 ) + CalculaFibo ( x - 2 ) );
    }
}