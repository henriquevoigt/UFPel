#include <stdio.h>
#include <math.h>

typedef struct {
    float raio;
    float teta;
    float radianos;
} Polar;

typedef struct {
    float x;
    float y;
} Cartesiano;

int main () {

    Polar coord_p;
    Cartesiano coord_c;

    printf("Informe o raio: ");
    scanf("%f", &coord_p.raio);
    printf("Informe o teta: ");
    scanf("%f", &coord_p.teta);


    coord_p.radianos = ( coord_p.teta * ( 3.1415 / 180 ) );


    coord_c.x = ( coord_p.raio * cos(coord_p.radianos) );
    coord_c.y = ( coord_p.raio * sin(coord_p.radianos) );

    printf("Coordenada em cartesiano: %.1f | %.1f", coord_c.x, coord_c.y);

    return 0;

}
