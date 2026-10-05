#include <stdio.h>

int main(void) {
    float nota;

    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: nota invalida! A nota deve estar entre 0.0 e 10.0.\n\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("\nNota valida registrada: %.1f\n", nota);

    return 0;
}
