/* Questao 09 - Media ponderada e situacao academica */
#include <stdio.h>

int main() {
    double lab, semestral, final, media;

    printf("Nota do Trabalho de Laboratorio (peso 2): ");
    scanf("%lf", &lab);
    printf("Nota da Avaliacao Semestral (peso 3): ");
    scanf("%lf", &semestral);
    printf("Nota do Exame Final (peso 5): ");
    scanf("%lf", &final);

    media = (lab * 2 + semestral * 3 + final * 5) / 10.0;

    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situacao: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Aprovado\n");
    }

    return 0;
}
