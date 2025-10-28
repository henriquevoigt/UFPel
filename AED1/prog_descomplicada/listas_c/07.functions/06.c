#include <stdio.h>

void CalculaSegundos ( int horas, int minutos, int segundos );

int main () {

    int horas, minutos, segundos;

    printf("Informe quantas horas: ");
    scanf("%d", &horas);
    printf("Informe quantos minutos: ");
    scanf("%d", &minutos);
    printf("Informe quantos segundos: ");
    scanf("%d", &segundos);

    CalculaSegundos ( horas, minutos, segundos );

    return 0;

}

void CalculaSegundos ( int horas, int minutos, int segundos ) {

    minutos += ( horas * 60 );
    segundos += ( minutos * 60 );

    printf("Total em segundos: %d", segundos);
    
    return;
    
}