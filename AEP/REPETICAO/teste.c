#include <stdio.h>

int main(){

    int lp_ctrl;
    float temp, atm, media_temp = 0, media_atm = 0, maior_temp = 0;

    for (lp_ctrl = 1; lp_ctrl <= 5; lp_ctrl++){
        printf("Informe a temperatura do dia %d\n", lp_ctrl);
        scanf("%f", &temp);
        printf("Informe a ATM do dia %d\n", lp_ctrl);
        scanf("%f", &atm);
        media_temp = ((media_temp + temp) / 30);
        media_atm = ((media_atm + atm) / 30);
        if (temp > maior_temp){
            maior_temp = (temp);
        }}printf("Neste mes, a temperatura media foi de %.2f, a ATM media foi de %.2f e a temperatura mais alta registrada foi de %.2f", media_temp, media_atm, maior_temp);
        
    }