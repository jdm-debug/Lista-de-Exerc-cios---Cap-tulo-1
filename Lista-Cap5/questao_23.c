#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main() {
    /* Macro sem parenteses: DOBRO(2+3) vira 2+3*2 = 8, pois a macro apenas
       substitui texto e a multiplicacao tem precedencia sobre a soma.
       Funcao: o argumento 2+3 e avaliado antes da chamada -> 5, e dobro(5) = 10. */
    printf("Macro  DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3) = %d\n", dobro(2+3));

#undef DOBRO
#define DOBRO(x) ((x) * 2)
    /* Com parenteses de protecao: ((2+3) * 2) = 10 */
    printf("Macro corrigida DOBRO(2+3) = %d\n", DOBRO(2+3));
    return 0;
}

int dobro(int x) {
    return x * 2;
}
