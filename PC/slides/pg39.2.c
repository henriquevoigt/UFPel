/* Utilizando o programa anterior, fazer um novo programa que verifica se o aluno atingiu a média 7. Caso positivo, o programa imprime a mensagem “aprovado por média”. Caso
contrário, o programa calcula e imprime o valor necessário no exame, apresentando a mensagem apropriada. (Lembre-se que a média dos trabalhos não pode ser substituída
pelo exame). */

#include <stdio.h>

float calculaMedia(float n1, float n2, float n3){

    float media_total = 0;

    media_total = (((3 * n1) + (3 * n2) + (4 * n3)) / 10);

    return media_total;   

}

int main(){

    float nota_1, nota_2, media_trab, media_final, faltante;

    printf("Informe a nota da primeira prova\n");
    scanf("%f", &nota_1);
    printf("Informe a nota da segunda prova\n");
    scanf("%f", &nota_2);
    printf("Informe a media dos trabalhos\n");
    scanf("%f", &media_trab);

    media_final = calculaMedia(nota_1, nota_2, media_trab);

    if (media_final >= 7){
        printf("Aprovado por media: %.2f", media_final);
    }
    else{
        faltante = (10 - media_final);
        printf("Em exame, necessita tirar %.2f na prova. Media atual: %.2f\n", faltante, media_final);
    }

    return 0;

}