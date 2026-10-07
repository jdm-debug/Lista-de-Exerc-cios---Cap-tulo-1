/*Questão 04
a) O break sai do laço na hora. O resto do corpo não é executado, a condição não é testada de novo e o programa continua na primeira instrução depois do laço.
b) O continue pula o que falta do corpo naquela iteração, mas não sai do laço. No for, depois do continue é executado o incremento (a terceira expressão do cabeçalho) e depois o teste. Se o teste for verdadeiro, começa a próxima iteração.
for (i = 1; i <= 5; i++) {
    if (i == 3)
        continue;
    printf("%d ", i);   // imprime 1 2 4 5
}
c) Só o laço interno. O externo continua normalmente na próxima iteração dele. Para sair dos dois de uma vez, seria preciso usar uma variável de controle (flag) testada no laço externo, ou um return.*/