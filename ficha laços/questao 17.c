#include <stdio.h>

int main() {
    float nota, maior, menor, soma = 0;
    int qtd = 0;

    printf("Digite as notas (-1 para encerrar):\n");
    scanf("%f", &nota);

    while (nota != -1) {
        if (nota < 0 || nota > 10) {
            printf("Nota invalida, digite de novo.\n");
        } else {
            if (qtd == 0) {
                maior = nota;
                menor = nota;
            } else {
                if (nota > maior) maior = nota;
                if (nota < menor) menor = nota;
            }
            soma += nota;
            qtd++;
        }
        scanf("%f", &nota);
    }

    if (qtd == 0) {
        printf("Nenhuma nota foi digitada.\n");
    } else {
        printf("Total de alunos: %d\n", qtd);
        printf("Maior nota: %.1f\n", maior);
        printf("Menor nota: %.1f\n", menor);
        printf("Media da turma: %.2f\n", soma / qtd);
    }

    return 0;
}