#include <stdio.h>

int main () {

    char nome[50], sexo[10], controle = 0;
    int idade;

    printf("Informe o nome: ");
    scanf("%[^\n]s", nome);
    getchar();
    printf("Informe o sexo: ");
    scanf("%[^\n]s", sexo);
    getchar();
    printf("Informe a idade: ");
    scanf("%d", &idade);

    for ( int i = 0; sexo[i] != '\0'; i++ ) {
        controle++;
    }

    if ( controle == 8 && idade < 25 ) {
        printf("ACEITA!\n");
    } else {
        printf("NAO ACEITA!\n");
    }    

    return 0;
    
}