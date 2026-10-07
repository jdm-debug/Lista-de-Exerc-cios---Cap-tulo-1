#include <stdio.h>

int main() {
    int l, lin, col;

    do {
        printf("Digite o lado do quadrado (3 a 20): ");
        scanf("%d", &l);
    } while (l < 3 || l > 20);

    for (lin = 1; lin <= l; lin++) {
        for (col = 1; col <= l; col++) {
            if (lin == 1 || lin == l || col == 1 || col == l)
                printf("X");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}