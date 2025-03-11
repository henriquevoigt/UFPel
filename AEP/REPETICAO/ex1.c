/* Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é
NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve ser encerrada sem imprimir mensagem alguma. */

#include <stdio.h>

int main (){

    float valor_fornecido;
    int controle_loop;


    do {
        printf("Informe um valor para saber se eh positivo ou negativo\n");
        scanf("%f", &controle_loop);

        if (controle_loop > 0){
            printf("CLASSIFICADO: POSITIVO\n");
        }else if (controle_loop < 0){
            printf("NEGATIVO\n");
        }
    } while (controle_loop != 0);

return 0;

}