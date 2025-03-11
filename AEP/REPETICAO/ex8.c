// Faça um algoritmo que escreva os 30 primeiros termos da série 1,3,9,27...

#include <stdio.h>

int main(){

    float entrada_numero=1, loop_control=0;

    while (loop_control < 30){
        entrada_numero = entrada_numero * 3;
        printf("%.0f\n", entrada_numero);
        loop_control++;
    }
}