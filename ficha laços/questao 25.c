#include <stdio.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero tem que ser positivo.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            divisores++;
    }

    printf("%d tem %d divisor(es).\n", n, divisores);

    if (divisores == 2)
        printf("%d e primo.\n", n);
    else
        printf("%d nao e primo.\n", n);

    return 0;
}