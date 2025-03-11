#include <stdio.h>

// Escreva um algoritmo que escreva a tabuada do 5 (de 1 à 10). 

int main () {

    int numero, tabuada;

    numero = 1;

    while (numero <= 10) {
        tabuada = numero * 5;
        printf("%d x 5 = %d\n", numero, tabuada);
        numero = numero + 1;
    }
    return 0;


}