# General information
* **Language:** Portuguese
* **Year of creation:** 2018
* **Last updated:** October 24th, 2018
* **Current status:** paused


# O que é o _C Playground_?

Este repositório contém exemplos clássicos de problemas em C colocados a principiantes na linguagem.


# Para quem se destina?

Para qualquer aprendiz da linguagem C.


# Como está organizado?

A hierarquia de pastas é a seguinte:

* **pdf** - pasta com os exercícios por capítulo (ver _To-Do List_ para mais informações).
* **src** - pasta com os códigos-fonte:
   * **chapter-`XX`** - 1 pasta por cada capítulo, onde `XX` é o respectivo número;
      * **`chF.E.c`** - onde `F` é o número do capítulo e `E` o número do exercício;


# Como compilar o código?

Os códigos-fonte devem ser compilados usando o _standard_ **c99**.

```
gcc -std=c99 -o <output> <input.c> [-lm]
```

Instruções adicionais são fornecidas em cada ficheiro \*.c caso sejam necessárias (por exemplo, o uso de `-lm` para quando a biblioteca `math.h` é incluída).


# Como posso usar o código deste repositório?

_Do what the fuck you want_. **_Enjoy it!_**


# _To-Do List_

* Falta colocar os ficheiros PDF com os exercícios de cada capítulo.
