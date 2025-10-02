#include <stdio.h>

int main () {

    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if ( x > y ) {
        printf("\n%d\n", x);
    } else if ( x == y) {
        printf("\nNumeros Iguais\n");
    } else {
        printf("\n%d\n", y);
    }

    return 0;
    
}