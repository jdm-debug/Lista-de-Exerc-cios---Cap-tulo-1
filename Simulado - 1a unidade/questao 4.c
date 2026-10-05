/*Valores: i = 2, j = 3, k = 0, x = 2.5, y = 5.0. 
  a) i < j + 2
 A soma vem antes da comparação: j + 2 = 5. Então 2 < 5 é verdadeiro. Resultado: 1
b) 2 * i - 5 <= j - 4
 Lado esquerdo: 2 × 2 − 5 = −1. Lado direito: 3 − 4 = −1. Então −1 <= −1 é verdadeiro (são iguais). Resultado: 1
c) !k && (x + y >= 7.5)
 Como k = 0, !k vale 1. Nos parênteses, 2.5 + 5.0 = 7.5, e 7.5 >= 7.5 é verdadeiro. Então 1 && 1. Resultado: 1
d) !(i == j) || (y / x == 2.0)
 i == j é 2 == 3, falso (0), e !0 vale 1. Como o lado esquerdo do || já é verdadeiro, ocorre curto-circuito e o lado direito nem é avaliado. (Mesmo que fosse, 5.0 / 2.5 = 2.0 também seria verdadeiro.) Resultado: 1
e) i == 2 && j == 4 || k == 0
 Esta é a pegadinha de precedência: o && é avaliado antes do ||, então a expressão equivale a (i == 2 && j == 4) || (k == 0). O primeiro grupo é 1 && 0 = 0. O segundo, k == 0, é 1. Então 0 || 1. Resultado: 1
*/