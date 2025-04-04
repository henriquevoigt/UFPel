/* Escreva um programa que leia um texto pelo teclado. Em seguida, faça uma função que inverta e exiba-o na tela.
Exemplo: Para a string "Bom dia" o programa imprime "aid moB" 
Obs: O objetivo é alterar os caracteres na string, não é imprimir ao contrário! */

#include <stdio.h>
#include <string.h>

int main(){

    char texto[10];

    printf("Escreva um texto a ser invertido\n");
    fgets(texto, 10, stdin);

    strrev(texto);

    printf("%s", texto);
}
