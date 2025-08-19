/* Faça um programa que lê n números inteiros (cujo valor máximo não ultrapassa 1000). Após, o programa imprime em ordem crescente os números não duplicados do vetor. */

#include <stdio.h>

int main(){

    int qtde_lida = 0;

    printf("Quantos numeros serao lidos? (Limite = 1000)\n");
    scanf("%d", &qtde_lida);

    while(qtde_lida > 1000){
        printf("Informe um valor de no maximo 1000\n");
        scanf("%d", &qtde_lida);
    }

    
}