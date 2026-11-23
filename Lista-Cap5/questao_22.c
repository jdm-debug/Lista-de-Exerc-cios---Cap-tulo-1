#include <stdio.h>
#include "areas.h"

int main() {
    float raio, base, alt;
    printf("Raio do circulo: ");
    scanf("%f", &raio);
    printf("Base e altura (retangulo e triangulo): ");
    scanf("%f %f", &base, &alt);
    printf("Area do circulo   = %.2f\n", A_CIRC(raio));
    printf("Area do retangulo = %.2f\n", A_RET(base, alt));
    printf("Area do triangulo = %.2f\n", A_TRI(base, alt));
    return 0;
}
