/* Faça um programa que leia 10 números, considere que serão lidos números inteiros e positivos. Se o número lido for menor que 7, calcule o seu fatorial. 
Se for maior ou igual a 7, calcule a soma de 1 até o número lido. */

#include <stdio.h>

int main(){

    int entrada_numero, loop_control1=0, loop_control2;

    while (loop_control1 < 10) {
        printf("Informe um valor\n");
        scanf("%d", &entrada_numero);
        if (entrada_numero < 7) {
            (loop_control2 = entrada_numero);
            while (loop_control2 > 1){
                entrada_numero = entrada_numero * (loop_control2 - 1);
                loop_control2--;
            }printf("Seu fatorial eh %d\n", entrada_numero);
        }else {
            printf("Maior ou igual a 7\n");
        }loop_control1++;
    }
    return 0;
}