#include <stdio.h>
#include <math.h>

int main () {

    float x;

    scanf("%f", &x);

    if ( x > 0 ) {
        printf("%.1f, %.1f", x * x, sqrt(x));
    } else {
        printf("\nNumero invalido\n");
    }

    return 0;
    
}