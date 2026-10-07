#include <stdio.h>

int main() {
    int n, lin, col, num = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N tem que ser positivo.\n");
        return 0;
    }

    for (lin = 1; lin <= n; lin++) {
        for (col = 1; col <= lin; col++) {
            printf("%d", num);
            if (col < lin)
                printf(" ");
            num++;
        }
        printf("\n");
    }

    return 0;
}