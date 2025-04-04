/* Escreva um programa que conte a quantidade de palavras de um texto digitado pelo teclado. (Uma palavra é qualquer sequência de caracteres separada por um ou mais espaços). */

#include <stdio.h>
#include <string.h>

int main(){
    
    char texto[1000];
    int contador_spc = 0, qtd_palavra = 0;

    printf("Insira o texto\n");
    fgets(texto, 1000, stdin);

    printf("%s", texto);

    for (int lp_ctrl = 0; texto[lp_ctrl] != '\0'; lp_ctrl++){
        if (texto[lp_ctrl] == ' ' || texto[lp_ctrl] == '\t' || texto[lp_ctrl] == '\n'){
            qtd_palavra++;
        }
    } printf("%d palavras", qtd_palavra);

}
