#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int n;
    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Valor invalido!\n");
        return 1;
    }
    long a = fatorialIterativo(n);
    long b = fatorialRecursivo(n);
    printf("Iterativo: %ld\n", a);
    printf("Recursivo: %ld\n", b);
    if (a == b)
        printf("Os resultados coincidem.\n");
    else
        printf("Os resultados sao diferentes.\n");
    return 0;
}

long fatorialIterativo(int n) {
    long r = 1;
    for (int i = 2; i <= n; i++)
        r *= i;
    return r;
}

long fatorialRecursivo(int n) {
    if (n <= 1)                        /* caso base */
        return 1;
    return (long)n * fatorialRecursivo(n - 1);
}
