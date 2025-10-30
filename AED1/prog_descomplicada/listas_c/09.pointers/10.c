#include <stdio.h>

int main () {

    int a[5], *p, i = 0;

    p = a;

    while ( i != 5 ) {
        scanf("%d", &*p);
        p++;
        i++;
    }

    for ( int i = 0; i < 5; i++ ) {
        printf("%d ", a[i]);
    }
    
    return 0;

}

