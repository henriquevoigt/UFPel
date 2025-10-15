#include <stdio.h>

int main () {

    float notas[15], media = 0;

    for ( int i = 0; i < 15; i++ ) {
        printf("\nInforme a nota do aluno %d:\n", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    printf("\n====| Leitura concluida! |====\n\n Media geral: %.2f\n", media/15);

    return 0;

    
}