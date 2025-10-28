#include <stdio.h>

void CalculaCombustivel ( float distancia, float combustivel);

int main () {

    float distancia, combustivel;

    printf("Informe a distancia percorrida, em KM: ");
    scanf("%f", &distancia);
    printf("Informe o valor abastecido: ");
    scanf("%f", &combustivel);

    CalculaCombustivel ( distancia, combustivel );

    return 0;

}

void CalculaCombustivel ( float distancia, float combustivel) {

    float consumo = 0;

    consumo = ( distancia / combustivel );

    if ( consumo < 8 ) {
        printf("Venda o carro! Media: %.2f\n", consumo);
    } else if ( consumo >= 8 && consumo <= 12 ) {
        printf("Economico! Media: %.2f\n", consumo);
    } else {
        printf("Super economico! Media: %.2f\n", consumo);
    }

    return;

}