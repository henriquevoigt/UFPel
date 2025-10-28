#include <stdio.h>

void CalculaVolume ( float raio );

int main () {

    float raio;

    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);

    CalculaVolume( raio );

    return 0;

}

void CalculaVolume ( float raio ) {

    float volume;

    volume = ( 4.0 / 3.0 * 3.1415 * ((raio * raio) * raio));

    printf("Volume da esfera eh %.2f m3", volume);

    return;

}