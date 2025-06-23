/* Faça um programa que recebe lê n conceitos de alunos (n é fornecido no início do programa) e conta quantos conceitos de cada tipo existem.
Os conceitos possíveis são: A, B, C, D, E e podem ser fornecidos com letras maiúsculas ou minúsculas. */

#include <stdio.h>

int main(){

    int controle, contador_A = 0, contador_B = 0, contador_C = 0, contador_D = 0, contador_E = 0;
    char conceito;

    printf("Quantos conceitos deseja ler?\n");
    scanf("%d", &controle);
    getchar();

    while (controle > 0){
        printf("Informe o conceito\n");
        scanf("%c", &conceito);
        getchar();

        if (conceito == 'a' || conceito == 'A'){
            contador_A++;
        }
        else if (conceito == 'b' || conceito == 'B'){
            contador_B++;
        }
        else if (conceito == 'c' || conceito == 'C'){
            contador_C++;
        }
        else if (conceito == 'd' || conceito == 'D'){
            contador_D++;
        }
        else if (conceito == 'e' || conceito == 'E'){
            contador_E++;
        }
        else {
            printf("Conceito invalido\n");
        }

        controle--;
    }

    printf ("Conceito A: %d\nConceito B: %d\nConceito C: %d\nConceito D: %d\nConceito E: %d", contador_A, contador_B, contador_C, contador_D, contador_E);

    return 0;
}