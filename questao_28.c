#include <stdio.h>

int main() {
    int num1, num2, num3;
    double media;

    printf("Digite tres valores inteiros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    media = (num1 + num2 + num3) / 3.0;

    printf("A media aritmetica e: %.2f\n", media);

    return 0;
}