#include <stdio.h>

typedef struct {
    float x;
    float y;
    float z;
} Vetor;

int main () {

    Vetor vetor_A[2], vetor_B;

    for ( int i = 0; i < 2; i++ ) {
        printf("Informe o valor de X: ");
        scanf("%f", &vetor_A[i].x);
        getchar();
        printf("Informe o valor de Y: ");
        scanf("%f", &vetor_A[i].y);
        getchar();
        printf("Informe o valor de Z: ");
        scanf("%f", &vetor_A[i].z);
        getchar();
    }

    vetor_B.x = vetor_A[0].x + vetor_A[1].x;
    vetor_B.y = vetor_A[0].y + vetor_A[1].y;
    vetor_B.z = vetor_A[0].z + vetor_A[1].z;

    printf("X: %.2f Y: %.2f Z: %.2f\n", vetor_B.x, vetor_B.y, vetor_B.z);

    return 0;
    
}