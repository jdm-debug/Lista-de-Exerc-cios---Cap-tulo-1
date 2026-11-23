#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Valor invalido!\n");
        return 1;
    }
    contagem(n);
    printf("\nVersao crescente:\n");
    contagemCrescente(n);
    return 0;
}

/* printf ANTES da chamada recursiva: imprime n, n-1, ..., 1 (regressivo) */
void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

/* printf DEPOIS da chamada recursiva: os valores sao impressos na fase de
   desempilhamento, ou seja, na ordem inversa: 1, 2, ..., n */
void contagemCrescente(int n) {
    if (n == 0)
        return;
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
