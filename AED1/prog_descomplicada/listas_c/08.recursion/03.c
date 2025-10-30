#include <stdio.h>
#include <math.h>

int CalculaCubos ( int x );

int main () {

    int x, soma_cubos;

    
    printf("Informe X: ");
    scanf("%d", &x);

    soma_cubos = CalculaCubos ( x );

    printf("Soma dos %d cubos: %d\n", x, soma_cubos);

    return 0;
}

int CalculaCubos ( int x ) {

    if ( x == 1 ){
        return 1;
    } else {
        return pow(x,3) + CalculaCubos ( x - 1 ); 
    }
}