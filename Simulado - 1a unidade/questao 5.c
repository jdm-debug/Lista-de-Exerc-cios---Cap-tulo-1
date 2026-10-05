/*5) letra a:
A diferença está no momento do teste. O while testa a condição antes de executar o bloco, então, se ela for falsa logo de início, o bloco não é executado nenhuma vez (mínimo de 0 execuções). O do-while executa o bloco primeiro e testa a condição no final, garantindo pelo menos 1 execução, mesmo que a condição seja falsa desde o início.
letra b: 
 O for é a escolha mais elegante quando o número de repetições é conhecido antes de o laço começar, como em repetições controladas por contador ou no percurso de vetores. Isso porque ele reúne inicialização, condição e incremento em um único cabeçalho, deixando o controle do laço visível em uma só linha e reduzindo o risco de esquecer o incremento. Já o while é mais adequado quando a quantidade de repetições depende de algo que só se descobre durante a execução. 
letra c:
É um erro de lógica, e não de compilação, porque o código compila normalmente, sem nenhuma mensagem de erro.
Isso acontece porque o ; logo após o while (condicao) é entendido pelo C como uma instrução vazia, que passa a ser o corpo do laço. Assim, o bloco entre chaves que viria depois fica separado do while e deixa de ser repetido.
Se a condição for verdadeira, o programa entra em um laço infinito: ele fica repetindo a instrução vazia para sempre, sem nunca alterar a condição. O programa trava, nada aparece na tela e o código que deveria ser repetido nunca é executado.
*/