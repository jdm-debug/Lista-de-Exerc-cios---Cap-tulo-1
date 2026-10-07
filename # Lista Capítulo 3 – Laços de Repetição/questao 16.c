#include <stdio.h>

int main() {
    int senhaCorreta = 2026;
    int senha, tentativas = 0, acertou = 0;

    while (tentativas < 3 && acertou == 0) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++;

        if (senha == senhaCorreta)
            acertou = 1;
        else if (tentativas < 3)
            printf("Senha incorreta! Restam %d tentativa(s).\n", 3 - tentativas);
    }

    if (acertou) {
        printf("Acesso Concedido!\n");
        printf("Tentativas usadas: %d\n", tentativas);
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}