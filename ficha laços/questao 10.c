#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 100; i++) {
        printf("%d\t", i * 3);

        if (i % 10 == 0)   // a cada 10 numeros pula linha
            printf("\n");
    }

    return 0;
}