#include <stdio.h>

int calcular_min_paradas(int distancia_total, int alcance_max, int postos[], int num_postos) {
    
    int paradas = 0;
    int posicao_atual = 0;
    int i = 0; 

    while (posicao_atual + alcance_max < distancia_total) {
        int posicao_anterior = posicao_atual;

        while (i < num_postos && postos[i] <= posicao_anterior + alcance_max) {
            posicao_atual = postos[i];
            i++;
        }

        if (posicao_atual == posicao_anterior) {
            printf("Erro: Impossivel chegar ao destino. Carro sem combustivel no km %d.\n", posicao_atual);
            return -1; 
        }

        paradas++;
        printf("Parada %d realizada no posto do km %d\n", paradas, posicao_atual);
    }

    return paradas;
}

int main() {

    int distancia_total = 25;
    int alcance_max = 10;
    int postos[] = {5, 10, 15, 20};

    int num_postos = sizeof(postos) / sizeof(postos[0]);

    printf("Iniciando viagem...\n");
    printf("Distancia total: %d km | Alcance: %d km\n\n", distancia_total, alcance_max);

    int resultado = calcular_min_paradas(distancia_total, alcance_max, postos, num_postos);

    if (resultado != -1) {
        printf("\nChegou ao destino!\n");
        printf("Numero minimo de paradas: %d\n", resultado);
    }

    return 0;
}