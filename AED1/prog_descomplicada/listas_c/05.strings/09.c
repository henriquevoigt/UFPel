#include <stdio.h>

int main () {

    char string[100];

    printf("Informe uma string\n");
    scanf("%[^\n]", string);

    for ( int i = 0; string[i] != '\0'; i++ ) {
        if ( string[i] == '0' ) {
            string[i] = '1';
        }
    }

    printf("%s", string);

    return 0;

}