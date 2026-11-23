#include <stdio.h>

/* Para ver as mensagens de depuracao, compile com -DDEBUG
   (gcc questao_24.c -DDEBUG) ou descomente a linha abaixo.
   Sem DEBUG: o codigo dentro de #ifdef nem chega a ser compilado,
   entao o executavel nao imprime os valores parciais.
   Com DEBUG: o pre-processador inclui o printf no codigo, e cada soma parcial e exibida. */
/* #define DEBUG */

int somaAteN(int n);

int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}
