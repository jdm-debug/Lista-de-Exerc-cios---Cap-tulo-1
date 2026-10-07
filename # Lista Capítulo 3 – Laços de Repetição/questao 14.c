#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }

    printf("\nSoma dos quadrados: %d\n", soma);   // 338350
    return 0;
}