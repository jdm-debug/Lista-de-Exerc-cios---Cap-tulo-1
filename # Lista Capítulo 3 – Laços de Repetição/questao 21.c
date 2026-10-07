#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));
    secreta = rand() % 26 + 'a';

    do {
        printf("Adivinhe a letra (a-z): ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreta)
            printf("A letra secreta vem depois de %c.\n", palpite);
        else if (palpite > secreta)
            printf("A letra secreta vem antes de %c.\n", palpite);

    } while (palpite != secreta);

    printf("Parabens, voce acertou! A letra era %c.\n", secreta);
    printf("Total de tentativas: %d\n", tentativas);
    return 0;
}