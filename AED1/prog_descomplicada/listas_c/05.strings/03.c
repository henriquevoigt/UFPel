#include <stdio.h>

int main () {

    char nome[50];

    printf("Informe um nome: ");
    scanf("%[^\n]s", nome);

    if ( nome[0] == 'a' || nome[0] == 'A' ) {
        printf("%s", nome);
    } else {
        printf("Nome comeca com outra letra!\n");
    }

    return 0;

}