#include <stdio.h>

void CalculaRecursiva ( int x );

int main () {

    int x;

    printf("Informe X: ");
    scanf("%d", &x);

    CalculaRecursiva ( x );

    return 0;

}

void CalculaRecursiva ( int x ) {

    if ( x == 0 ) {
        printf("%d ", x);
        return;
    } else {
        printf("%d ", x);
        CalculaRecursiva ( x - 1 );
    }

}