/* Dados três números inteiros correspondentes, respectivamente, ao dia, mês e ano de nascimento de uma pessoa e três outros números correspondentes ao dia, mês e ano
corrente (ex. data de hoje), calcular e imprimir a idade em anos completos. Verificar se as datas são compatíveis (nascimento <= corrente). */

#include <stdio.h>

int main(){

    int dia_atual, mes_atual, ano_atual, dia_anv, mes_anv, ano_anv, idade = 0;

    printf("Informe a data atual (separado por espacos)\n");
    scanf("%d%d%d", &dia_atual,&mes_atual,&ano_atual);
    printf("Informe a data de nascimento (separada por espacos)\n");
    scanf("%d%d%d", &dia_anv,&mes_anv,&ano_anv);

    while (dia_anv == dia_atual && mes_anv == mes_atual && ano_anv == ano_atual){
        printf("Informe uma data de nascimento compativel\n");
        scanf("%d%d%d", &dia_anv,&mes_anv,&ano_anv);
    }

    if (ano_atual >= ano_anv){
        idade = (ano_atual - ano_anv);
        if (mes_atual < mes_anv){
            idade--;
        }
        else if (mes_atual == mes_anv){
            if (dia_atual < dia_anv){
                idade--;
            }
        }
    }

    printf("Idade: %d", idade);
    
}
