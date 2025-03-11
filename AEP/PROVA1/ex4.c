/* Escreva um algoritmo	que	leia uma quantidade	indeterminada de idades	de	pessoas (condição de término será a	digitação de um	valor negativo). Conte e mostre	quantas	destas	pessoas
ainda	não	podem votar (idade	<	16	anos). */

#include <stdio.h>

int main (){

    int lp_ctrl=0, inaptos=0, contador=0;

    while (lp_ctrl >= 0){
        printf("Informe a idade da pessoa\n");
        scanf("%d", &lp_ctrl);

        if (lp_ctrl < 16){
            inaptos++;
        } 
        contador++;
    } printf("Em um total de %d pessoas, %d sao menores de 16 anos e nao podem votar\n", contador, inaptos);
}