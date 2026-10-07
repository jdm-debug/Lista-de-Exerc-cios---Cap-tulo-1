#include <stdio.h>

int main() {
    int n, lin, col;

    do {
        printf("Digite um numero impar entre 3 e 19: ");
        scanf("%d", &n);
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (lin = 1; lin <= n; lin++) {
        for (col = 1; col <= n; col++) {
            if (col == lin || col == n - lin + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}