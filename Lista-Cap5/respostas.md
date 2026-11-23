# Lista de Exercícios – Capítulo 5: Funções
**Disciplina:** Programação Imperativa e Funcional (PIF) – 2026.2

## Parte I – Questões Teóricas e Analíticas

### Questão 01 – Anatomia de uma função e o papel do protótipo

**a)** 
- **Protótipo:** `float celsius(float);` (antes da `main`). Informa ao compilador o nome, o tipo de retorno e os tipos dos parâmetros da função, antes de ela ser usada.
- **Chamada:** `c = celsius(f);` (dentro da `main`). É o ponto em que a função é executada: o valor de `f` é passado como argumento e o valor retornado é guardado em `c`.
- **Definição:** `float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }` (depois da `main`). É o corpo da função, com o código que realmente faz o cálculo.

**b)** O protótipo permite que o compilador verifique se a chamada está correta (quantidade e tipos dos argumentos e uso do valor de retorno) mesmo que a definição venha depois. Se ele fosse omitido e a função fosse definida depois da `main()`, o compilador não conheceria `celsius` no momento da chamada. Em C antigo, ele assumiria um retorno `int` e não verificaria os parâmetros, o que geraria resultado errado ou conflito de tipos quando encontrasse a definição. Em compiladores modernos, isso gera erro ou aviso.

**c)** O tipo de `celsius()` é `float`. O tipo de uma função é determinado pelo valor que ela **retorna**, e não pelos parâmetros, porque é o tipo do retorno que diz ao chamador como interpretar o valor que volta (como armazená-lo e usá-lo em expressões). Os parâmetros só descrevem o que a função recebe.

---

### Questão 02 – O comando `return` e suas limitações

**a)** Uma função em C devolve **apenas um valor** via `return`. O programador queria devolver dois valores (`soma` e `media`) em `calcular()`. Em `return soma, media;` o operador vírgula avalia `soma`, descarta e devolve só `media`. Portanto, a abordagem não cumpre o objetivo.

**b)** O `return;` dentro de `imprime_mensagem()` encerra a função imediatamente (se `erro < 0`, imprime "Erro invalido" e sai, sem executar o `printf` seguinte). Ele **não é obrigatório** no final de uma função `void`: ao chegar na chave de fechamento, a função termina sozinha, pois não há valor a devolver.

**c)**
```c
int media(int a, int b, int c) {      /* retorna apenas a média */
    int soma = a + b + c;
    return soma / 3;
}

int soma3(int a, int b, int c) {      /* retorna apenas a soma */
    return a + b + c;
}
```
Como o `return` devolve um único valor, são necessárias duas funções para obter dois resultados diferentes (outra opção seria usar ponteiros, vista mais adiante).

---

### Questão 03 – Funções `void`, parâmetros e assinaturas

**a)**
| Protótipo | Parâmetros | Retorno |
|---|---|---|
| `void exibe_mensagem(char* msg);` | 1 (ponteiro para char / string) | nenhum (`void`) |
| `int obter_codigo(void);` | nenhum | `int` |
| `void limpar_tela(void);` | nenhum | nenhum (`void`) |

**b)** Uma função **com retorno** calcula e devolve um valor ao chamador (por exemplo, `int soma(int a, int b)`, ideal quando o resultado será usado em outra expressão). Um **procedimento** (`void`) apenas executa uma ação, sem devolver valor (por exemplo, `void exibeMenu(void)`, ideal para imprimir algo na tela ou limpar a tela).

**c)** **Não é válida.** `limpar_tela()` é `void`, ou seja, não devolve nenhum valor; portanto não há o que atribuir a `x`. O compilador acusa erro.

---

### Questão 04 – Recursão: caso base, passo recursivo e pilha de execução

```c
long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}
```

**a)** O **caso base** é `n == 0` (retorna 1). O **passo recursivo** é `n * fatorial(n - 1)`. Se o caso base fosse removido, a função chamaria a si mesma indefinidamente (n assumiria 0, -1, -2...), nunca parando, até estourar a pilha.

**b)** Rastreamento de `fatorial(4)`:

*Empilhamento:*
```
fatorial(4) -> 4 * fatorial(3)
  fatorial(3) -> 3 * fatorial(2)
    fatorial(2) -> 2 * fatorial(1)
      fatorial(1) -> 1 * fatorial(0)
        fatorial(0) -> caso base, retorna 1
```
*Desempilhamento:*
```
fatorial(0) devolve 1
fatorial(1) devolve 1 * 1  = 1
fatorial(2) devolve 2 * 1  = 2
fatorial(3) devolve 3 * 2  = 6
fatorial(4) devolve 4 * 6  = 24
```
Resultado: **24**.

**c)** A cada chamada recursiva, um novo **registro de ativação (stack frame)** é empilhado na memória, contendo o parâmetro `n`, o endereço de retorno e as variáveis locais. Cada chamada fica "esperando" o resultado da próxima. Quando o caso base é atingido, os quadros são desempilhados um a um, devolvendo valores. Sem caso base, as chamadas nunca terminam, a pilha cresce até esgotar a memória reservada (*stack overflow*) e o programa falha.

---

### Questão 05 – `#define`, constantes e macros com argumentos

```c
#define PI 3.14
#define SQR(x) ((x)*(x))
#define DOBRO(x) x*2
printf("%d\n", SQR(2+3));
printf("%d\n", DOBRO(2+3));
```

**a)** 
- `SQR(2+3)` → `((2+3)*(2+3))` = **25**
- `DOBRO(2+3)` → `2+3*2` = 2 + 6 = **8**

A macro apenas **substitui texto**. `SQR` tem parênteses de proteção em volta do argumento e do resultado, então se comporta como esperado. `DOBRO` não tem, e a multiplicação por 2 acaba atingindo só o `3` por causa da precedência dos operadores.

**b)** A diretiva `#define` não termina com ponto e vírgula porque não é um comando C, e sim uma instrução para o pré-processador: tudo que vem depois do nome faz parte do texto de substituição (um `;` seria copiado junto e poderia causar erros). Por convenção, usam-se identificadores em **maiúsculas** para distinguir facilmente constantes e macros das variáveis e funções no código.

**c)** `#define PRN (n) printf("%d", n)` está incorreto porque o espaço entre `PRN` e `(n)` faz o pré-processador definir uma macro **sem argumentos** cujo texto é `(n) printf("%d", n)`. A forma correta é `#define PRN(n) printf("%d", n)` (sem espaço). 

Diferenças entre macro e função: a macro é expandida pelo pré-processador (substituição de texto, sem verificação de tipos, sem chamada em tempo de execução), podendo avaliar o argumento várias vezes; a função é compilada, tem tipos verificados, avalia os argumentos uma única vez e tem custo de chamada.

---

### Questão 06 – `#include`, `#undef` e compilação condicional

**a)** `#include <stdio.h>` (com `< >`) procura o arquivo nos diretórios de **cabeçalhos padrão** do compilador, e é usado para bibliotecas do sistema. `#include "areas.h"` (com aspas) procura primeiro no **diretório do projeto/arquivo atual** e depois nos diretórios padrão, e é usado para cabeçalhos criados pelo próprio programador.

**b)** `#undef SOMA` **remove a definição** da macro `SOMA`; a partir dali ela deixa de existir e pode ser redefinida. A forma `#undef SOMA(x,y)` está incorreta porque `#undef` recebe apenas o **nome** do identificador, sem lista de parâmetros.

**c)** Se `DEBUG` não foi definido, será impressa a mensagem **"Modo normal"**. Essa decisão é tomada na fase de **pré-processamento** (antes da compilação): o pré-processador mantém apenas o trecho `#else` e descarta o resto. Por isso as diretivas não aparecem no executável final: elas já foram resolvidas e removidas antes da geração do código.
