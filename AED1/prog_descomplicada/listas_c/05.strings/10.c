#include <stdio.h>

int main () {

    char string[50];
    int i = 0;

    printf("Informe uma palavra\n");
    scanf("%[^\n]", string);

    for ( i; string[i] != '\0'; i++ );

    for ( i; i >= 0; i-- ) {
        printf("%c", string[i]);
    }

    return 0;

}