#include <stdio.h>

float CalculaVolume ( float altura, float raio );

int main () {

    float altura, raio, volume;

    printf("Informe a altura: ");
    scanf("%f", &altura);
    printf("Informe o raio: ");
    scanf("%f", &raio);

    volume = CalculaVolume ( altura, raio );

    printf("Volume do cilindro: %.2f\n", volume);

    return 0;

}

float CalculaVolume ( float altura, float raio ) {

    float volume;

    volume = ( 3.141592 * (raio * raio) * altura );

    return volume;

}