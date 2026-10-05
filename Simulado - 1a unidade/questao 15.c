#include <stdio.h>

int main(void) {
    int n, linha, coluna;
    int numero = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 1;
    }

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            if (coluna > 1) {
                printf(" ");
            }
            printf("%d", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}
