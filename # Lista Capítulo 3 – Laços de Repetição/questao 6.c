/*Questão 06
a) Imprime Valor final de x = 6.
b) Em x++ < 5, a comparação usa o valor de x antes de incrementar, e o incremento acontece logo depois, mesmo quando o teste dá falso. A sequência fica assim:
x = 0 -> 0 < 5 verdadeiro, x passa a 1
x = 1 -> 1 < 5 verdadeiro, x passa a 2
x = 2 -> 2 < 5 verdadeiro, x passa a 3
x = 3 -> 3 < 5 verdadeiro, x passa a 4
x = 4 -> 4 < 5 verdadeiro, x passa a 5
x = 5 -> 5 < 5 falso,      x passa a 6 e o laco termina
Por isso o valor final é 6 e não 5: o último teste, que é falso, também incrementa o x.
c) Versão sem corpo vazio:
int x = 0;

while (x < 5) {
    x++;
}
x++;   // o incremento do ultimo teste (o falso)

printf("Valor final de x = %d\n", x);*/