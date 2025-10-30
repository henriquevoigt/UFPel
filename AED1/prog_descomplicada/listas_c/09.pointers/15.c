#include <stdio.h>

void ImprimeArray ( int *vetor );

int main () {

    int vetor[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    ImprimeArray ( vetor );

    return 0;

}

void ImprimeArray ( int *vetor ) {

    int *p = vetor;
    
    for ( int i = 0; i < 10; i++ ) {
        printf("%d ", *p);
        p++;
    }

    printf("\n");

    return;

}