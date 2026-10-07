#include <stdio.h>

int main() {
    int num, i, achou = 0;

    printf("Digite um numero limite: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            achou = 1;
        }
    }

    if (achou == 0)
        printf("Nenhum numero entre 1 e %d e multiplo de 3 e de 5.", num);

    printf("\n");
    return 0;
}