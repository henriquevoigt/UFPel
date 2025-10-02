#include <stdio.h>

int main () {

    float x, y;

    scanf("%f", &x);
    scanf("%f", &y);

    if ( x < 0 || x > 10 || y < 0 || y > 10){
        printf("\nNota invalida\n");
    } else {
        printf("Media: %.1f", (x + y) / 2 );
    }
    
    return 0;
    
}