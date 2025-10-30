#include <stdio.h>

int VerificaString ( char *string_a, char *string_b );

int main () {

    char string_a[50], string_b[50];
    int flag;

    printf("Informe a primeira frase: ");
    scanf("%[^\n]", string_a);
    getchar();
    printf("Informe a segunda frase: ");
    scanf("%[^\n]", string_b);

    flag = VerificaString ( string_a, string_b );

    if ( flag == 1 ) {
        printf("Segunda string ocorre dentro da primeira!\n");
    } else {
        printf("Segunda string NAO ocorre dentro da primeira!\n");
    }

    return 0;

}

int VerificaString ( char *string_a, char *string_b ) {

    char *pSub, *pInicio;

    while ( *string_a != '\0') {
        pInicio = string_a;
        pSub = string_b;

        while ( *pInicio == *pSub && *pInicio != '\0' && *pSub != '\0' ) {
            pInicio++;
            pSub++;
        }

        if ( *pSub == '\0' ) {
            return 1;
        }

        string_a++;
    }
    return 0;

}