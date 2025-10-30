#include <stdio.h>

int main () {

    float a[10];

    for ( int i = 0; i < 10; i++ ) {
        printf("Endereco de A[%d]: %p\n", i, &a[i]);
    }    
    
    return 0;

}

