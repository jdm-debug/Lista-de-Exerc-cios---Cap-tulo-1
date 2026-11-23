#include <stdio.h>

long fibonacci(int n);

int main() {
    int n;
    printf("Quantidade de termos: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        printf("%ld ", fibonacci(i));
    printf("\n");
    return 0;
}

/* A versao recursiva fica lenta para n grande porque recalcula os mesmos
   subproblemas varias vezes: fibonacci(n) chama fibonacci(n-1) e fibonacci(n-2),
   que por sua vez repetem chamadas. O numero de chamadas cresce de forma
   exponencial (aprox. 2^n). */
long fibonacci(int n) {
    if (n == 0) return 0;   /* casos base */
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
