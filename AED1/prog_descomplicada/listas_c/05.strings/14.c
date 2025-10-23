#include <stdio.h>

int main () {

    char string[50];

    printf("Informe uma palavra\n");
    scanf("%[^\n]", string);

    for ( int i = 0; string[i] != '\0'; i++ ) {
        string[i] += 1;
        printf("%c", string[i]);
    }

    return 0;

}