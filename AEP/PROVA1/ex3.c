/* Um pesquisador está  investigando sobre mudanças	climáticas e precisa calcular a	média de temperatura e pressão atmosférica de um mês de	dados. Escreva um programa que leia 30 valores
que representem dados de temperatura e	pressão	atmosférica	diários	medidos. Escreva as	médias de temperatura e	 pressão atmosférica deste mês e a temperatura do dia mais quente. */

#include <stdio.h>

int main(){

    int lp_ctrl;
    float pressao, media_pressao=0, temp, media_temp=0, maior_temp=-100;

    for (lp_ctrl = 1; lp_ctrl <= 30; lp_ctrl++){
        printf("Informe o valor da temperatura do dia %d\n", lp_ctrl);
        scanf("%f",&temp);
        printf("Informe o valor da pressao atm do dia %d\n", lp_ctrl);
        scanf("%f", &pressao);

        media_temp = (media_temp + temp);
        media_pressao = (media_pressao + pressao);
        
        if (maior_temp < temp){
            maior_temp = (temp);
        }

    } media_temp = (media_temp / 30);
      media_pressao = (media_pressao / 30);

      printf("A media de temperatura desse mes foi %.2f e a maior temperatura registrada foi de %.2f\n", media_temp, maior_temp);
      printf("A media de pressao atm desse mes ficou em %.2f", media_pressao);

}


