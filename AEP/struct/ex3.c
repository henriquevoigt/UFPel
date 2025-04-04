/* Escreva um programa que receba dois structs do tipo dma, cada um representando uma data válida, e calcule o número de dias que decorreram entre as duas datas. 
OBS: Garanta que a estrutura só armazenará datas válidas. */

#include <stdio.h>

struct data{
    int dia, mes, ano;
};

int calc_dif(struct data primeira_data, struct data segunda_data){

    int contador_dias = 0, contador_meses = 0, contador_anos = 0, diferenca = 0;

    if (primeira_data.dia == segunda_data.dia){
        contador_dias = 0;
    }
    else if (primeira_data.dia < segunda_data.dia){
        while (primeira_data.dia < segunda_data.dia){
            primeira_data.dia++;
            contador_dias++;
        }
    }
    else {
        while (primeira_data.dia > segunda_data.dia){
            segunda_data.dia++;
            contador_dias++;
        }
    }
    // ----------------------------------------------------------
    if (primeira_data.mes == segunda_data.mes){
        contador_meses = 0;
    }
    else if (primeira_data.mes < segunda_data.mes){
        while (primeira_data.mes < segunda_data.mes){
            primeira_data.mes++;
            contador_meses++;
        }
    }
    else {
        while (primeira_data.mes > segunda_data.mes){
            segunda_data.mes++;
            contador_meses++;
        }
    }
    // ------------------------------------------------------------
    if (primeira_data.ano == segunda_data.ano){
        contador_anos = 0;
    }
    else if (primeira_data.ano < segunda_data.ano){
        while (primeira_data.ano < segunda_data.ano){
            primeira_data.ano++;
            contador_anos++;
        }
    }
    else {
        while (primeira_data.ano > segunda_data.ano){
            segunda_data.ano++;
            contador_anos++;
        }
    }

    diferenca = contador_dias + (contador_meses * 30) + (contador_anos * 360);

    return diferenca;

}

int main(){

    struct data data_inicio, data_fim;
    int diferenca_dias;
    
    printf("\nVamos coletar a primeira data\nInforme o dia\n");
    scanf("%d", &data_inicio.dia);
    printf("\nAgora o mes\n");
    scanf("%d", &data_inicio.mes);
    printf("\nAgora o ano\n");
    scanf("%d", &data_inicio.ano);

    while (data_inicio.dia < 1 || data_inicio.dia > 30){
        printf("\nInforme um dia valido\n");
        scanf("%d", &data_inicio.dia);
    }
    while (data_inicio.mes < 1 || data_inicio.mes > 12){
        printf("\nInforme um mes valido\n");
        scanf("%d", &data_inicio.mes);
    }
    while (data_inicio.ano < 1){
        printf("\nInforme um ano a partir do ano 1\n");
        scanf("%d", &data_inicio.ano);
    }

    printf("\nVamos coletar a segunda data\nInforme o dia\n");
    scanf("%d", &data_fim.dia);
    printf("\nAgora o mes\n");
    scanf("%d", &data_fim.mes);
    printf("\nAgora o ano\n");
    scanf("%d", &data_fim.ano);

    while (data_fim.dia < 1 || data_fim.dia > 30){
        printf("\nInforme um dia valido\n");
        scanf("%d", &data_fim.dia);
    }
    while (data_fim.mes < 1 || data_fim.mes > 12){
        printf("\nInforme um mes valido\n");
        scanf("%d", &data_fim.mes);
    }
    while (data_fim.ano < 1){
        printf("\nInforme um ano a partir do ano 1\n");
        scanf("%d", &data_fim.ano);
    }

    diferenca_dias = calc_dif(data_inicio, data_fim);

    printf("A diferenca entre as 2 datas eh de %d dias", diferenca_dias);

}

