/* Questao 24 - Classificacao de triangulos quanto aos angulos */
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tres angulos internos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Erro: os angulos nao formam um triangulo valido!\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triangulo Retangulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triangulo Obtusangulo\n");
    } else {
        printf("Triangulo Acutangulo\n");
    }

    return 0;
}
