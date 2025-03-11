/* Faça um programa que solicite ao usuário 10 números inteiros e, ao final, informe a quantidade de números ímpares e pares lidos. Calcule também a soma
dos números pares e a média dos números ímpares. */ 

#include <stdio.h>

int main(){

    int loop_control=0, inteiro_informado, qtd_impar=0, qtd_par=0, soma_par=0, media_impar=0;

    while (loop_control < 10){
        printf("Informe um numero inteiro\n");
        scanf("%d", &inteiro_informado);
        if (inteiro_informado % 2 == 0){
            qtd_par++;
            soma_par = soma_par + inteiro_informado;
        }else{
            qtd_impar++;
            media_impar = media_impar + inteiro_informado;
        }loop_control++;
    }   
    
    (media_impar = media_impar / qtd_impar);

    printf("Foram informados %d numeros pares e %d numeros impares\n", qtd_par, qtd_impar);
    printf("A soma dos numeros pares eh %d\n", soma_par);
    printf("A media dos numeros impares eh %d\n", media_impar);

    return 0;


}