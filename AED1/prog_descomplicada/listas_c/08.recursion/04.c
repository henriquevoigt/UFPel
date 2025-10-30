#include <stdio.h>

int CalculaPotencia ( int x, int y );

int main () {

    int x, y, total;

    
    printf("Informe X: ");
    scanf("%d", &x);
    printf("Informe Y: ");
    scanf("%d", &y);

    total = CalculaPotencia ( x, y );

    printf("%d ^ %d = %d\n", x, y, total);

    return 0;
}

int CalculaPotencia ( int x, int y ) {

    if ( y == 1 ){
        return x;
    } else {
        return x * CalculaPotencia ( x, y - 1 ); 
    }

}