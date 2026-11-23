#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, pago, subtotal, total;
    int quantidade, opcao;

    printf("Preco unitario: ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    printf("Forma de pagamento (1 - A vista com 10%% de desconto, 2 - Outra): ");
    scanf("%d", &opcao);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcao);

    printf("Valor pago: ");
    scanf("%f", &pago);
    if (pago < total) {
        printf("Valor insuficiente!\n");
        return 1;
    }

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);
    printf("Troco: R$ %.2f\n", calculaTroco(total, pago));
    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1)
        return valor * 0.90;
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
