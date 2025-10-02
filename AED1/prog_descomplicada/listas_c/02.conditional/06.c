#include <stdio.h>

int main () {

    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if ( x > y ) {
        printf("\n%d, %d\n", x, x - y);
    } else {
        printf("\n%d, %d\n", y, y - x);
    }

    return 0;
    
}