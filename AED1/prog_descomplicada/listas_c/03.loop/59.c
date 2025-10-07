#include <stdio.h>

int main () {

    int habitantes, consumidor, controle = 10, total, total_r = 0, total_c = 0, total_i = 0;
    float custo_kwh, consumo_kwh, maior = 0, menor, media = 0;
    float residencial = 0, comercial = 0, industrial = 0;

    printf("Informe o numero de habitantes da cidade\n");
    scanf("%d", &habitantes);
    printf("Informe o valor do khw\n");
    scanf("%f", &custo_kwh);

    total = habitantes;

    while ( habitantes != 0 ) {
        printf("Informe o codigo do consumidor:\n1.Residencial\n2.Comercial\n3.Industrial\n");
        scanf("%d", &consumidor);
        printf("Qual o consumo do mes, em kwh?\n");
        scanf("%f", &consumo_kwh);

        if ( habitantes == total ) {
            menor = consumo_kwh;
        }
        if ( menor > consumo_kwh ) {
            menor = consumo_kwh;
        }
        if ( maior < consumo_kwh ) {
            maior = consumo_kwh;
        }

        media += consumo_kwh;
        habitantes--;

        if ( consumidor == 1 ) {
            residencial += consumo_kwh;
            total_r++;
        } else if ( consumidor == 2 ) {
            comercial += consumo_kwh;
            total_c++;
        } else {
            industrial += consumo_kwh;
            total_i++;
        }

    }

    media = ( media / total );
    printf("\nMaior consumo: %.2f\tMenor consumo:%.2f\tMedia de consumo:%.2f\n", maior, menor, media);
    printf("\nMedia Residencial: %.2f\tComercial: %.2f\t Industrial: %.2f", ( residencial / total_r ), ( comercial / total_c ), ( industrial / total_i ));

    return 0;

}