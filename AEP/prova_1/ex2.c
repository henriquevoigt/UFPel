/* Escreva um programa que leia o salário de 60 indivíduos (aceitar somente valores positivos). Para cada valor lido calcule e escreva um aumento de salário segundo dados abaixo: 
2.5% p/ salário > =8000
10% p/ salário entre 5000 e 8000
15% p/ o menor <= 5000 */

#include <stdio.h>

int main(){

    int lp_ctrl, lp_condition;
    float salario;

    for (lp_ctrl = 0; lp_ctrl < 60; lp_ctrl++){
        printf("Informe o salario a ser reajustado, caso deseje encerrar o programa, informe um valor negativo\n");
        scanf("%f", &salario);

        if (salario < 0){
            printf("Programa encerrado\n");
            lp_ctrl = 59;
        } else if (salario >= 8000){
            salario = (salario * 1.025);
            printf("Novo salario = %.2f\n", salario);
        } else if (salario > 5000 && salario < 8000){
            salario = (salario * 1.10);
            printf("Novo salario = %.2f\n", salario);
        } else {
            salario = (salario * 1.15);
            printf("Novo salario = %.2f\n", salario);
        }

    }
}