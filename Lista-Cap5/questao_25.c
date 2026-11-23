#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    int a, b, num, den;
    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);
    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));

    printf("Digite numerador e denominador: ");
    scanf("%d %d", &num, &den);
    if (den == 0) {
        printf("Denominador nao pode ser zero.\n");
        return 1;
    }
    simplifica(num, den);
    return 0;
}

int mdc(int a, int b) {
    if (b == 0)             /* caso base */
        return a;
    return mdc(b, a % b);   /* passo recursivo: algoritmo de Euclides */
}

void simplifica(int num, int den) {
    int g = mdc(num < 0 ? -num : num, den < 0 ? -den : den);
    if (g == 0) g = 1;
    printf("Fracao simplificada: %d/%d\n", num / g, den / g);
}
