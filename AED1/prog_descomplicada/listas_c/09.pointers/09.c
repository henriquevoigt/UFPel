#include <stdio.h>

int main () {

    float a[3][3];

    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            printf("End A[%d][%d]: %p ", i, j, &a[i][j]);
        }
        printf("\n");
        
    }    
    
    return 0;

}

