/*Linha 1: a += b + c;
 O lado direito é calculado primeiro: b + c = 4 + 5 = 9. Então a = 2 + 9 = 11.
Linha 2: b *= c = d - 2;
 Da direita para a esquerda: primeiro c = d - 2, ou seja, c = 10 − 2 = 8. Essa atribuição devolve o valor 8, que é usado em b *= 8, então b = 4 × 8 = 32.
Linha 3: d %= a + 3;
 O lado direito vale 11 + 3 = 14. Então d = 10 % 14 = 10 (como 10 é menor que 14, o quociente é 0 e o resto é o próprio 10).
Linha 4: a += b += c += 5;
 Novamente da direita para a esquerda:
c += 5 → c = 8 + 5 = 13
b += 13 → b = 32 + 13 = 45
a += 45 → a = 11 + 45 = 56
a = 56
b = 45
c = 13
d = 10
*/