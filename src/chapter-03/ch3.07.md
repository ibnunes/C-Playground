# Ficha 03 - Resolução das questões abertas

## Exercício 3.7

**NOTA!** NÃO vão ser implementados programas para testar as propostas de resolução apresentadas! **Estas propostas devem ser consultadas AYOR!**

### a)
**A variável lógica L é verdadeira se e só se L1 e L2 forem ambas falsas.**

```c
L = !(L1 || L2);
```

### b)
**A variável lógica VALOR é verdadeira se e só se X é maior que Y.**

```c
VALOR = (X > Y);
```

### c)
**A variável lógica L é verdadeira se e só se L1 é verdadeira mas não L2.**

```c
L = L1 && !L2;
```

### d)
**BOOL é verdadeira se e só se os inteiros I e J forem iguais em valor absoluto.**

```c
BOOL = abs(I) == abs(J);
```

### e)
**LOGIC é verdadeira se e só se M for o dobro de N.**

```c
LOGIC = M == 2*N;
```

### f)
**CONSOANTE é verdadeira se e só se a variável carácter LETRA for uma consoante minúscula.**

```c
CONSOANTE = (LETRA >= 'a') && (LETRA <= 'z');
```

### g)
**XOR é verdadeira se e só se apenas uma das variáveis B1 ou B2 for verdadeira.**

```c
XOR = (B1 && !B2) || (!B1 && B2);
```

### h)
**PAR é verdadeira se e só se o inteiro N for par.**

```c
PAR = !(N % 2);
```

### i)
**BISSEXTO é verdadeira se e só se a variável inteira ANO for divisível por 4 mas não por 100 ou então for divisível por 400.**

```c
BISSEXTO = (!(ANO % 4) && (ANO % 100)) || (ANO % 400);
```

### j)
**NULL é verdadeira se e só se I for múltiplo de J (ambos inteiros).**

```c
NULL = !(I % J);
```

### k)
**VOGAL é verdadeira se e só se a variável carácter CAR for uma vogal.**

```c
VOGAL = (CAR == 'A') || (CAR == 'E') || (CAR == 'I') || (CAR == 'O') || (CAR == 'U') ||
        (CAR == 'a') || (CAR == 'e') || (CAR == 'i') || (CAR == 'o') || (CAR == 'u');
```

### l)
**COMPLEX é verdadeira se e só se a equação ax² + bx + c = 0 tem raízes complexas.**

```c
COMPLEX = (b*b - 4*a*c) < 0;
```

### m.
**DIGITO é verdadeira se e só se a variável carácter CAR representa um algarismo decimal.**

```c
DIGITO = (CAR >= '0') && (CAR <= '9');
```
