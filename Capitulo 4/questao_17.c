/* Questao 17 - Pagamento e comissao de vendas */
#include <stdio.h>

int main() {
    double valor, final, parcela, comissao;
    int opcao;

    printf("Valor total da compra: ");
    scanf("%lf", &valor);
    printf("Forma de pagamento (1 = A vista com 10%% de desconto; 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            final = valor * 0.90;
            comissao = final * 0.05;
            printf("Valor final a pagar (a vista): R$ %.2f\n", final);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;
        case 2:
            parcela = valor / 3.0;
            comissao = valor * 0.05;
            printf("Valor de cada parcela (3x): R$ %.2f\n", parcela);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;
        default:
            printf("Erro: opcao de pagamento invalida!\n");
    }

    return 0;
}
