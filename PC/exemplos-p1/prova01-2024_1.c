#include <stdio.h>

void calcula(int horas_de_frio[5][5], int horas_de_frio_mes_media[5], float perc_horas_de_frio_mes[5], float *perc_total_horas_de_frio);

int main(){

    int horas_de_frio_mes_media[5] = {62,124,137,112,61}; //de 1954 a 2017
    int horas_de_frio[5][5];
    float perc_horas_de_frio_mes[5];
    
    int m,s; //mes e semana
    float perc_total_horas_de_frio = 0.0; //percentual do total de horas em relação á media

    for (m=0; m<5; m++){
        for(s=0; s<5; s++){
            scanf("%d", &horas_de_frio[m][s]);
        }
    }

    calcula(horas_de_frio, horas_de_frio_mes_media, perc_horas_de_frio_mes, &perc_total_horas_de_frio);

    printf("Percentual de horas de frio por mes: \n");

    for(m=0 ;m<5; m++)
        printf("%.1f\n", perc_horas_de_frio_mes[m]);
    
    printf("Percentual do total de horas de frio em relacao a media:\n%.1f\n", perc_total_horas_de_frio);

    return 0;

}

void calcula(int horas_de_frio[5][5], int horas_de_frio_mes_media[5], float perc_horas_de_frio_mes[5], float *perc_total_horas_de_frio){

    int total_mensal_horas_frio = 0, total_ano_horas_frio = 0, total_media_historica = 0;

    for (int mes = 0; mes < 5; mes++){ // laço criando total de horas de cada mes
        for (int semana = 0; semana < 5; semana++){
            total_mensal_horas_frio += horas_de_frio[mes][semana];
        }
        total_ano_horas_frio += total_mensal_horas_frio;
        perc_horas_de_frio_mes[mes] = ((float)total_mensal_horas_frio / horas_de_frio_mes_media[mes]) * 100;
        total_mensal_horas_frio = 0;
        total_media_historica += horas_de_frio_mes_media[mes];
    
    }
    
    *perc_total_horas_de_frio = ((float)total_ano_horas_frio / total_media_historica) * 100;    

    return;

}