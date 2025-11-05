#include <stdio.h>
#include <stdlib.h>

int main () {

    int tamanho;
    char *vetor = NULL, *p;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);
    getchar();

    vetor = (char *)malloc(tamanho + 1 * sizeof ( char ));

    printf("Informe a string: ");
    scanf("%[^\n]", vetor);
    getchar();

    p = vetor;
    
    while ( *p != '\0' ) {
        if ( *p != 'a' && *p != 'e' && *p != 'i' && *p != 'o' && *p != 'u') {
            printf("%c", *p);
        }
        p++;
    }

    free(vetor);

    return 0;

}