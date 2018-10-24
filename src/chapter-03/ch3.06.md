# Ficha 03 - Resolução das questões abertas

## Exercício 3.6

**NOTA!** NÃO vão ser implementados programas para testar as propostas de resolução apresentadas! **Estas propostas devem ser consultadas AYOR!**

### a)
**A variável I é incrementada de uma unidade.**

Todas as seguintes expressões são equivalentes (algumas nuances aplicam-se, mas não são pertinentes para a presente questão):

```c
I = I + 1;
I += 1;
I++;
++I;
```

### b)
**M é uma cópia do valor de X.**

```c
M = X;
```

### c)
**Q é o valor da divisão inteira dos inteiros I e J.**

Sendo `I`, `J` e `Q` do tipo `int`:

```c
Q = I / J;
```

### d)
**X é o valor da divisão real dos inteiros I e J.**

Sendo `X` do tipo `float`:

```c
X = (float)I / J;
```

### e)
**I é o valor arredondado do real X.**

Pela falta de mais dados no exercício, vamos assumir um arredondamento às unidades.

Existem várias formas de resolver este problema, mas vamos optar por **truncar** o valor arredondado, o qual se obtém pela soma com `0.5`. Se `I` for `int`, teremos o seguinte:

```c
I = (int)(X + 0.5);
```

Contudo, se `I` for `float`:

```c
I = (float)(int)(X + 0.5);
```

### f)
**I é o maior inteiro inferior ou igual a X positivo.**

```c
I = (int)X;
```

### g)
**M é o inteiro mais próximo da média dos reais A e B.**

```c
M = (int)((A + B) / 2.0 + 0.5);
```

### h)
**A variável t20 toma o valor da tangente de 20 graus.**

Deve ser usada a biblioteca `math.h` com a respectiva directiva de compilação `-lm`.

```c
t20 = tanf(M_PI * 20.0 / 180.0);
```

### i)
**Dado n inteiro não nulo, a variável inteira SINAL toma o valor 1 se n for positivo e –1 se n for
negativo.**

Deve ser usada a biblioteca `math.h` com a respectiva directiva de compilação `-lm`.

```c
SINAL = (int)(n / fabs(n));
```

Existem soluções melhores, mas os conceitos inerentes não foram abordados até este ponto.

### j)
**U toma o valor do algarismo das unidades do real X.**

```c
U = ((int)X) % 10;
```

### k)
**R toma o valor de x se x for não negativo, ou de -x no caso contrário.**

Por interpretação do enunciado, R toma `-x` para `x` negativo, o que corresponde a `-(-x)`, ou seja, o módulo de `x`:

```c
R = fabs(x);
```

Deve ser usada a biblioteca `math.h` com a respectiva directiva de compilação `-lm`.

### l)
**Z toma o valor do módulo de Y elevado a X.**

Deve ser usada a biblioteca `math.h` com a respectiva directiva de compilação `-lm`.

```c
Z = powf(fabs(Y), X);
```

### m)
**ALFA é o ângulo (em graus) cuja tangente é x.**

Deve ser usada a biblioteca `math.h` com a respectiva directiva de compilação `-lm`.

```c
ALFA = atan(X) * 180.0 / M_PI;
```

### n)
**y toma o valor da expressão y + 4x + 3x² + 2x³ + x⁴ .**

Para a segunda proposta, deve ser usada a biblioteca `math.h` com a respectiva directiva de compilação `-lm`.

```c
y += 4*x + 3*x*x + 2*x*x*x + x*x*x*x;
y += 4*x + 3*powf(x, 2.0) + 2*powf(x, 3.0) + powf(x, 4.0);
```

### o)
**z toma o valor da expressão log_7(3x² + 6) .**

Deve ser usada a biblioteca `math.h` com a respectiva directiva de compilação `-lm`.

```c
z = log(3*x*x + 6.0) / log(7.0);
```

### p)
**A variável inteira PAR vale 1 se N for par e 2 se N for ímpar.**

```c
PAR = (N % 2) + 1;
```

### q)
**A variável inteira ALTR toma o valor de (-1)ⁿ com n inteiro.**

Deve ser usada a biblioteca `math.h` com a respectiva directiva de compilação `-lm`.

```c
ALTR = powf(-1.0, (float)n);
