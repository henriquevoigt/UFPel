#include <stdio.h>

int main () {

    int controle = 0;

    for ( int i = 0; controle < 50; i++) {
        if ( i % 2 == 0 ){
            printf("%d\n", i);
            controle++;
        }
    }

    return 0;
    
}