#include <stdio.h>

int main () {

    int a, b;

    if ( &a > &b ) {
        printf("%p", &a);
    } else {
        printf("%p", &b);
    }

    return 0;
    
}