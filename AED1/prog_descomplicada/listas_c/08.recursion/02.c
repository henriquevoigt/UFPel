#include <stdio.h>

int CalculaFatorial ( int x );

int main () {

    int x, fatorial;

    printf("Informe X: ");
    scanf("%d", &x);

    fatorial = CalculaFatorial ( x );

    printf("Fatorial de %d: %d\n", x, fatorial);

    return 0;

}

int CalculaFatorial ( int x ) {

    if ( x == 1 ) {
        return 1;
    } else {
        return x * CalculaFatorial ( x - 1 );
    }

}