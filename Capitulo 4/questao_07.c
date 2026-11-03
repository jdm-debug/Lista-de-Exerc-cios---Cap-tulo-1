/* Questao 07 - Raiz quadrada ou quadrado de um numero real
 * Compilar com: gcc questao_07.c -o questao_07 -lm */
#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Digite um numero real: ");
    scanf("%lf", &x);

    if (x >= 0) {
        printf("Raiz quadrada de %.2f = %.4f\n", x, sqrt(x));
    } else {
        printf("Quadrado de %.2f = %.4f\n", x, x * x);
    }

    return 0;
}
