/* Questao 11 - Ordenacao crescente de tres inteiros (sem vetores) */
#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (a > b) { temp = a; a = b; b = temp; }

    printf("Ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}
