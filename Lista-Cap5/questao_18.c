#include <stdio.h>

long potencia(int base, int expoente);

int main() {
    int base, exp;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &exp);
    if (exp < 0) {
        printf("Erro: o expoente nao pode ser negativo.\n");
        return 1;
    }
    printf("%d^%d = %ld\n", base, exp, potencia(base, exp));
    return 0;
}

long potencia(int base, int expoente) {
    if (expoente == 0)                                /* caso base: x^0 = 1 */
        return 1;
    return (long)base * potencia(base, expoente - 1); /* passo recursivo */
}
