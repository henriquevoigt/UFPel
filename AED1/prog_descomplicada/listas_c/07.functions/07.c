#include <stdio.h>

float CalculaTemperatura ( float temperatura );

int main () {

    float temperatura;

    printf("Informe a temperatura em Celcius: ");
    scanf("%f", &temperatura);

    temperatura = CalculaTemperatura ( temperatura );

    printf("Temperatura em Fahrenheit = %.2f", temperatura);

    return 0;

}

float CalculaTemperatura ( float temperatura ) {

    temperatura = ( temperatura * ( 9.0 / 5.0 ) + 32.0 );

    return temperatura;
    
}