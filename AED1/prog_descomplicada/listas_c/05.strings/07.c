#include <stdio.h>

int main () {

    char string_a[50], string_b[50];
    int controle = 1;

    printf("Informe a primeira string!\n");
    scanf("%[^\n]", string_a);
    getchar();
    printf("Informe a segunda string!\n");
    scanf("%[^\n]", string_b);
    getchar();

    for ( int i = 0; string_a[i] != '\0' || string_b[i] != '\0'; i++ ) {
        if ( string_a[i] != string_b[i] ) {
            controle = 0;
            printf("Strings diferentes!\n");
            break;
        } else {
            controle = 1;
        }
    }

    if ( controle == 1 ) {
        printf("Strings iguais!\n");
    }

    return 0;

}