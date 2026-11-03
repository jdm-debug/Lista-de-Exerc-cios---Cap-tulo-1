/* Questao 25 - Troco com a menor quantidade de cedulas */
#include <stdio.h>

int main() {
    int total, entregue, troco;
    int c100, c50, c20, c10, c5, c2;

    printf("Valor total a pagar: ");
    scanf("%d", &total);
    printf("Valor entregue pelo cliente: ");
    scanf("%d", &entregue);

    if (entregue < total) {
        printf("Erro: valor entregue insuficiente!\n");
        return 1;
    }

    troco = entregue - total;
    printf("Troco: R$ %d\n", troco);

    c100 = troco / 100; troco = troco % 100;
    c50  = troco / 50;  troco = troco % 50;
    c20  = troco / 20;  troco = troco % 20;
    c10  = troco / 10;  troco = troco % 10;
    c5   = troco / 5;   troco = troco % 5;
    c2   = troco / 2;   troco = troco % 2;

    if (c100 > 0) printf("%d cedula(s) de R$ 100\n", c100);
    if (c50  > 0) printf("%d cedula(s) de R$ 50\n",  c50);
    if (c20  > 0) printf("%d cedula(s) de R$ 20\n",  c20);
    if (c10  > 0) printf("%d cedula(s) de R$ 10\n",  c10);
    if (c5   > 0) printf("%d cedula(s) de R$ 5\n",   c5);
    if (c2   > 0) printf("%d cedula(s) de R$ 2\n",   c2);

    if (troco > 0) {
        printf("Restante de R$ %d nao pode ser pago com as cedulas disponiveis.\n", troco);
    }

    return 0;
}
