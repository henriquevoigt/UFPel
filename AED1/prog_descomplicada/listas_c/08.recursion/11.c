#include <stdio.h>

void CalculaRecursiva ( int x[10], int i );

int main () {

    int x[10];

    for ( int i = 0; i < 10; i++ ){
    printf("Informe X%d: ", i);
    scanf("%d", &x[i]);
    }

    CalculaRecursiva ( x, 0 );

    return 0;

}

void CalculaRecursiva ( int x[10], int i ) {

    if ( i == 10 ) {
        return;
    } else {
        printf("%d ", x[i]);
        CalculaRecursiva ( x, i + 1 );
    }

}