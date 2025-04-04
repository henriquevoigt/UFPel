/* Construa um programa que leia uma string s, e dois caracteres a e b. Em seguida, o programa deve substituir todas as ocorrências do caractere a na string s pelo caractere b. 
(Observação: a e b são informados pelo usuário e podem ser qualquer letra) */

#include <stdio.h>
#include <string.h>

int main(){

    char string_S[100], char_a, char_b;

    printf("Informe o texto\n");
    fgets(string_S, 100, stdin);
    printf("Informe um caractere\n");
    scanf(" %c", &char_a);
    printf("Qual char deve ser substituito?\n");
    scanf(" %c", &char_b);

    for (int lp_ctrl = 0; string_S[lp_ctrl] != '\0'; lp_ctrl++){
        if (string_S[lp_ctrl] == char_b){
            string_S[lp_ctrl] = char_a;
        }
    }
    printf("%s", string_S);
}
