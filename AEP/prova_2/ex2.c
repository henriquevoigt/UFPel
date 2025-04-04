// Escreva um programa em C que leia uma palavra e diga se é ou não um palíndromo. Um palindromo é um palavra ou frase que escrita de maneira inversa é igual a original. Ex. radar, ralar....

#include <stdio.h>
#include <string.h>

int main(){

    char palavra[50], apoio[50];
    
    printf("Informe uma palavra para saber se eh um palindromo\n");
    scanf("%s", &palavra);

    strcpy(apoio, palavra);
    strrev(apoio);
    
    int compara = strcmp(apoio, palavra);
        if (compara == 0){
            printf("Eh um palindromo");
        }else{
            printf("Nao eh um palindromo");
        }

}