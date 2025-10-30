#include <stdio.h>

int main () {

    int inteiro, *p_inteiro;
    float flutuante, *p_flutuante;
    char caractere, *p_caractere;

    p_inteiro = &inteiro;
    p_flutuante = &flutuante;
    p_caractere = &caractere;

    *p_inteiro = 10;
    *p_flutuante = 3.333;
    *p_caractere = 'p';

    printf("\n| %d | %.2f | %c |\n", inteiro, flutuante, caractere );

    return 0;

}

