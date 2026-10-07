/*Questão 02
a) Porque a variável soma foi declarada dentro das chaves do for, então ela só existe dentro desse bloco. Quando o printf tenta usar soma fora dele, o compilador não reconhece a variável e dá erro de variável não declarada.
b) Porque o int soma = 0; está dentro do laço, então a cada volta a variável é criada de novo valendo zero. Ela nunca acumula nada, só guarda o i * i da iteração atual (1, 4, 9, ...) em vez da soma de todos.
c) Código corrigido:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;   // agora fora do for

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);   // 285
    system("PAUSE");
    return 0;
}*/
/*Escopo é a parte do código onde uma variável pode ser usada. Em C, uma variável declarada dentro de um bloco { } só é visível dentro dele (escopo de bloco). Os blocos de dentro enxergam as variáveis de fora, mas o contrário não.
Tempo de vida é quanto tempo a variável existe na memória. Uma variável local é criada quando o programa entra no bloco e deixa de existir quando sai dele. Num laço isso acontece a cada iteração, por isso a soma era zerada toda vez. A solução é declarar o acumulador antes do for, assim ele continua existindo entre as iterações e pode ser usado depois do laço.