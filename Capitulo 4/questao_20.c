/* Questao 20 - Equacao do segundo grau (Bhaskara)
 * Compilar com: gcc questao_20.c -o questao_20 -lm */
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a (diferente de 0): ");
    scanf("%lf", &a);

    if (a == 0) {
        printf("Erro: a deve ser diferente de zero!\n");
        return 1;
    }

    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;
    printf("Delta = %.2f\n", delta);

    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz unica: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes distintas: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}
