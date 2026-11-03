/* Questao 27 - Tarifador de estacionamento */
#include <stdio.h>

int main() {
    int horas;
    double valor;

    printf("Numero de horas de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: numero de horas invalido!\n");
        return 1;
    }

    if (horas <= 2) {
        valor = horas * 2.00;
    } else if (horas <= 4) {
        valor = 2 * 2.00 + (horas - 2) * 2.50;
    } else {
        valor = 2 * 2.00 + 2 * 2.50 + (horas - 4) * 3.00;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor final: R$ %.2f\n", valor);

    return 0;
}
