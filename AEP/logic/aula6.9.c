#include <stdio.h>

// O banco GASTADOR Ltda. deseja utilizar o computador para determinar o limite da conta especial de seus clientes a partir do saldo da conta corrente e da poupança.
// Escreva um algoritmo (em CHAPIN) para ler o saldo da conta corrente e da poupança de um cliente e escrever o seguinte:
// - A mensagem: ‘SEM CONTA ESPECIAL’ se o cliente NÃO possuir o requisito necessário para a conta especial. 
// (REQUISITO PARA POSSUIR CONTA ESPECIAL: o saldo em pelo menos uma das duas contas deve estar acima de R$1000,00)
// - O valor do limite da conta conforme especificação abaixo:
// * O valor limite da conta especial fornecido ao cliente deve ser o dobro do maior saldo (entre c.corrente e poupança) ou o tripo do menor saldo.
// Deve ser fornecido o valor de limite maior entre essas 2 situações.
// OBS: Considere que os saldos da c.corrente e poupança não são iguais.

int main () {

    float conta_corrente, conta_poupanca, conta_especial1, conta_especial2;

    printf("Informe o saldo da conta corrente\n");
    scanf("%f", &conta_corrente);
    printf("Informe o saldo da conta poupanca\n");
    scanf("%f", &conta_poupanca);

    if (conta_corrente > conta_poupanca) {
        conta_especial1 = conta_corrente * 2;
        conta_especial2 = conta_poupanca * 3;
    } else {
        conta_especial1 = conta_corrente * 3;
        conta_especial2 = conta_poupanca * 2;
    } 
    if (conta_corrente < 1000 && conta_poupanca < 1000) {
        printf("Voce nao tem direito a conta especial");
    } else if (conta_especial1 > conta_especial2) {
        printf("Voce tem direito a uma conta especial com limite de %.2f", conta_especial1);
    } else if (conta_especial1 < conta_especial2) {
        printf("Voce tem direito a uma conta especial com limite de %.2f", conta_especial2);
    }
    return 0;

}