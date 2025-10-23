#include <stdio.h>

int main () {

    char string[50];

    printf("Informe uma palvra em maiusculo\n");
    scanf("%[^\n]", string);

    for ( int i = 0; string[i] != '\0'; i++ ) {
        if ( string[i] >= 65 && string[i] <= 90 ) {
            string[i] += 32;
        }
        printf("%c", string[i]);
    }

    return 0;

}