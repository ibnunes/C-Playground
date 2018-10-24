# Ficha 03 - Resolução das questões abertas

## Exercício 3.8

### a)
**x é maior que 56.**

```c
x > 56
```

### b)
**z não é 9.**

```c
z != 9
```

### c)
**y é no máximo 100.**

```c
y <= 100
```

### d)
**x é divisível por 2.**

```c
x % 2 == 0
```

### e)
**x está entre 0 e 10 inclusivamente.**

```c
(x >= 0) && (x <= 10)
```

### f)
**x ou y é 20.**

```c
(x == 20) || (y == 20)
```

### g)
**x é maior que y, o qual é maior que z.**

```c
(x > y) && (y > z)
```

### h)
**A soma de x e y é negativa.**

```c
x + y < 0
```

### i)
**y tem o valor 73.**

```c
y == 73
```

### j)
**Metade de z é pelo menos 20.**

```c
z / 2 >= 20
```

### k)
**x e y são ambos positivos.**

```c
(x > 0) && (y > 0)
```

### l)
**x é maior que 5 e menor que –5.**

```c
(x > 5) && (x < -5)
```

**Nota:** esta condição nunca é verdadeira.

### m)
**x não é igual a 0 e y não é negativo.**

```c
(x != 0) && !(y < 0)
```
