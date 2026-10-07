#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite a nota (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10)
            printf("Erro: nota invalida, digite um valor entre 0 e 10.\n");

    } while (nota < 0 || nota > 10);

    printf("Nota registrada com sucesso!\n");
    return 0;
}