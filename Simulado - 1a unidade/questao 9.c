#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p, area;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    p = (a + b + c) / 2.0;
    printf("O semiperimetro e: %f\n", p);

    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("A area total do triangulo e: %f\n", area);

    return 0;
}
