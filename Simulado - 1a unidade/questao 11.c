#include <stdio.h>

#define VALOR_DIA     45.00
#define TAXA_GRATIF    0.05
#define TAXA_IR        0.08

int main(void) {
    int dias;
    float bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto        = dias * VALOR_DIA;
    gratificacao = bruto * TAXA_GRATIF;
    imposto      = bruto * TAXA_IR;
    liquido      = bruto + gratificacao - imposto;

    printf("\n========== HOLERITE ==========\n");
    printf("Dias trabalhados:      %d\n", dias);
    printf("Valor por dia:         R$ %8.2f\n", VALOR_DIA);
    printf("------------------------------\n");
    printf("Salario bruto:         R$ %8.2f\n", bruto);
    printf("(+) Gratificacao (5%%): R$ %8.2f\n", gratificacao);
    printf("(-) Imposto (8%%):      R$ %8.2f\n", imposto);
    printf("------------------------------\n");
    printf("Salario liquido:       R$ %8.2f\n", liquido);
    printf("==============================\n");

    return 0;
}
