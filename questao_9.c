
 
 /* O especificador %c espera receber um caractere do tipo char(passado com aspas simples).
 * Os caracteres entre aspas simples, como '\n', '\t' e '\"', são
 * interpretados como UM ÚNICO caractere e são traduzidos para o código correspondente:
 *   '\n' = quebra de linha 
 *   '\t' = tabulação       
 *   '\"' = aspas duplas    
 *
 * O erro  está na linha do "\""(aspas duplas). Isso é uma string (char*), não um char.
 * Como o %c não aceita string, isso gera incompatibilidade causando comportamento indefinido.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Cada %c consome um argumento na ordem: \n, \t, \" (quebra linha, dá tab e põe a aspa antes do texto)*/
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
    /* Saida:
    
    	"Primeiro programa */

    /* ERRO: "\"" é string (char*), e não char (comportamento indefinido) */
    printf("%c", "\"");
    /* Saida: imprevisível (warning de tipo incompatível) */

    system("PAUSE");
    return 0;
}