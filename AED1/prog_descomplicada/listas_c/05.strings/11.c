#include <stdio.h>

int main () {

    char string[50];

    printf("Informe uma frase\n");
    scanf("%[^\n]", string);

    for ( int i = 0; string[i] != '\0'; i++ ) {

        if ( string[i] == 'a' || string[i] == 'e' ||
             string[i] == 'i' || string[i] == 'u' ) {
                printf(" ");
        } else {
            printf("%c", string[i]);
        }
    }

    return 0;
    
}