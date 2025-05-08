/* Fazer um programa que lê as 3 notas de um aluno de Programação de Computadores (v1, v2 e MT, onde MT é a média dos trabalhos). O programa calcula e imprime a média do
aluno, usando a fórmula Média=(3*v1+3*v2+4*MT)/10. */

#include <stdio.h>

float calculaMedia(float n1, float n2, float n3){

    float media_total = 0;

    media_total = (((3 * n1) + (3 * n2) + (4 * n3)) / 10);

    return media_total;   

}

int main(){

    float nota_1, nota_2, media_trab, media_final;

    printf("Informe a nota da primeira prova\n");
    scanf("%f", &nota_1);
    printf("Informe a nota da segunda prova\n");
    scanf("%f", &nota_2);
    printf("Informe a media dos trabalhos\n");
    scanf("%f", &media_trab);

    media_final = calculaMedia(nota_1, nota_2, media_trab);

    printf("Media final do aluno: %.2f", media_final);

    return 0;

}