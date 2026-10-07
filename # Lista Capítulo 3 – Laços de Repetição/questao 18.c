#include <stdio.h>

int main() {
    int num, digito, invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (num > 0) {
        digito = num % 10;
        invertido = invertido * 10 + digito;
        num = num / 10;
    }

    printf("Numero invertido: %d\n", invertido);
    return 0;
}