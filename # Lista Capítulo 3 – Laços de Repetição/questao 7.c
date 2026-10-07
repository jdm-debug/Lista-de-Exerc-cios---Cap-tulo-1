#include <stdio.h>

void versaoFor() {
    int i;
    for (i = 0; i <= 100; i++)
        printf("%d ", i);
    printf("\n\n");
}

void versaoWhile() {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

void versaoDoWhile() {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main() {
    printf("Versao com for:\n");
    versaoFor();

    printf("Versao com while:\n");
    versaoWhile();

    printf("Versao com do-while:\n");
    versaoDoWhile();

    return 0;
}
