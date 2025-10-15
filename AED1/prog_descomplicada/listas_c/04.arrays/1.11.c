#include <stdio.h>

int main () {

    float vetor[10], soma = 0;
    int negativos = 0;

    for ( int i = 0; i < 10; i++ ) {
        printf("Informe um valor pra posicao %d: ", i + 1);
        scanf("%f", &vetor[i]);
        
        if ( vetor[i] < 0 ) {
            negativos++;
        } else {
            soma += vetor[i];
        }
    }

    printf("Total de negativos: %d\tSoma dos positivos: %.2f\n", negativos, soma);

    return 0;
    
}