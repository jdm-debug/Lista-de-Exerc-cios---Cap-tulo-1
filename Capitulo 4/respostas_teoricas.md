# Lista de Exercícios — Capítulo 4: Comandos de Decisão

## PARTE I — Questões Teóricas e Analíticas

### Questão 01 — Avaliação de Expressões Condicionais e Atribuição vs. Igualdade

**a)** `if (x = 0)` **não compara**, **atribui**: o valor `0` é gravado em `x` e o resultado da expressão de atribuição é o próprio valor atribuído (`0`). Como `0` é interpretado como **falso**, o bloco do `if` **nunca é executado** (o `else`, se existir, é que roda). Além disso, `x` fica **modificado** para `0`, o que costuma gerar bugs silenciosos. Já `if (x == 0)` apenas compara e não altera `x`.

**b)** Em C não existe o tipo booleano "puro" (no ANSI C/C89): qualquer valor numérico (inteiro ou real) pode ser usado como condição. **Zero (`0`, `0.0`, `'\0'`, ponteiro nulo) significa falso**; **qualquer valor diferente de zero significa verdadeiro** (inclusive negativos e fracionários como `-3` ou `0.1`). Operadores relacionais e lógicos (`==`, `<`, `&&`, `!` ...) produzem `1` (verdadeiro) ou `0` (falso).

**c)** O bloco **será executado**. A expressão `x = -5` atribui `-5` a `x` e vale `-5`. Pelo padrão ANSI C (seção 3.6.4.1 do C89), *"a primeira subinstrução é executada se a expressão for diferente de 0"*. Como `-5 != 0`, a condição é verdadeira. Ao final, `x` valerá `-5`.

---

### Questão 02 — Associação do `else` e Aninhamento

**a)** Será impressa: **`Opção B`**. Como `x > 10` é verdadeiro (15 > 10), entra-se no `if` externo, que executa o comando seguinte: o `if (y > 10)` interno. Como `y > 10` é falso (5 > 10), o `else` — que pertence a esse `if` **interno** — é executado, imprimindo "Opção B". A indentação do código engana: visualmente o `else` parece ser do `if` externo, mas não é.

**b)** Regra oficial: **o `else` sempre se associa ao `if` mais próximo que ainda não possui `else`** (o "if pendente" mais próximo, *dangling else*), independentemente da indentação.

**c)** Para que "Opção B" apareça **somente** quando `x <= 10`, o `else` deve pertencer ao `if` externo:

```c
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

Com `x = 15, y = 5` nada é impresso (x > 10, mas y não é > 10); com `x <= 10` imprime "Opção B".

---

### Questão 03 — Operador Ternário vs. `if-else`

**a)** O operador ternário `condição ? valor_se_verdadeiro : valor_se_falso` avalia primeiro a condição `(media >= 7.0)`. Se for verdadeira, o resultado da expressão é `'A'`; se for falsa, é `'R'`. Esse resultado é então atribuído a `situacao`. Para `media = 6.8`, `6.8 >= 7.0` é falso, logo `situacao` receberá **`'R'`** (Reprovado).

**b)**
```c
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c)** **Não.** O ternário é uma **expressão** (produz um valor), não um comando. Limitações:
- Cada ramo deve ser **uma expressão**; não aceita blocos `{ }` com vários comandos, declarações de variáveis, `return`, `break`, `printf` com lógica extensa etc. (só dá para encadear com o operador vírgula, o que prejudica a legibilidade);
- Os dois ramos precisam ter tipos compatíveis (o resultado sofre conversão para um tipo comum);
- Aninhar vários ternários rapidamente torna o código ilegível;
- Um `if` sem `else` não tem equivalente direto.

Portanto o ternário só substitui `if-else` simples que *escolhem um valor*; para múltiplos comandos usa-se `if-else` tradicional.

---

### Questão 04 — `switch-case` e Fall-Through

**a)** Saída exata:
```
Prata
Ouro
```
Com `codigo = 2`, o fluxo entra em `case 2` e imprime "Prata". Como **não há `break`** nesse case, a execução **continua** para o `case 3` (sem testar o rótulo), imprime "Ouro" e só então o `break` encerra o `switch`. O `default` não é executado.

**b)** O `break` **interrompe o `switch`**, transferindo a execução para a primeira instrução após o bloco. Quando é omitido, ocorre o fenômeno chamado **fall-through** (queda/cascata): a execução "cai" nos `case` seguintes até encontrar um `break` ou o fim do `switch`.

**c)** A expressão do `switch` deve ser de **tipo inteiro**: `int`, `char`, `short`, `long`, `enum` (e suas variantes `unsigned`). **Não é permitido `float` ou `double`**, pois o padrão exige tipo integral: números de ponto flutuante têm representação aproximada (imprecisa), tornando a comparação de igualdade com rótulos constantes não confiável; além disso os rótulos `case` precisam ser **constantes inteiras**.

---

### Questão 05 — Curto-Circuito

Código: `a = 0, b = 5, c = 10`

**a)** Saída: **`a = 0, b = 5, c = 8`**. Como `a != 0` é falso, o `&&` já sabe que o resultado será falso e **ignora** o lado direito: `++b` **não foi executado** (b continua 5). Cai no `else`: `c -= 2` → `c = 8`.

**b)**
- **`&&` (E):** se o operando da esquerda for **falso**, o resultado é falso e o da direita **não é avaliado**.
- **`||` (OU):** se o operando da esquerda for **verdadeiro**, o resultado é verdadeiro e o da direita **não é avaliado**.

Isso evita cálculos desnecessários e permite proteções como `if (p != NULL && p->x > 0)`, mas também significa que efeitos colaterais (como `++b`) do lado direito podem não ocorrer.

**c)** Com `if (a == 0 || ++b > 5)`: `a == 0` é verdadeiro, logo o `||` **não avalia** `++b`. Entra no `if`: `c += 10`. Valores finais: **`b = 5` e `c = 20`**.

---

### Questão 06 — `else-if` e Análise de Intervalos

**a)** Para `idade = 65` a saída é:
```
Idoso
Adulto
Jovem
```
Os três `if` são **independentes**: cada condição é testada separadamente; 65 >= 60, 65 >= 18 e 65 >= 12 são todos verdadeiros. O `else` só pertence ao último `if` (`idade >= 12`).

**b)** Em uma sequência de `if` independentes, **todas** as condições são avaliadas e vários blocos podem executar. Em uma cadeia `else-if`, as condições são testadas em ordem e, **na primeira verdadeira, o bloco é executado e o restante da cadeia é ignorado** — no máximo um bloco roda.

**c)**
```c
int idade = 25;

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```

---

## PARTE II — Questões Práticas

As questões 07 a 28 estão implementadas nos arquivos `questao_07.c` a `questao_28.c` desta pasta.
