/* Faça um algoritmo que gera e escreve os números ímpares entre 100 e 200.Utlize a função resto para verificar se o número é impar */

#include <stdio.h>

int main(){

    int controle_loop=100;

    while (controle_loop < 200){
        if (controle_loop % 2 == 1){
        printf("%d\n", controle_loop);
        }controle_loop++;
    }
    return 0;
}