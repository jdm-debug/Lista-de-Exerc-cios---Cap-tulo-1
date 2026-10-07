/*Questão 05
a) 5 iterações. O i aumenta 1 e o j diminui 1 a cada volta, então depois de 5 voltas os dois valem 5, e 5 < 5 é falso.
b) Saída:
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
A soma é sempre 10 porque um sobe o mesmo tanto que o outro desce.
c) Com while:
int i = 0, j = 10;

while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}*/