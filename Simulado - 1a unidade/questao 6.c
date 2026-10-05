/*Letra a:
Porque a variável soma foi declarada dentro do bloco do for, e por isso só existe dentro dele. Quando o laço termina, a variável deixa de existir. Como o printf está fora do for, ele faz referência a uma variável que não existe naquele ponto do código, e o compilador acusa erro de variável não declarada. 
Letra b:
As iterações executadas por completo são i = 1, 2, 3, 4, 6 e 7.
Quando i vale 5, o continue interrompe aquela iteração antes do cálculo e passa direto para a próxima (i = 6), então o 5 não é somado.
Quando i vale 8, o break encerra o laço imediatamente, e o programa segue para depois do for. Por isso, as iterações 9 e 10 nunca acontecem.
Resumindo o impacto no fluxo: o continue pula apenas uma volta e o laço continua, enquanto o break encerra o laço de vez.
Letra c:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
*/