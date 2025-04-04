// Escreva um programa em C que leia uma frase e um caracter. Conte e escreva quantas vezez este caracter aparece na frase.

#include <stdio.h>
#include <string.h>

int main(){

    char frase[100], caractere;
    int contador = 0;

    printf("Informe uma frase\n");
    fgets(frase, 100, stdin);
    printf("Informe um caractere para contar sua incidencia na frase\n");
    scanf("%c", &caractere);

    for (int lp_ctrl = 0; frase[lp_ctrl] != '\0'; lp_ctrl++){
        if (frase[lp_ctrl] == caractere){
            contador++;
        }
    }
    printf("O caractere %c aparece %d vezes na frase", caractere, contador);

    return 0;

}