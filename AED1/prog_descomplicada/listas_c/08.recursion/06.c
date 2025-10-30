#include <stdio.h>

int CalculaSoma ( int x, int y );

int main () {

    int x, y, soma;

    printf("Informe X: ");
    scanf("%d", &x);
    printf("Informe Y: ");
    scanf("%d", &y);

    soma = CalculaSoma( x, y );

    printf("%d x %d = %d\n", x, y, soma);

    return 0;

}

int CalculaSoma ( int x, int y ) {

    if ( y == 1 ) {
        return x;
    } else {
        return CalculaSoma ( x, y - 1) + x;
    }
}