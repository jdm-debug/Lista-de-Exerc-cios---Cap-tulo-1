/*Questão 03
a) Imprime 36, 18, 9, 4, 2 e 1, separados por tab. Como a é int, 9 / 2 dá 4 (a parte decimal é descartada). Quando a chega em 1, 1 / 2 dá 0 e o teste a > 0 falha.
36	18	9	4	2	1
b) O laço fica lendo teclas com getch() (que lê sem precisar apertar Enter e sem mostrar a tecla na tela) até o usuário digitar X maiúsculo. Para cada tecla lida, ele imprime o caractere seguinte da tabela ASCII, porque ch + 1 soma 1 ao código do caractere. Por exemplo, digitando a aparece b, digitando H aparece I.
Os parênteses são necessários porque o != tem prioridade maior que o =. Sem eles, a expressão seria lida como ch = (getch() != 'X'), e ch receberia 0 ou 1 (o resultado da comparação) em vez da tecla digitada.
c) Colocando dentro do laço um if com break (ou return, ou exit()) para quando alguma condição acontecer. O break é o mais comum, ele sai do laço e o programa continua normalmente depois dele.*/