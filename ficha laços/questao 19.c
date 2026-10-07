#include <stdio.h>

int main() {
    int n, i;
    long long anterior = 0, atual = 1, prox;

    printf("Digite o numero do termo (N): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("N tem que ser maior ou igual a 1.\n");
        return 0;
    }

    printf("Termos: ");
    for (i = 1; i <= n; i++) {
        printf("%lld ", atual);
        prox = anterior + atual;
        anterior = atual;
        atual = prox;
    }

    // no fim do laco o termo N ficou guardado em anterior
    printf("\nO termo %d da sequencia e %lld\n", n, anterior);
    return 0;
}