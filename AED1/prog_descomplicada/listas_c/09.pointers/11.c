#include <stdio.h>

int main () {

    int a[5];

    for ( int i = 0; i < 5; i++ ) {
        printf("Informe A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for ( int i = 0; i < 5; i++ ) {
        if ( a[i] % 2 == 0 ) {
            printf("%p ", &a[i]);
        }
    }

    return 0;
    
}