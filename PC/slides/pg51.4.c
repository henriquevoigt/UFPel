/* Usando o comando for, faça um programa que calcule o fatorial de um número inteiro n. */

#include <stdio.h>

int main(){

    int fatorial;

    printf("Informe o numero que deseja saber o fatorial\n");
    scanf("%d", &fatorial);

    for (int i = (fatorial - 1); i > 1; i--){
        fatorial *= i;
        printf("%d ", fatorial);
    }

    printf("Fatorial: %d", fatorial);

}