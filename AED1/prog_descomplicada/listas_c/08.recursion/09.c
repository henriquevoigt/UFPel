#include <stdio.h>

void CalculaRecursiva ( int x );

int main () {

    int x;

    printf("Informe X: ");
    scanf("%d", &x);

    while ( x % 2 != 0 ) {
        printf("Informe um valor PAR! Insira novamente: ");
        scanf("%d", &x);
    }

    CalculaRecursiva ( x );

    return 0;

}

void CalculaRecursiva ( int x ) {

    if ( x == 0 ) {
        printf("%d ", x);
        return;
    } else {
        CalculaRecursiva ( x - 2 );
        printf("%d ", x);
    }

}