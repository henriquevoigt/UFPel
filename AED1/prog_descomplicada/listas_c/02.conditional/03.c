#include <stdio.h>
#include <math.h>

int main () {

    float x;

    scanf("%f", &x);

    if ( x > 0 ) {
        printf("\n%.1f\n", sqrt(x));
    } else {
        printf("\n%.1f\n", x * x);
    }

    return 0;
    
}