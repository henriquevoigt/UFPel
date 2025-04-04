/* Faça um programa que possua uma estrutura para armazenar 2 horários (hora, minuto, segundo). Esse programa deve ler esses dois horários e informar a diferença entre eles
(informar a diferença no formato hh:mm:ss). */

#include <stdio.h>

struct horario{
    int hora, minuto, segundo;
}; 

struct horario calcula_hora(struct horario inicial, struct horario final){
    struct horario diferenca;
    int segundos_inicio, segundos_fim, dif_segundos;

    segundos_inicio = inicial.hora * 3600 + inicial.minuto * 60 + inicial.segundo;
    segundos_fim = final.hora * 3600 + final.minuto * 60 + final.segundo;
    dif_segundos = segundos_inicio - segundos_fim;
    diferenca.hora = dif_segundos / 3600;
    dif_segundos %= 3600;
    diferenca.minuto = dif_segundos / 60;
    diferenca.segundo = dif_segundos % 60;

    return diferenca;
    
}

int main(){

    struct horario horario[2], diferenca;

    for (int lp_ctrl = 0; lp_ctrl < 2; lp_ctrl++){
        printf("Informe a hora\n");
        scanf("%d", &horario[lp_ctrl].hora);
        printf("Informe os minutos\n");
        scanf("%d", &horario[lp_ctrl].minuto);
        printf("Informe os segundos\n");
        scanf("%d", &horario[lp_ctrl].segundo);
        printf("%d:%d:%d\n", horario[lp_ctrl].hora, horario[lp_ctrl].minuto, horario[lp_ctrl].segundo);
    }

    diferenca = calcula_hora(horario[0], horario[1]); 

    printf("A diferenca entre os 2 horarios eh de %d : %d : %d", diferenca.hora, diferenca.minuto, diferenca.segundo);
    
}