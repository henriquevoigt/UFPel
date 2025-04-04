/* O opressor galático Thanos quer reduzir a população dos seres vivos no universo. Ele consegue dizimar 1/15 dos seres	por	dia. Escreva um	programa em	C que leia o numero	de seres do	universo
e conte	quantos	dias ele irá levar para	reduzir	a população pelo menos à metade (usar uma estrutura de repetição para contar) */

#include <stdio.h>

int main(){

    int dias_exterminio, populacao_inicial, populacao_controle;

    printf("Informe qual a populacao do universo\n");
    scanf("%d", &populacao_inicial);
    populacao_controle = (populacao_inicial / 2);

    for (dias_exterminio = 0; populacao_inicial > populacao_controle; dias_exterminio++){
        populacao_inicial = (populacao_inicial * 0.94);
    }

    printf("Foram necessarios %d dias para exterminar metade da populacao do universo", dias_exterminio);

}